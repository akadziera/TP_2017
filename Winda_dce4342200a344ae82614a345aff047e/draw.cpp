// draw.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "draw.h"
#include "targetver.h"

#include <Windows.h>
#include <vector>

#include <vector>
#include <cstdio>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <math.h>

using namespace std;

#define MAX_LOADSTRING 100
#define TMR_1 1

// Global Variables:
HINSTANCE hInst;								// current instance
TCHAR szTitle[MAX_LOADSTRING];					// The title bar text
TCHAR szWindowClass[MAX_LOADSTRING];			// the main window class name

struct person{
	int destination;
	int loc_x;
	int loc_y;
};

struct door_s{
	int number;
	int x;
	int high;
};

door_s door = { 0,0,0 };
/*
IDLE - stan nicoœci. jest na dole
STAY - przyjecha³ na piêtro i czeka na rozkazy
OPEN - stoi winda, otwieraj¹ siê drzwi
CLOSE - stoi winda, zamykanie drzwi
GO - winda gotowa do jazdy
UP - winda w trakcie jazdy do góry
DOWN - winda w trakcie jazdy na dó³
IN - proces wchodzenia ludzi
OUT - proces wychodzenia
*/
enum{IDLE, STAY, OPEN, OUTSIDE, INSIDE, DOORDER, CLOSE, GO, UP, DOWN};		
static int ele_floor[5] = {441, 351, 261, 171, 81};

struct lift {
	int aim;
	int loc;
	int state;
	int time;
	bool upper;
	std::vector<person> people;
};

person human;
lift elevator = { 0, 0, STAY, 0, true};
std::vector<person> floors[5];

//buttons
HWND hwndButton;

// Forward declarations of functions included in this code module:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);


void DrawInfrastructure(HDC hdc, Graphics &graphics) {
	Pen pen(Color(255, 0, 0, 0), 2);
	Pen pen2(Color(200, 0, 0, 255));
	graphics.DrawRectangle(&pen, 450, 60, 228, 480);							// LIFT
	graphics.DrawRectangle(&pen, 700, 10, 100, 50);							// INFO
	for (int i = 0; i<3; i++) graphics.DrawLine(&pen2, 30, 528 - 180 * i, 450, 528 - 180 * i);  //floor
	for (int i = 0; i<2; i++) graphics.DrawLine(&pen2, 678, 438 - 180 * i, 1110, 438 - 180 * i);//floor
}

void DrawPeople(HDC hdc, Graphics &graphics) {
	Image image1(L"ludzik1.jpg");
	Image image2(L"ludzik2.jpg");
	Image image3(L"ludzik3.jpg");
	Image image4(L"ludzik4.jpg");
	Image image5(L"ludzik5.jpg");
	
	for (int j = 0; j < 5; j++) {
		for (unsigned int i = 0; i < floors[j].size(); i++) {
			if (floors[j][i].destination == 0) graphics.DrawImage(&image1, floors[j][i].loc_x, floors[j][i].loc_y); else
			if (floors[j][i].destination == 1) graphics.DrawImage(&image2, floors[j][i].loc_x, floors[j][i].loc_y); else
			if (floors[j][i].destination == 2) graphics.DrawImage(&image3, floors[j][i].loc_x, floors[j][i].loc_y); else
			if (floors[j][i].destination == 3) graphics.DrawImage(&image4, floors[j][i].loc_x, floors[j][i].loc_y); else
			if (floors[j][i].destination == 4) graphics.DrawImage(&image5, floors[j][i].loc_x, floors[j][i].loc_y);
		}
	}

	for (unsigned int i = 0; i < elevator.people.size(); i++) {
		if (elevator.people[i].destination == 0) graphics.DrawImage(&image1, elevator.people[i].loc_x, elevator.people[i].loc_y); else
		if (elevator.people[i].destination == 1) graphics.DrawImage(&image2, elevator.people[i].loc_x, elevator.people[i].loc_y); else
		if (elevator.people[i].destination == 2) graphics.DrawImage(&image3, elevator.people[i].loc_x, elevator.people[i].loc_y); else
		if (elevator.people[i].destination == 3) graphics.DrawImage(&image4, elevator.people[i].loc_x, elevator.people[i].loc_y); else
		if (elevator.people[i].destination == 4) graphics.DrawImage(&image5, elevator.people[i].loc_x, elevator.people[i].loc_y);
	}
}

