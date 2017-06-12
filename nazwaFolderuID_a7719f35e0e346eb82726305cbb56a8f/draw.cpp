// draw.cpp : Defines the entry point for the application.
//;

#include "stdafx.h"
#include "draw.h"
#include "time.h"
#include <vector>
#include <cstdio>
#include <fstream>
#include <string>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <math.h>
#include <time.h>


#define MAX_LOADSTRING 100
#define TMR_1 1

using namespace std;

int czest = 50,ktory=0, f1=0, f2=0,ktory1=0,predkosc=50 , o=0, produkt=0;


// Global Variables:
HINSTANCE hInst;								// current instance
TCHAR szTitle[MAX_LOADSTRING];					// The title bar text
TCHAR szWindowClass[MAX_LOADSTRING];			// the main window class name
HWND hwndButton1, hwndButton2, hwndButton3, hwndButton4,hwndButton5, hwndButton6, hwndButton7;

INT value, pozycja, x, value_ellipse2;

// Forward declarations of functions included in this code module:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);


	void kwadrat(HDC hdc,int &x, double &y, int prod) // kwadrat
	{
		
		int k = 300;
		Graphics graphics(hdc);
		Pen pen(Color(255, 0, 0, 255));
		Pen pen1(Color(222, 456, 42, 255));
			

				if ((x < 100) && (y == 80))
				{
					graphics.DrawRectangle(&pen1, x, y, 20, 20);
					x++;
				}
				if ((x >= 100) && (y<200))
				{
					graphics.DrawRectangle(&pen1, x, y, 20, 20);
					y++;
					x++;
				}

				if (x < 440 && (y >= 200))
				{
					graphics.DrawRectangle(&pen1, x, 200, 20, 20);
					x++;
				}
				if (x >= 440 && x < 640 && (y >= 200))
				{
					graphics.DrawRectangle(&pen1, x, (x / 2) - 20, 20, 20);
					x++;
				}
				if (prod != 1) {
					if (x >= 640 && x < 980 && (y >= 200))
					{
						graphics.DrawRectangle(&pen1, x, 300, 20, 20);
						x++;
					}
					if (x == 980) {
						y = k;
						x++;
					}
					if (x >= 980)
					{
						graphics.DrawRectangle(&pen1, x,y, 20, 20);
						y++;
					}
				}
				else {
					if (x >= 640 && x < 1050 && (y>= 200))
					{
						graphics.DrawRectangle(&pen1, x, 300, 20, 20);
						x++;
					}
				}
		}
	

	void kolo(HDC hdc,int &x,double &y, int prod) // kolo
	{
	
		int k = 300;
		
		Graphics graphics(hdc);
		Pen pen(Color(255, 0, 0, 255));
		Pen pen2(Color(252, 100, 117, 155));

		

		if ((x < 100) && (y == 80))
		{
			graphics.DrawEllipse(&pen2, x, y, 20, 20);
			x++;
		}
		if ((x >= 100) && (y<200))
		{
			graphics.DrawEllipse(&pen2, x, y, 20, 20);
			y++;
			x++;
		}
		if (x < 440 && (y >= 200))
		{
			graphics.DrawEllipse(&pen2, x, 200, 20, 20);
			x++;
		}
		if (x >= 440 && x < 640 && (y >= 200))
		{
			graphics.DrawEllipse(&pen2, x, (x / 2) - 16, 20, 20);
			x++;
		}
		
		if (prod != 2) {
			if (x >= 640 && x < 980 && (y >= 200))
			{
				graphics.DrawEllipse(&pen2, x, 300, 20, 20);
				x++;
			}
			if (x == 980) {
				y = k;
				x++;
			}
			if (x >= 980)
			{
				graphics.DrawEllipse(&pen2, x, y, 20, 20);
				y++;
			}
		}
		else {
			if (x >= 640 && x < 1050 && (y >= 200))
			{
				graphics.DrawEllipse(&pen2, x, 300, 20, 20);
				x++;
			}
		}




	}

	void trojkat(HDC hdc, int &x, double &y, int prod) // trojkat
		
	{

		Graphics graphics(hdc);
		Pen pen(Color(1000, 1000, 900, 900));


		
		if ((x < 100) && (y == 80))
		{
			graphics.DrawLine(&pen, x, y , x + 10, y-20);
			graphics.DrawLine(&pen, x + 10, y-20, x + 20, y );
			graphics.DrawLine(&pen, x, y , x + 20, y );
			
			x++;
		}
		if ((x >= 100) && (y<200))
		{
			graphics.DrawLine(&pen, x, y, x + 10, y - 20);
			graphics.DrawLine(&pen, x + 10, y - 20, x + 20, y);
			graphics.DrawLine(&pen, x, y, x + 20, y);
			
			y++;
			x++;
		}

		if (x < 440 && (y >= 200))
		{
			graphics.DrawLine(&pen, x, y, x + 10, y - 20);
			graphics.DrawLine(&pen, x + 10, y - 20, x + 20, y);
			graphics.DrawLine(&pen, x, y, x + 20, y);
			
			x++;
			
		}
		if (x >= 440 && x < 640 && (y >= 200))
		{
			graphics.DrawLine(&pen, x, y, x + 10, y - 20);
			graphics.DrawLine(&pen, x + 10, y - 20, x + 20, y);
			graphics.DrawLine(&pen, x, y, x + 20, y);
			
			x++;
			y=y+0.5;
		}
		if (prod != 3) {
			if (x >= 640 && x < 980 && (y >= 200))
			{
				graphics.DrawLine(&pen, x, y, x + 10, y - 20);
				graphics.DrawLine(&pen, x + 10, y - 20, x + 20, y);
				graphics.DrawLine(&pen, x, y, x + 20, y);
				x++;
				
			}
			if (x == 980) {
				y = 300;
				x++;
			}
			if (x >= 980)
			{
				graphics.DrawLine(&pen, x, y+20, x + 10, y );
				graphics.DrawLine(&pen, x + 10, y , x + 20, y+20);
				graphics.DrawLine(&pen, x, y+20, x + 20, y+20);
				
				y++;
			}
		}
		else {
			if (x >= 640 && x < 1050 && (y >= 200))
			{
				graphics.DrawLine(&pen, x, y, x + 10, y - 20);
				graphics.DrawLine(&pen, x + 10, y - 20, x + 20, y);
				graphics.DrawLine(&pen, x, y, x + 20, y);
				
				x++;
			}
		}





		
	}
	

	


