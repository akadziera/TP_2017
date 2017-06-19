// projekt.cpp : Defines the entry point for the application.
//

#include "stdafx.h"
#include "projekt.h"
#include <deque>
#include <iterator>
#include <cstdio>
#include <algorithm>

#define MAX_LOADSTRING 100
#define TMR_1 1

// Global Variables:
HINSTANCE hInst;								// current instance
TCHAR szTitle[MAX_LOADSTRING];					// The title bar text
TCHAR szWindowClass[MAX_LOADSTRING];			// the main window class name

std::deque<byte> lift;
int liftH = 0;
int liftDir = 0;
int tajm = 0;
bool liftUP = 1;
bool liftCALL[5] = { 0,0,0,0,0 };

std::deque<byte> pietro[5];

// buttons
HWND hwndButton;
HWND hwndLabel;
HWND hwndDynamic;

// sent data
RECT drawAreaLift = { 402, 25, 583, 501};

RECT drawFloor[5] = {{0,440,500,500} ,{0,340,500,400} ,{0,240,500,300} ,{0,140,500,200} ,{0,40,500,100}};

// Forward declarations of functions included in this code module:
ATOM				MyRegisterClass(HINSTANCE hInstance);
BOOL				InitInstance(HINSTANCE, int);
LRESULT CALLBACK	WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	About(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK	Buttons(HWND, UINT, WPARAM, LPARAM);

void SetLabelText(HWND id , const std::string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	LPCWSTR result = r.c_str();
	SetWindowText(id, result);
	return;
}

void MyOnPaint(HDC hdc, HWND hWnd)
{
	RECT ClientRect;
	GetClientRect(hWnd, &ClientRect);
	HDC memDC = CreateCompatibleDC(hdc);
	HBITMAP hBM = CreateCompatibleBitmap(hdc, ClientRect.right, ClientRect.bottom);
	SelectObject(memDC, hBM);

	HBRUSH hbr = CreateSolidBrush(RGB(255, 255, 255));
	RECT r;
	SetRect(&r, 0, 0, ClientRect.right, ClientRect.bottom);
	FillRect(memDC, &r, hbr);
	
	Graphics graphics(memDC);
	Pen pen(Color(255, 0, 0, 255));
	Pen pen2(Color(255, 255, 0, 0));
	Image icon0(L"icon0.png", 0);
	Image icon1(L"icon1.png", 0);
	Image icon2(L"icon2.png", 0);
	Image icon3(L"icon3.png", 0);
	Image icon4(L"icon4.png", 0);
	


	std::deque<byte>::iterator iter;
	int posOffset = 0;
	
	graphics.DrawLine(&pen, 0, 100, 400, 100);
	graphics.DrawLine(&pen, 0, 200, 400, 200);
	graphics.DrawLine(&pen, 0, 300, 400, 300);
	graphics.DrawLine(&pen, 0, 400, 400, 400);
	graphics.DrawLine(&pen, 0, 500, 400, 500);

	for (iter = lift.begin(); iter != lift.end(); iter++)
	{
		switch (*iter)
		{
		case 0:
			graphics.DrawImage(&icon0, 560 - posOffset, 440 - liftH);
			break;
		case 1:
			graphics.DrawImage(&icon1, 560 - posOffset, 440 - liftH);
			break;
		case 2:
			graphics.DrawImage(&icon2, 560 - posOffset, 440 - liftH);
			break;
		case 3:
			graphics.DrawImage(&icon3, 560 - posOffset, 440 - liftH);
			break;
		case 4:
			graphics.DrawImage(&icon4, 560 - posOffset, 440 - liftH);
			break;
		}
		posOffset += 22;
	}

	////////////////////////////// PARTER /////////////////////////////

	posOffset = 0;
	for (iter = pietro[0].begin(); iter != pietro[0].end(); iter++)
	{
		switch (*iter)
		{
		case 0:
			graphics.DrawImage(&icon0, 379 - posOffset, 440);
			break;
		case 1:
			graphics.DrawImage(&icon1, 379 - posOffset, 440);
			break;
		case 2:
			graphics.DrawImage(&icon2, 379 - posOffset, 440);
			break;
		case 3:
			graphics.DrawImage(&icon3, 379 - posOffset, 440);
			break;
		case 4:
			graphics.DrawImage(&icon4, 379 - posOffset, 440);
			break;
		}
		posOffset += 22;
	}

	///////////////////////////// PIETRO I ////////////////////////////

	posOffset = 0;
	for (iter = pietro[1].begin(); iter != pietro[1].end(); iter++)
	{
		switch (*iter)
		{
		case 0:
			graphics.DrawImage(&icon0, 379 - posOffset, 340);
			break;
		case 1:
			graphics.DrawImage(&icon1, 379 - posOffset, 340);
			break;
		case 2:
			graphics.DrawImage(&icon2, 379 - posOffset, 340);
			break;
		case 3:
			graphics.DrawImage(&icon3, 379 - posOffset, 340);
			break;
		case 4:
			graphics.DrawImage(&icon4, 379 - posOffset, 340);
			break;
		}
		posOffset += 22;
	}

	///////////////////////////// PIETRO II ///////////////////////////

	posOffset = 0;
	for (iter = pietro[2].begin(); iter != pietro[2].end(); iter++)
	{
		switch (*iter)
		{
		case 0:
			graphics.DrawImage(&icon0, 379 - posOffset, 240);
			break;
		case 1:
			graphics.DrawImage(&icon1, 379 - posOffset, 240);
			break;
		case 2:
			graphics.DrawImage(&icon2, 379 - posOffset, 240);
			break;
		case 3:
			graphics.DrawImage(&icon3, 379 - posOffset, 240);
			break;
		case 4:
			graphics.DrawImage(&icon4, 379 - posOffset, 240);
			break;
		}
		posOffset += 22;
	}

	///////////////////////////// PIETRO III //////////////////////////

	posOffset = 0;
	for (iter = pietro[3].begin(); iter != pietro[3].end(); iter++)
	{
		switch (*iter)
		{
		case 0:
			graphics.DrawImage(&icon0, 379 - posOffset, 140);
			break;
		case 1:
			graphics.DrawImage(&icon1, 379 - posOffset, 140);
			break;
		case 2:
			graphics.DrawImage(&icon2, 379 - posOffset, 140);
			break;
		case 3:
			graphics.DrawImage(&icon3, 379 - posOffset, 140);
			break;
		case 4:
			graphics.DrawImage(&icon4, 379 - posOffset, 140);
			break;
		}
		posOffset += 22;
	}

	///////////////////////////// PIETRO IV ///////////////////////////

	posOffset = 0;
	for (iter = pietro[4].begin(); iter != pietro[4].end(); iter++)
	{
		switch (*iter)
		{
		case 0:
			graphics.DrawImage(&icon0, 379 - posOffset, 40);
			break;
		case 1:
			graphics.DrawImage(&icon1, 379 - posOffset, 40);
			break;
		case 2:
			graphics.DrawImage(&icon2, 379 - posOffset, 40);
			break;
		case 3:
			graphics.DrawImage(&icon3, 379 - posOffset, 40);
			break;
		case 4:
			graphics.DrawImage(&icon4, 379 - posOffset, 40);
			break;
		}
		posOffset += 22;
	}

	///////////////////////////////////////////////////////////////////

	graphics.DrawRectangle(&pen2, 402, 425 - liftH, 180, 75);


	BitBlt(hdc, 0, 0, ClientRect.right, ClientRect.bottom, memDC, 0, 0, SRCCOPY);

	DeleteObject(hBM);
	DeleteDC(memDC);

}

void repaintWindow(HWND hWnd, HDC &hdc, PAINTSTRUCT &ps, RECT *drawArea)
{
	if (drawArea==NULL) InvalidateRect(hWnd, NULL, TRUE);
	else InvalidateRect(hWnd, drawArea, TRUE);
	hdc = BeginPaint(hWnd, &ps);
	MyOnPaint(hdc, hWnd);
	EndPaint(hWnd, &ps);
}

void TimerStart(HWND hWnd)
{
	SetTimer(hWnd, TMR_1, 5, 0);
}

void NewDir(HWND hWnd)
{
	std::sort(lift.begin(), lift.end());
	if (!liftUP) std::reverse(lift.begin(), lift.end());

	if (liftH == 400) liftUP = 0;
	if (liftH == 0) liftUP = 1;

	if (!lift.empty())
	{
		if (lift.front() * 100 > liftH)
		{
			liftUP = 1;
			liftDir = lift.front() * 100;
		}
		if (lift.front() * 100 < liftH)
		{
			liftUP = 0;
			liftDir = lift.front() * 100;
		}
		std::sort(lift.begin(), lift.end());
		if (!liftUP) std::reverse(lift.begin(), lift.end());
	}
}

void Zapakuj(HWND hWnd)
{
	while (!lift.empty() && lift.front() * 100 == liftH)
	{
		lift.pop_front();
	}
	if (lift.empty() && !pietro[liftH/100].empty())
	{
		lift.push_back(pietro[liftH / 100].front());
		pietro[liftH / 100].pop_front();
		NewDir(hWnd);
	}
	if (!lift.empty() && liftUP)
	{
		while ((!pietro[liftH / 100].empty() && pietro[liftH / 100].front() > liftH / 100) && lift.size() < 8)
		{
			lift.push_back(pietro[liftH / 100].front());
			pietro[liftH / 100].pop_front();
		}
	}
	else if (!lift.empty() && !liftUP)
	{
		while ((!pietro[liftH / 100].empty() && pietro[liftH / 100].front() < liftH / 100) && lift.size() < 8)
		{
			lift.push_back(pietro[liftH / 100].front());
			pietro[liftH / 100].pop_front();
		}
	}
}

void CheckCall(HWND hWnd)
{
	if (pietro[0].empty()) liftCALL[0] = 0;
	else liftCALL[0] = 1;
	if (pietro[1].empty()) liftCALL[1] = 0;
	else liftCALL[1] = 1;
	if (pietro[2].empty()) liftCALL[2] = 0;
	else liftCALL[2] = 1;
	if (pietro[3].empty()) liftCALL[3] = 0;
	else liftCALL[3] = 1;
	if (pietro[4].empty()) liftCALL[4] = 0;
	else liftCALL[4] = 1;

	if (lift.empty())
	{
		if (!pietro[liftH / 100].empty() && liftH%100 == 0)
		{
			Zapakuj(hWnd);
		}
		if (!liftUP)
		{
			for (int i = 0; i < 5; i++)
			{
				if (liftCALL[i] == 1)
				{
					liftDir = i * 100;
					break;
				}
			}
		}
		else
		{
			for (int i = 5; i >=0; i--)
			{
				if (liftCALL[i] == 1)
				{
					liftDir = i * 100;
					break;
				}
			}
		}
		if (liftDir < liftH) liftUP = 0;
		else if (liftDir > liftH) liftUP = 1;

	}
	
	if (lift.size() < 8 && liftH%100 != 0)
	{
		if (liftUP == 1 && liftH < 400)
		{
			if ((liftCALL[(liftH / 100) + 1]) == 1 && pietro[(liftH / 100) + 1].front() > ((liftH / 100) + 1))
			{
				liftDir = (liftH / 100) * 100 + 100;
			}
		}
		else if (liftUP == 0 && liftH > 0)
		{
			if ((liftCALL[liftH / 100]) == 1 && pietro[(liftH / 100)].front() <(liftH / 100))
			{
				liftDir = (liftH / 100) * 100 ;
			}
		}
	}
} 

// main function (exe hInstance)
int APIENTRY _tWinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR    lpCmdLine,
	int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	MSG msg;
	HACCEL hAccelTable;

	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR           gdiplusToken;
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);

	// Initialize global strings
	LoadString(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadString(hInstance, IDC_PROJEKT, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);



	// Perform application initialization:
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_PROJEKT));

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

	return (int)msg.wParam;
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

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_PROJEKT));
	wcex.hCursor = LoadCursor(NULL, IDC_ARROW);
	wcex.hbrBackground = NULL;
	wcex.lpszMenuName = MAKEINTRESOURCE(IDC_PROJEKT);
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

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

	hInst = hInstance; // Store instance handle (of exe) in our global variable

	// main window
	hWnd = CreateWindow(szWindowClass, szTitle, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX , 
		CW_USEDEFAULT, 0, 650, 600, NULL, NULL, hInstance, NULL);

	// create button and store the handle    

	//PARTER
	hwndLabel = CreateWindow(TEXT("STATIC"), NULL, WS_CHILD | WS_VISIBLE | SS_CENTER, 0, 420, 50, 20, hWnd, NULL, hInstance, NULL);
	SetWindowText(hwndLabel, TEXT("Parter"));
	hwndButton = CreateWindow(TEXT("button"), TEXT("I"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 480, 20, 20, hWnd, (HMENU)ID_BUTP1, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("II"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 460, 20, 20, hWnd, (HMENU)ID_BUTP2, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("III"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 440, 20, 20, hWnd, (HMENU)ID_BUTP3, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("IV"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 420, 20, 20, hWnd, (HMENU)ID_BUTP4, hInstance, NULL);

	//PIETRO I
	hwndLabel = CreateWindow(TEXT("STATIC"), NULL, WS_CHILD | WS_VISIBLE | SS_CENTER, 0, 320, 50, 20, hWnd, NULL, hInstance, NULL);
	SetWindowText(hwndLabel, TEXT("I"));
	hwndButton = CreateWindow(TEXT("button"), TEXT("P"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 380, 20, 20, hWnd, (HMENU)ID_BUT1P, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("II"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 360, 20, 20, hWnd, (HMENU)ID_BUT12, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("III"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 340, 20, 20, hWnd, (HMENU)ID_BUT13, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("IV"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 320, 20, 20, hWnd, (HMENU)ID_BUT14, hInstance, NULL);
	
	//PIETRO II
	hwndLabel = CreateWindow(TEXT("STATIC"), NULL, WS_CHILD | WS_VISIBLE | SS_CENTER, 0, 220, 50, 20, hWnd, NULL, hInstance, NULL);
	SetWindowText(hwndLabel, TEXT("II"));
	hwndButton = CreateWindow(TEXT("button"), TEXT("P"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 280, 20, 20, hWnd, (HMENU)ID_BUT2P, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("I"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 260, 20, 20, hWnd, (HMENU)ID_BUT21, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("III"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 240, 20, 20, hWnd, (HMENU)ID_BUT23, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("IV"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 220, 20, 20, hWnd, (HMENU)ID_BUT24, hInstance, NULL);

	//PIETRO III
	hwndLabel = CreateWindow(TEXT("STATIC"), NULL, WS_CHILD | WS_VISIBLE | SS_CENTER, 0, 120, 50, 20, hWnd, NULL, hInstance, NULL);
	SetWindowText(hwndLabel, TEXT("III"));
	hwndButton = CreateWindow(TEXT("button"), TEXT("P"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 180, 20, 20, hWnd, (HMENU)ID_BUT3P, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("I"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 160, 20, 20, hWnd, (HMENU)ID_BUT31, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("II"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 140, 20, 20, hWnd, (HMENU)ID_BUT32, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("IV"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 120, 20, 20, hWnd, (HMENU)ID_BUT34, hInstance, NULL);
	
	//PIETRO IV
	hwndLabel = CreateWindow(TEXT("STATIC"), NULL, WS_CHILD | WS_VISIBLE | SS_CENTER, 0, 20, 50, 20, hWnd, NULL, hInstance, NULL);
	SetWindowText(hwndLabel, TEXT("IV"));
	hwndButton = CreateWindow(TEXT("button"), TEXT("P"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 80, 20, 20, hWnd, (HMENU)ID_BUT4P, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("I"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 60, 20, 20, hWnd, (HMENU)ID_BUT41, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("II"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 40, 20, 20, hWnd, (HMENU)ID_BUT42, hInstance, NULL);
	hwndButton = CreateWindow(TEXT("button"), TEXT("III"), WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON, 585, 20, 20, 20, hWnd, (HMENU)ID_BUT43, hInstance, NULL);

	hwndDynamic = CreateWindow(TEXT("STATIC"), NULL, WS_CHILD | WS_VISIBLE | SS_CENTER, 470, 5, 50, 20, hWnd, (HMENU)ID_DIR, hInstance, NULL);


	if (!hWnd)
	{
		return FALSE;
	}

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	TimerStart(hWnd);

	return TRUE;
}

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE:  Processes messages for the main window.
//
//  WM_COMMAND	- process the application menu
//  WM_PAINT	- Paint the main window (low priority)
//  WM_DESTROY	- post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	int wmId, wmEvent;
	PAINTSTRUCT ps;
	HDC hdc;

	switch (message)
	{
	case WM_COMMAND:
		wmId = LOWORD(wParam);
		wmEvent = HIWORD(wParam);

		// MENU & BUTTON messages
		// Parse the menu selections:
		switch (wmId)
		{
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		case ID_BUTP1:
			pietro[0].insert(pietro[0].end(), 1);
			repaintWindow(hWnd, hdc, ps, &drawFloor[0]);
			break;
		case ID_BUTP2:
			pietro[0].insert(pietro[0].end(), 2);
			repaintWindow(hWnd, hdc, ps, &drawFloor[0]);
			break;
		case ID_BUTP3:
			pietro[0].insert(pietro[0].end(), 3);
			repaintWindow(hWnd, hdc, ps, &drawFloor[0]);
			break;
		case ID_BUTP4:
			pietro[0].insert(pietro[0].end(), 4);
			repaintWindow(hWnd, hdc, ps, &drawFloor[0]);
			break;
		case ID_BUT1P:
			pietro[1].insert(pietro[1].end(), 0);
			repaintWindow(hWnd, hdc, ps, &drawFloor[1]);
			break;
		case ID_BUT12:
			pietro[1].insert(pietro[1].end(), 2);
			repaintWindow(hWnd, hdc, ps, &drawFloor[1]);
			break;
		case ID_BUT13:
			pietro[1].insert(pietro[1].end(), 3);
			repaintWindow(hWnd, hdc, ps, &drawFloor[1]);
			break;
		case ID_BUT14:
			pietro[1].insert(pietro[1].end(), 4);
			repaintWindow(hWnd, hdc, ps, &drawFloor[1]);
			break;
		case ID_BUT2P:
			pietro[2].insert(pietro[2].end(), 0);
			repaintWindow(hWnd, hdc, ps, &drawFloor[2]);
			break;
		case ID_BUT21:
			pietro[2].insert(pietro[2].end(), 1);
			repaintWindow(hWnd, hdc, ps, &drawFloor[2]);
			break;
		case ID_BUT23:
			pietro[2].insert(pietro[2].end(), 3);
			repaintWindow(hWnd, hdc, ps, &drawFloor[2]);
			break;
		case ID_BUT24:
			pietro[2].insert(pietro[2].end(), 4);
			repaintWindow(hWnd, hdc, ps, &drawFloor[2]);
			break;
		case ID_BUT3P:
			pietro[3].insert(pietro[3].end(), 0);
			repaintWindow(hWnd, hdc, ps, &drawFloor[3]);
			break;
		case ID_BUT31:
			pietro[3].insert(pietro[3].end(), 1);
			repaintWindow(hWnd, hdc, ps, &drawFloor[3]);
			break;
		case ID_BUT32:
			pietro[3].insert(pietro[3].end(), 2);
			repaintWindow(hWnd, hdc, ps, &drawFloor[3]);
			break;
		case ID_BUT34:
			pietro[3].insert(pietro[3].end(), 4);
			repaintWindow(hWnd, hdc, ps, &drawFloor[3]);
			break;
		case ID_BUT4P:
			pietro[4].insert(pietro[4].end(), 0);
			repaintWindow(hWnd, hdc, ps, &drawFloor[4]);
			break;
		case ID_BUT41:
			pietro[4].insert(pietro[4].end(), 1);
			repaintWindow(hWnd, hdc, ps, &drawFloor[4]);
			break;
		case ID_BUT42:
			pietro[4].insert(pietro[4].end(), 2);
			repaintWindow(hWnd, hdc, ps, &drawFloor[4]);
			break;
		case ID_BUT43:
			pietro[4].insert(pietro[4].end(), 3);
			repaintWindow(hWnd, hdc, ps, &drawFloor[4]);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
		//CheckCall(hWnd);
		break;
	case WM_PAINT:
		repaintWindow(hWnd, hdc, ps, NULL);
		hdc = BeginPaint(hWnd, &ps);
		EndPaint(hWnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;

	case WM_TIMER:
		switch (wParam)
		{
		case TMR_1:

			if(liftH % 100 == 50) CheckCall(hWnd);

			if (liftH < liftDir)
			{
				liftH++;
				liftUP = 1;
			}
			else if (liftH > liftDir)
			{
				liftH--;
				liftUP = 0;
			}
			else							
			{
				KillTimer(hWnd, TMR_1);		
				if (liftH == 400) liftUP = 0;
				if (liftH == 0) liftUP = 1;
				if (lift.empty())
				{
					CheckCall(hWnd);			
				}
				Zapakuj(hWnd);				
				SetLabelText(hwndDynamic, std::to_string(lift.size() * 70));
				NewDir(hWnd);
				if (liftH != liftDir) tajm = 0;
				else tajm++;
				if (tajm > 300) liftDir = 0;
				repaintWindow(hWnd, hdc, ps, &drawFloor[liftH/100]);
				TimerStart(hWnd);
			}
			repaintWindow(hWnd, hdc, ps, &drawAreaLift);

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