void moveElevator(Graphics &graphics, HWND hWnd, Pen &pen) {
	SetTimer(hWnd, TMR_1, 1, 0);

	if (elevator.state == UP) {
		elevator.loc--;
		for (unsigned i = 0; i < elevator.people.size(); i++) {
			elevator.people[i].loc_y--;
		}
	}

	else{
		elevator.loc++;
		for (unsigned i = 0; i < elevator.people.size(); i++) {
			elevator.people[i].loc_y++;
		}
	}

	if(elevator.loc == ele_floor[elevator.aim]){
		elevator.state = STAY;
	}
}

void movePeopleOut(HWND hWnd, int number) {
	SetTimer(hWnd, TMR_1, 1, 0);
	
	if (elevator.aim % 2)	elevator.people[number].loc_x++;
	else					elevator.people[number].loc_x--;

	if (elevator.people[number].loc_x > 800 || elevator.people[number].loc_x < 200) {
		elevator.people.erase(elevator.people.begin() + number);
	}
}

void movePeopleIn(HWND hWnd, int number) {
	
	if (elevator.aim % 2) {
		elevator.people.push_back(floors[elevator.aim][number]); 
		floors[elevator.aim].erase(floors[elevator.aim].begin() + number);
	}
	else {

		elevator.people.insert(elevator.people.begin(), floors[elevator.aim][number]);
		floors[elevator.aim].erase(floors[elevator.aim].begin() + number );
	}

}

//ustawienie ludzi na dobrych mijescach na piêtrze oraz w windzie
void doOrder(HWND hWnd) {
	SetTimer(hWnd, TMR_1, 1, 0);
	bool change = false;

	if (elevator.aim % 2) {
		//w windzie ludzie siê ustawiaj¹ w rzêdzie
		for (unsigned int d = 0; d < elevator.people.size(); d++) {
			if (elevator.people[d].loc_x > 460 + d * 24) {
				elevator.people[d].loc_x--;
				change = true;
			}
			else if (elevator.people[d].loc_x < 460 + d * 24) {
				elevator.people[d].loc_x++;
				change = true;
			}
		}

		for (unsigned int d = 0; d < floors[elevator.aim].size(); d++) {
			if (floors[elevator.aim][d].loc_x > 679 + d * 42) {
				floors[elevator.aim][d].loc_x--;
				change = true;
			}
		}
	}
	else {
		//w windzie ludzie siê ustawiaj¹ w rzêdzie
		for (unsigned int d = 0; d < elevator.people.size(); d++) {
			if (elevator.people[d].loc_x < 460 + d * 24) {
				elevator.people[d].loc_x++;
				change = true;
			}
			else if (elevator.people[d].loc_x < 460 + d * 24) {
				elevator.people[d].loc_x++;
				change = true;
			}
		}
		//ludzie na piêtrze podchodz¹ do windy
		for (unsigned int d = 0; d < floors[elevator.aim].size(); d++) {
			if (floors[elevator.aim][d].loc_x < 405 - d * 42) {
				floors[elevator.aim][d].loc_x++;
				change = true;
			}

		}
	}

	if (change == false) {
		KillTimer(hWnd, TMR_1);
		elevator.state = CLOSE;
	}

}

void openDoor(Graphics &graphics, HWND hWnd, int number) {
	SetTimer(hWnd, TMR_1, 1, 0);
	door.number = number;
	if (door.number % 2)	door.x = 676;
	else					door.x = 451; 
	
	if(door.high < 88) door.high++;
	else {
		KillTimer(hWnd, TMR_1);
		elevator.state = OUTSIDE;
	}
}

void closeDoor(Graphics &graphics, HWND hWnd) {
	SetTimer(hWnd, TMR_1, 1, 0);

	if (door.high) door.high--;
	else {
	//	KillTimer(hWnd, TMR_1);
		elevator.state = GO;
	}

}