int OnCreate(HWND window)                     // ustawianie timera
{
   SetTimer(window, TMR_1, predkosc, 0);
   return 0;
}

class figura {
public:
	
	double y = 80;
	int x = 0;
	int ksztalt = 0;
	void maluj(HDC hdc, int prod) {
		if (ksztalt == 1) {
			kwadrat(hdc, x,y, prod);
		}
		if (ksztalt == 2) {	
			kolo(hdc, x, y, prod);
		};
		if (ksztalt == 3) {
			trojkat(hdc, x, y, prod);
		};
	};
};

vector<figura>figury, figurys;
	
void tworz(vector<figura> &figury,int poz) {
	figura obiekt;
	int k = 0;
	srand(time(NULL));
	k = rand() % 2 + 1;
	obiekt.ksztalt = k;
	obiekt.y = poz;
	figury.push_back(obiekt);
}

void linia(HDC hdc,int ktory,int poz,vector<figura> &figury, int &s, int czestotliwosc, int prod) {
	if (s <= 30) {
		for (int i = 0; i < s; i++) {
			figury[i].maluj(hdc,prod);

		};
	}
	else {
		for (int i = s-30; i < s; i++) {
			figury[i].maluj(hdc,prod);
		}
	};
	if (ktory % czestotliwosc == 0) {
		tworz(figury,poz);
		s++;
		};
		
	};
	