void wait5s(HWND hWnd) {
	SetTimer(hWnd, TMR_1, 1, 0);
	if (++elevator.time > 350) {
		elevator.state = DOWN;
		elevator.time = 0;
		elevator.aim=0;
	}
}

void DrawWeight(HDC hdc, Graphics &graphics) {
	int weight = elevator.people.size() * 70;
	ostringstream output;
	output << weight;
 
	string outputdata = output.str();
	TextOutA(hdc, 740, 20, outputdata.c_str(), outputdata.size());

}



void MyOnPaint(HDC hdc, HWND hWnd)
{
	///double buffer

	RECT *re = new RECT;
	GetClientRect(hWnd, re);
	HDC memDC = CreateCompatibleDC(hdc);
	HBITMAP hBM = CreateCompatibleBitmap(hdc, re->right, re->bottom);
	SelectObject(memDC, hBM);
	// Fill with white color
	HBRUSH hbr = CreateSolidBrush(RGB(255, 255, 255));
	RECT r;
	SetRect(&r, 0, 0, re->right, re->bottom);
	FillRect(memDC, &r, hbr);

	//rysowanie

	Graphics graphics(memDC);
	Pen pen(Color(225, 255, 0, 0), 2);
	Pen pen_white(Color(255, 255, 255, 255), 5);


	if ((elevator.state == STAY)) {		//winda w³aœnie stanê³a
		if (elevator.aim == 4) elevator.upper = false;
		if (elevator.aim == 0) elevator.upper = true;
		if (elevator.upper) {
			
			for (unsigned int i = 0; i < elevator.people.size(); i++) {
				if (elevator.people[i].destination == elevator.aim) elevator.state = OPEN;
			}
			if (elevator.people.size() < 8) {
				for (unsigned int i = 0; i < floors[elevator.aim].size(); i++) {
					if (floors[elevator.aim][i].destination > elevator.aim) elevator.state = OPEN;
				}
			}
		}
		else {
			if (elevator.aim == 0) elevator.upper = true;
			for (unsigned int i = 0; i < elevator.people.size(); i++) {
				if (elevator.people[i].destination == elevator.aim) elevator.state = OPEN;
			}
			if (elevator.people.size() < 8) {
				for (unsigned int i = 0; i < floors[elevator.aim].size(); i++) {
					if (floors[elevator.aim][i].destination < elevator.aim) elevator.state = OPEN;
				}
			}
		}
		if (elevator.state != OPEN) {
			for(unsigned int i = 0; i < floors[elevator.aim].size(); i++)
				if (floors[elevator.aim][i].destination < elevator.aim) {
					elevator.upper = false;
					elevator.state = OPEN;
				}
		}
		
		if (elevator.state == OPEN) openDoor(graphics, hWnd, elevator.aim);
		if (elevator.state == STAY) elevator.state = GO;
	}


	if (elevator.state == OPEN) openDoor(graphics, hWnd, elevator.aim);


	if (elevator.state == OUTSIDE) {
		int how_many_out = 0;
		for (unsigned int i = 0; i < elevator.people.size(); i++) {
			if (elevator.people[i].destination == elevator.aim) {
				movePeopleOut(hWnd, i);
				how_many_out++;
			}
		}
		if (!how_many_out) elevator.state = INSIDE;
	}

	if (elevator.state == INSIDE) {
		int brought = 0;
		if (floors[elevator.aim].size() != 0) {
			int d = (floors[elevator.aim].size() > 8 - elevator.people.size()) ? 8 - elevator.people.size() : floors[elevator.aim].size();
			for (unsigned int i = 0; i < d; i++) {
				if ((floors[elevator.aim][i - brought].destination > elevator.aim && elevator.upper == true) ||
					(floors[elevator.aim][i - brought].destination < elevator.aim && elevator.upper == false)) {
						movePeopleIn(hWnd, i - brought);
						brought++;

				}
			}
		}
	
		elevator.state = DOORDER;
	}

	if (elevator.state == DOORDER) doOrder(hWnd);

	if (elevator.state == CLOSE) closeDoor(graphics, hWnd);

	if (elevator.state == GO) {
		//wszêdzie pusto
		if (elevator.people.empty() ) {
			int empty = 0;
			for (int i = 0; i < 5; i++) {
				if (floors[i].empty()) empty++;
			}
			if (empty == 5) elevator.state = IDLE;
		}

		if(elevator.state != IDLE){
			elevator.time = 0;

			//jedzie do góry generalnie
			if (elevator.upper) {
				if (elevator.aim == 4) {
					elevator.upper = false;
					elevator.state = DOWN;
				}
				else if (elevator.people.size()) {
					for (unsigned int i = 0; i < elevator.people.size(); i++) {
						if (elevator.people[i].destination > elevator.aim) elevator.state = UP;
					}
				}
				else if (elevator.state == GO && elevator.people.size() == 8) elevator.state = DOWN;
				else {
					int count = 0;

					for (unsigned int i = elevator.aim; i < 4; i++) {
						for (unsigned int j = 0; j < floors[i].size(); j++) {
							if (floors[i][j].destination >= elevator.aim) { elevator.state = UP; count++; }
						}
					}
					if (!count) {
						elevator.state = DOWN;
						elevator.upper = false;
					}
				}
			if (elevator.state == GO) elevator.state = DOWN;
			}

			//zje¿d¿a na dó³
			else {
				if (elevator.aim == 0) {
					elevator.upper = true;
					elevator.state = UP;
				}
				else if (elevator.people.size()) {
					for (unsigned int i = 0; i < elevator.people.size(); i++) {
						if (elevator.people[i].destination < elevator.aim) elevator.state = DOWN;
					}
				}
				else if (elevator.state == GO & elevator.people.size() == 8) elevator.state = UP;
				else {
					int count = 0;
					for (unsigned int i = elevator.aim; i > 0; i--) {
						for (unsigned int j = 0; j < floors[i].size(); j++) {
							if (floors[i][j].destination < elevator.aim) { elevator.state = DOWN; count++; }
						}
					}
					if (!count) {
						elevator.state = UP;
						elevator.upper = true;
					}
				}
				if (elevator.state == GO) elevator.state = UP;
				
			}

			if (elevator.state == UP) elevator.aim++;
			else if (elevator.state == DOWN) elevator.aim--;
		}
	}

	if (elevator.state == UP || elevator.state == DOWN) moveElevator(graphics, hWnd, pen);
	
	
	if (elevator.state == IDLE) {
		if (elevator.people.empty()) {
			SetTimer(hWnd, TMR_1, 1, 0);
			int empty = 0;
			for (int i = 0; i < 5; i++) if (floors[i].empty()) empty++;
			if (empty != 5) elevator.state = STAY;
			else if (elevator.aim != 0) wait5s(hWnd);
		}
	}

		DrawInfrastructure(memDC, graphics);
		DrawWeight(memDC, graphics);
		graphics.DrawRectangle(&pen, 453, elevator.loc, 222, 88);												//rysowanie windy
		graphics.DrawLine(&pen_white, door.x, ele_floor[door.number]+1, door.x, ele_floor[door.number] + door.high +1);	//otwieranie drzwi	
		
		DrawPeople(memDC, graphics);

		///kasowanie memDC
 		BitBlt(hdc, 0, 0, re->right, re->bottom, memDC, 0, 0, SRCCOPY);
		DeleteObject(hBM);
		DeleteDC(memDC);
	
}

void repaintWindow(HWND hWnd, HDC &hdc, PAINTSTRUCT &ps, RECT *drawArea)
{
	if (elevator.loc == 0)	elevator.loc = ele_floor[0];
	if (drawArea == NULL)
		InvalidateRect(hWnd, NULL, TRUE); // repaint all
	else
		InvalidateRect(hWnd, drawArea, TRUE); //repaint drawArea
	hdc = BeginPaint(hWnd, &ps);
	MyOnPaint(hdc, hWnd);
	EndPaint(hWnd, &ps);
}

int OnCreate(HWND window)
{
   return 0;
}



int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	
 	// TODO: Place code here.
	MSG msg;
	HACCEL hAccelTable;

	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR           gdiplusToken;
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

	// Initialize global strings
	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_DRAW, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// Perform application initialization:
	if (!InitInstance (hInstance, nCmdShow))
	{
		return FALSE;
	}

	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_DRAW));

	// Main message loop:
	while (GetMessage(&msg, NULL, 0, 0))
	{
		if (!TranslateAccelerator(msg.hwnd, hAccelTable, &msg))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
	}

	GdiplusShutdown(gdiplusToken);

	return (int) msg.wParam;
}



//
//  FUNCTION: MyRegisterClass()
//
//  PURPOSE: Registers the window class.
//
//  COMMENTS:
//
//    This function and its usage are only necessary if you want this code
//    to be compatible with Win32 systems prior to the 'RegisterClassEx'
//    function that was added to Windows 95. It is important to call this function
//    so that the application will get 'well formed' small icons associated
//    with it.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEX wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style			= CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc	= WndProc;
	wcex.cbClsExtra		= 0;
	wcex.cbWndExtra		= 0;
	wcex.hInstance		= hInstance;
	wcex.hIcon			= LoadIcon(hInstance, MAKEINTRESOURCE(IDI_DRAW));
	wcex.hCursor		= LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground	= NULL;
	wcex.lpszMenuName	= MAKEINTRESOURCE(IDC_DRAW);
	wcex.lpszClassName	= szWindowClass;
	wcex.hIconSm		= LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassEx(&wcex);
}