void buduj(vector<figura> &figury, vector<figura> &figurys, int f1) {
	
	if (figurys[o].y == 200) {
		if (f1 <= 30) {
			for (int j = 0; j < f1; j++) {
				if ((figurys[o].x - 20 <= figury[j].x) && (figury[j].x <= figurys[o].x + 20)) {
					if (figurys[o].ksztalt == figury[j].ksztalt) {
						figury[j].ksztalt = 3;
						figurys[o].ksztalt = 0;
					}
					else {
						figury[j].ksztalt = 1;
						figurys[o].ksztalt = 0;
					}
				};
			};
		}else {
			for (int j = f1-30; j < f1; j++) {
				if ((figurys[o].x - 20 <= figury[j].x) && (figury[j].x <= figurys[o].x + 20)) {
					if (figurys[o].ksztalt == figury[j].ksztalt) {
						figury[j].ksztalt = 3;
						figurys[o].ksztalt = 0;
					}
					else {
						figury[j].ksztalt = 1;
						figurys[o].ksztalt = 0;
					}
				};
			};
		};
		o++;
	};

};

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
	wcex.hbrBackground	= (HBRUSH)(COLOR_WINDOW+1);
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
   
   hwndButton1 = CreateWindow(TEXT("button"), TEXT("Zmniejsz czestotliwosc"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   205, 400, 200, 50, hWnd, (HMENU)ID_RBUTTON1, GetModuleHandle(NULL), NULL);

   hwndButton2 = CreateWindow(TEXT("button"), TEXT("Zwieksz czestotliwosc"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   405, 400, 200, 50, hWnd, (HMENU)ID_RBUTTON2, GetModuleHandle(NULL), NULL);
   hwndButton3 = CreateWindow(TEXT("button"), TEXT("Zmniejsz predkosc"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   605, 400, 200, 50, hWnd, (HMENU)ID_RBUTTON3, GetModuleHandle(NULL), NULL);
   hwndButton4 = CreateWindow(TEXT("button"), TEXT("Zwieksz predkosc"),
	   WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
	   805, 400, 200, 50, hWnd, (HMENU)ID_RBUTTON4, GetModuleHandle(NULL), NULL);
  
   hwndButton5 = CreateWindow(TEXT("button"), TEXT("TROJKAT"), WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON, 5, 400, 100, 50, hWnd, (HMENU)ID_RBUTTON5, GetModuleHandle(NULL), NULL);
   hwndButton6 = CreateWindow(TEXT("button"), TEXT("KOLO"), WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON, 5, 450, 100, 50, hWnd, (HMENU)ID_RBUTTON6, GetModuleHandle(NULL), NULL);
   hwndButton7 = CreateWindow(TEXT("button"), TEXT("KWADRAT"), WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON, 5, 500, 100, 50, hWnd, (HMENU)ID_RBUTTON7, GetModuleHandle(NULL), NULL);





  

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
	//OnCreate(hWnd,wParam,lParam);
	//OnTimer(hWnd,wParam,lParam);

	switch (message)
	{
	case WM_COMMAND:
		wmId = LOWORD(wParam);
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
		case ID_RBUTTON1:
			czest = czest*2;
			break;
		case ID_RBUTTON2:
			czest = czest/2;
			break;
		case ID_RBUTTON3:
			predkosc = predkosc * 2;
			OnCreate(hWnd);
			break;
		case ID_RBUTTON4:
			predkosc = predkosc / 2;
			OnCreate(hWnd);
			break;
		case ID_RBUTTON5:
			produkt = 3;
			OnCreate(hWnd);
			break;
		case ID_RBUTTON6:
			produkt = 2;
			OnCreate(hWnd);
			break;
		case ID_RBUTTON7:
			produkt = 1;
			OnCreate(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		break;
	case WM_PAINT:
		hdc = BeginPaint(hWnd, &ps);
		// TODO: Add any drawing code here...
	
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	case WM_TIMER:
		switch (wParam)
		{
			case TMR_1:
				//force window to repaint

				InvalidateRect(hWnd, NULL, TRUE);
				hdc = BeginPaint(hWnd, &ps);
				linia(hdc, ktory, 220, figury, f1, 100,produkt);
				linia(hdc, ktory1, 80,figurys,f2,czest,produkt);
				buduj(figury, figurys, f1);
				ktory1++;
				ktory++;
				Graphics graphics(hdc);
				Pen pen(Color(255, 0, 0, 255));

				graphics.DrawLine(&pen, 0, 220, 440, 220);
				graphics.DrawLine(&pen, 440, 220, 640, 320);
				graphics.DrawLine(&pen, 640, 320, 1100, 320);
				graphics.DrawLine(&pen, 0, 100, 100, 100);
				graphics.DrawLine(&pen, 100, 100, 220, 220);
		

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