//
//   FUNCTION: InitInstance(HINSTANCE, int)
//
//   PURPOSE: Saves instance handle and creates main window
//
//   COMMENTS:
//
//        In this function, we save the instance handle in a global variable and
//        create and display the main program window.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
   HWND hWnd;

   hInst = hInstance; // Store instance handle in our global variable

   hWnd = CreateWindow(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
      CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, NULL, NULL, hInstance, NULL);

   //buttons
   //1' floor
   hwndButton = CreateWindow(TEXT("button"), TEXT("2"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 506, 23, 23, hWnd, (HMENU)ID_BUTTON1, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("3"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 482, 23, 23, hWnd, (HMENU)ID_BUTTON2, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("4"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 458, 23, 23, hWnd, (HMENU)ID_BUTTON3, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("5"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 434, 23, 23, hWnd, (HMENU)ID_BUTTON4, hInstance, NULL);

   //2' floor
   hwndButton = CreateWindow(TEXT("button"), TEXT("1"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   1090, 416, 23, 23, hWnd, (HMENU)ID_BUTTON5, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("3"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   1090, 392, 23, 23, hWnd, (HMENU)ID_BUTTON6, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("4"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   1090, 368, 23, 23, hWnd, (HMENU)ID_BUTTON7, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("5"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   1090, 344, 23, 23, hWnd, (HMENU)ID_BUTTON8, hInstance, NULL);

   //3' floor
   hwndButton = CreateWindow(TEXT("button"), TEXT("1"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 326, 23, 23, hWnd, (HMENU)ID_BUTTON9, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("2"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 302, 23, 23, hWnd, (HMENU)ID_BUTTON10, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("4"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 278, 23, 23, hWnd, (HMENU)ID_BUTTON11, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("5"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 254, 23, 23, hWnd, (HMENU)ID_BUTTON12, hInstance, NULL);

   //4' floor
   hwndButton = CreateWindow(TEXT("button"), TEXT("1"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   1090, 236, 23, 23, hWnd, (HMENU)ID_BUTTON13, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("2"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   1090, 212, 23, 23, hWnd, (HMENU)ID_BUTTON14, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("3"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   1090, 188, 23, 23, hWnd, (HMENU)ID_BUTTON15, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("5"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   1090, 164, 23, 23, hWnd, (HMENU)ID_BUTTON16, hInstance, NULL);

   //5' floor
   hwndButton = CreateWindow(TEXT("button"), TEXT("1"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 146, 23, 23, hWnd, (HMENU)ID_BUTTON17, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("2"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 122, 23, 23, hWnd, (HMENU)ID_BUTTON18, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("3"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 98, 23, 23, hWnd, (HMENU)ID_BUTTON19, hInstance, NULL);

   hwndButton = CreateWindow(TEXT("button"), TEXT("4"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   10, 74, 23, 23, hWnd, (HMENU)ID_BUTTON20, hInstance, NULL);

   OnCreate(hWnd);

   if (!hWnd)
   {
      return FALSE;
   }

   ShowWindow(hWnd, nCmdShow);
   UpdateWindow(hWnd);

   return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_COMMAND	- process the application menu
//  WM_PAINT	- Paint the main window
//  WM_DESTROY	- post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;
	RECT DrawArea{ 50, 0, 1089, 900 };

	switch (message)
	{
	case WM_COMMAND:
		wmId    = LOWORD(wParam);
		wmEvent = HIWORD(wParam);
		// Parse the menu selections:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		case ID_BUTTON1:
			if (floors[0].size()<9) floors[0].push_back({ 1, 405 - 42 * (int)floors[0].size(), 472});
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON2:
			if (floors[0].size()<9) floors[0].push_back({ 2, 405 - 42 * (int)floors[0].size(), 472 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON3:
			if (floors[0].size()<9) floors[0].push_back({ 3, 405 - 42 * (int)floors[0].size(), 472 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON4:
			if (floors[0].size()<9) floors[0].push_back({ 4, 405 - 42 * (int)floors[0].size(), 472 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON5:
			if (floors[1].size()<9) floors[1].push_back({ 0, 679 + 42 * (int)floors[1].size(), 382 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON6:
			if (floors[1].size()<9) floors[1].push_back({ 2, 679 + 42 * (int)floors[1].size(), 382 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON7:
			if (floors[1].size()<9) floors[1].push_back({ 3, 679 + 42 * (int)floors[1].size(), 382 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON8:
			if (floors[1].size()<9) floors[1].push_back({ 4, 679 + 42 * (int)floors[1].size(), 382 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON9:
			if (floors[2].size()<9) floors[2].push_back({ 0, 405 - 42 * (int)floors[2].size(), 292 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON10:
			if (floors[2].size()<9) floors[2].push_back({ 1, 405 - 42 * (int)floors[2].size(), 292 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON11:
			if (floors[2].size()<9) floors[2].push_back({ 3, 405 - 42 * (int)floors[2].size(), 292 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON12:
			if (floors[2].size()<9) floors[2].push_back({ 4, 405 - 42 * (int)floors[2].size(), 292 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON13:
			if (floors[3].size() < 9) floors[3].push_back({ 0, 679 + 42 * (int)floors[3].size(), 202 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON14:
			if (floors[3].size()<9) floors[3].push_back({ 1, 679 + 42 * (int)floors[3].size(), 202 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON15:
			if (floors[3].size()<9) floors[3].push_back({ 2, 679 + 42 * (int)floors[3].size(), 202 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON16:
			if (floors[3].size()<9) floors[3].push_back({ 4, 679 + 42 * (int)floors[3].size(), 202 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON17:
			if (floors[4].size() < 9) floors[4].push_back({ 0, 405 - 42 * (int)floors[4].size(), 112 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON18:
			if (floors[4].size()<9) floors[4].push_back({ 1, 405 - 42 * (int)floors[4].size(), 112 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON19:
			if (floors[4].size()<9) floors[4].push_back({ 2, 405 - 42 * (int)floors[4].size(), 112 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		case ID_BUTTON20:
			if (floors[4].size()<9) floors[4].push_back({ 3, 405 - 42 * (int)floors[4].size(), 112 });
			repaintWindow(hWnd, hdc, ps, &DrawArea);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		repaintWindow(hWnd, hdc, ps, NULL);
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	case WM_TIMER:
		switch (wParam)
		{
			case TMR_1:
				InvalidateRect(hWnd, &DrawArea, TRUE);
				hdc = BeginPaint(hWnd, &ps);
				repaintWindow(hWnd, hdc, ps, &DrawArea);
				EndPaint(hWnd, &ps);
			break;
		}

	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

// Message handler for about box.
INT_PTR CALLBACK About(HWND hDlg, UINT message, WPARAM wParam, LPARAM lParam)
{
	UNREFERENCED_PARAMETER(lParam);
	switch (message)
	{
	case WM_INITDIALOG:
		return (INT_PTR)TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDOK || LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return (INT_PTR)TRUE;
		}
		break;
	}
	return (INT_PTR)FALSE;
}
