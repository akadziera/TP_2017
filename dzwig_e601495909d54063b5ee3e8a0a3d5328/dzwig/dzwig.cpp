// dzwig.cpp: Okreœla punkt wejœcia dla aplikacji.
//

#include "stdafx.h"
#include "dzwig.h"

#define MAX_LOADSTRING  100
#define TR_KWADRAT		201
#define TR_KOLO		    202
#define TR_TROJKAT		203
#define TR_WAGA			204
#define TR_KOKWTR		205
#define TR_KWTRKO		206
#define TR_OFF		    207
#define TMR1		    208
#define WAGA_1				209
#define WAGA_2				210
#define WAGA_3				211
#define WAGA_4				212
#define WAGA_5				213
#define WAGA_6				214
#define WAGA_7				215
#define WAGA_8				216
#define WAGA_9			    217
#define W_MAX			218
#define AKCEPTUJ		219
#define TEKST		    220
#define TMR2		    221
#define TMR3		    222



// Zmienne globalne:
HINSTANCE hInst;                                // bie¿¹ce wyst¹pienie
WCHAR szTitle[MAX_LOADSTRING];                  // Tekst paska tytu³u
WCHAR szWindowClass[MAX_LOADSTRING];            // nazwa klasy okna g³ównego
int hx = 0;										// wspolrzedne haka
int hy = 320;
int stan_haka = 0;								//stan dzwigu
int wspx_liny = 397;							//wsp zaczepu
int wspy_liny = 210;
int tryb = 0;									//tryb pracy dzwigu
int max_waga = 100;
const int szerokosc_obiektu = 50;
const int wysokosc_obiektu = 50;
int postep = 0;									//postepy w automacie
int etap = 0;
int cel = 0;
int szczyt = 0;
int wierzcholek = 650;							//najwyzszy punkt
int spadajacy = 0;								//id spadajacego bloku
bool blad = false;
int licznik = 0;

RECT obszar = { 369, 156, 1100, 800 };


//figura geometryczna
struct obiekt {
	int waga;
	int typ;
	int wspx;
	int wspy;
	int aktywny;							   //-1, 0, 1 => niaktywny, spadek, aktywny
	int id;
};

obiekt obiekty[9] = {{100, 1, 370, 650, -1, 1 },
					{ 100, 1, 430, 650, -1, 2 },
					{ 100, 1, 670, 650, -1, 3 },
					{ 100, 2, 580, 650, -1, 1 },
					{ 100, 2, 721, 650, -1, 2 },
					{ 100, 2, 830, 650, -1, 3 },
					{ 100, 3, 520, 650, -1, 1 },
					{ 100, 3, 910, 650, -1, 2 },
					{ 100, 3, 961, 650, -1, 3 }};

// Przeka¿ dalej deklaracje funkcji do³¹czonych w tym module kodu:
ATOM                MyRegisterClass(HINSTANCE hInstance);
BOOL                InitInstance(HINSTANCE, int);
LRESULT CALLBACK    WndProc(HWND, UINT, WPARAM, LPARAM);
INT_PTR CALLBACK    About(HWND, UINT, WPARAM, LPARAM);

//wykrycie na jakim obiekcie znajduje sie hak
int wykryciehak() {
	for (int i = 0; i < 9; i++) {
		if (wspx_liny + hx > obiekty[i].wspx && wspx_liny + hx < obiekty[i].wspx + szerokosc_obiektu
			&& wspy_liny + 30 + hy > obiekty[i].wspy && wspy_liny + hy + 30 < obiekty[i].wspy + wysokosc_obiektu) {
			if (tryb == 0 || obiekty[i].typ == tryb)
				return i;
			if (tryb == 4)
				if (max_waga >= obiekty[i].waga)
					return i;
			blad = true;
			return -1;
		}
	}
	return -1;
}

//wykrywanie kolizji obiektow
int kolizja(int id, int kierunek) {
	for (int i = 0; i < 9; i++) {
		if (kierunek == 1)
			if (obiekty[id].wspx + szerokosc_obiektu + 1 == obiekty[i].wspx &&
				obiekty[id].wspy + wysokosc_obiektu >= obiekty[i].wspy &&
				obiekty[id].wspy <= obiekty[i].wspy + wysokosc_obiektu)
				return i;
		if (kierunek == 3)
			if (obiekty[i].wspx + szerokosc_obiektu + 1 == obiekty[id].wspx &&
				obiekty[id].wspy + wysokosc_obiektu >= obiekty[i].wspy &&
				obiekty[id].wspy <= obiekty[i].wspy + wysokosc_obiektu)
				return i;
		if (kierunek == 0)
			if (obiekty[i].wspy + wysokosc_obiektu + 1 == obiekty[id].wspy &&
				obiekty[id].wspx + szerokosc_obiektu >= obiekty[i].wspx &&
				obiekty[i].wspx + szerokosc_obiektu >= obiekty[id].wspx)
				return i;
		if (kierunek == 2)
			if (obiekty[id].wspy + wysokosc_obiektu + 1 == obiekty[i].wspy &&
				obiekty[i].wspx + szerokosc_obiektu >= obiekty[id].wspx &&
				obiekty[id].wspx + szerokosc_obiektu >= obiekty[i].wspx)
				return i;
	}
	return -1;
}

//animacja planszy
void animacja(HDC hdc, HWND hWnd)
{
	//------podwojne buforowanie
	RECT *re = new RECT;
	GetClientRect(hWnd, re);
	HDC memDC = CreateCompatibleDC(hdc);
	HBITMAP hBM = CreateCompatibleBitmap(hdc, re->right, re->bottom);
	SelectObject(memDC, hBM);
	HBRUSH hbr = CreateSolidBrush(RGB(255, 255, 255));
	RECT r;
	SetRect(&r, 0, 0, re->right, re->bottom);
	FillRect(memDC, &r, hbr);
	Graphics graphics(memDC);
	//-------------------------
	_TCHAR buff[20];
	Pen lina(Color(255, 0, 0, 255), 4);
	Pen lina_error(Color(255, 255, 0, 0), 4);
	Pen ksztalt(Color(255, 14, 14, 14), 1);


	for (int i = 0; i < 9; i++) {
		if (obiekty[i].typ == 1) {
			swprintf_s(buff, TEXT("kw%d.png"), obiekty[i].id);
			Image image(buff);
			graphics.DrawImage(&image, obiekty[i].wspx - 1, obiekty[i].wspy + 1, 51, 51);

		}
		else
			if (obiekty[i].typ == 2) {
				swprintf_s(buff, TEXT("ko%d.png"), obiekty[i].id);
				Image image(buff);
				graphics.DrawImage(&image, obiekty[i].wspx - 1, obiekty[i].wspy + 1, 51, 51);
			}
			else {
				swprintf_s(buff, TEXT("tr%d.png"), obiekty[i].id);
				Image image(buff);
				graphics.DrawImage(&image, obiekty[i].wspx - 1, obiekty[i].wspy + 1, 51, 51);
			}

	}

	Image hak1(L"hak1.png");
	Image hak2(L"hak2.png");
	graphics.DrawImage(&hak1, 370 + hx, 154, 53, 56);

	if (!blad)graphics.DrawLine(&lina, wspx_liny + hx, wspy_liny, wspx_liny + hx, wspy_liny + hy);
	else {
		graphics.DrawLine(&lina_error, wspx_liny + hx, wspy_liny, wspx_liny + hx, wspy_liny + hy);
		if (++licznik == 5) {
			licznik = 0;
			blad = false;
		}
	}
	graphics.DrawImage(&hak2, 383 + hx, wspy_liny + hy, 28, 32);

	//---------------------
	BitBlt(hdc, 0, 0, re->right, re->bottom, memDC, 0, 0, SRCCOPY);
	DeleteObject(hBM);
	DeleteDC(memDC);
}

//ustawianie timerow
int timer(HWND okno, int wybor)
{
	if (wybor == 0) {
		SetTimer(okno, TMR1, 25, 0);
		KillTimer(okno, TMR2);
		KillTimer(okno, TMR3);
		return 0;
	}
	if (wybor == 1) {
		SetTimer(okno, TMR2, 25, 0);
		KillTimer(okno, TMR1);
		KillTimer(okno, TMR3);
		return 0;
	}
	if (wybor == 2) {
		SetTimer(okno, TMR3, 25, 0);
		KillTimer(okno, TMR1);
		KillTimer(okno, TMR2);
		return 0;
	}

}

//ruch hakiem
void ruch() {
	int akt = -1;
	for (int i = 0; i < 9; i++) {
		if (obiekty[i].aktywny > 0)
			akt = i;
		else
			if (obiekty[i].aktywny == 0) {
				if (kolizja(i, 2) < 0 && obiekty[i].wspy + wysokosc_obiektu == 700)
					obiekty[i].aktywny = -1;
				if (kolizja(i, 2) < 0 && obiekty[i].wspy + wysokosc_obiektu != 700)
					obiekty[i].wspy++;
				if (kolizja(i, 2) < 0 && obiekty[i].wspy + wysokosc_obiektu != 700)
					obiekty[i].wspy++;
			}
	}

	if (GetAsyncKeyState(VK_SPACE) < 0) {
		int a = wykryciehak();
		if (a >= 0) {
			obiekty[a].aktywny = 1;
			stan_haka = 1;
		}return;
	}
	if (GetAsyncKeyState(VK_CONTROL) < 0) {
		int a = wykryciehak();
		if (a >= 0) {
			obiekty[a].aktywny = 0;
			stan_haka = 0;
		}return;
	}
	if (GetAsyncKeyState(VK_RIGHT) < 0) {
		if (hx != 630) {
			if (stan_haka == 0)hx++;
			else if (kolizja(akt, 1) < 0) {
				obiekty[akt].wspx++;
				hx++;
			}
		}return;
	}

	if (GetAsyncKeyState(VK_LEFT) < 0) {
		if (hx) {
			if (stan_haka == 0)hx--;
			else if (kolizja(akt, 3) < 0) {
				obiekty[akt].wspx--;
				hx--;
			}
		}return;
	}

	if (GetAsyncKeyState(VK_UP) < 0) {
		if (hy) {
			if (stan_haka == 0)hy--;
			else if (kolizja(akt, 0) < 0) {
				obiekty[akt].wspy--;
				hy--;
			}
		}return;
	}

	if (GetAsyncKeyState(VK_DOWN) < 0) {
		if (hy < 430) {
			if (stan_haka == 0)hy++;
			else if (kolizja(akt, 2) < 0) {
				obiekty[akt].wspy++;
				hy++;
			}
		}return;
	}


}

//znajduje najwyzszy punkt na planszy
void znajdz_wierzcholek() {
	for (int i = 0; i < 9; i++) {
		if (obiekty[i].wspy < wierzcholek)
			wierzcholek = obiekty[i].wspy;
	}
}

//znajduje wolnego kloca do podniesienia
int znajdz_wolny(int typ_szukanego) {
	bool sens_istnienia;
	for (int i = 0; i < 9; i++) {
		sens_istnienia = true;
		if (obiekty[i].typ == typ_szukanego && sens_istnienia) {
			for (int j = 0; j < 9; j++) {  //sprawdzenie czy dany blok ma kolege nad soba
				if (j != i && obiekty[j].wspy + wysokosc_obiektu + 1 == obiekty[i].wspy &&
					obiekty[i].wspx + szerokosc_obiektu >= obiekty[j].wspx &&
					obiekty[j].wspx + szerokosc_obiektu >= obiekty[i].wspx)
					sens_istnienia = false;
			}
		}
		if (sens_istnienia && obiekty[i].typ == typ_szukanego) {
			obiekty[i].aktywny = 0;
			return i;
		}
	}
	blad = true;
	etap = 5;
	return -1;
}

//spadanie w trybie automatycznym
void spadanie_obiektu(int id, HWND hWnd) {
	for (int i = 0; i<4; i++)
		if (kolizja(id, 2) < 0 && obiekty[id].wspy + wysokosc_obiektu != 700)
			obiekty[id].wspy++;
		else {
			etap++;
			return;
		}
}

//automatyczne wieze
void auto_ukladanie(int typ_celu, int typ_szczyt) {
	if (postep == 0) {
		szczyt = znajdz_wolny(typ_szczyt);
		cel = znajdz_wolny(typ_celu);
		if (cel == -1 || szczyt == -1) {
			return;
		}
		znajdz_wierzcholek();
		postep++;
	}

	if (postep == 1) {
		if (wspx_liny + hx > obiekty[szczyt].wspx + 25) {
			hx--;
			return;
		}
		if (wspx_liny + hx < obiekty[szczyt].wspx + 25) {
			hx++;
			return;
		}
		if (wspx_liny + hx == obiekty[szczyt].wspx + 25)
			postep++;
	}

	if (postep == 2) {
		if (wspy_liny + 15 + hy > obiekty[szczyt].wspy) {
			hy--;
			return;
		}
		if (wspy_liny + 15 + hy < obiekty[szczyt].wspy) {
			hy++;
			return;
		}
		if (wspy_liny + 15 + hy == obiekty[szczyt].wspy)
			postep++;
	}

	if (postep == 3) {
		if (obiekty[szczyt].wspy > wierzcholek - 51) {
			hy--;
			obiekty[szczyt].wspy--;
			return;
		}
		if (obiekty[szczyt].wspy < wierzcholek - 51) {
			hy++;
			obiekty[szczyt].wspy--;
			return;
		}
		if (obiekty[szczyt].wspy == wierzcholek - 51)
			postep++;
	}

	if (postep == 4) {
		if (wspx_liny + hx > obiekty[cel].wspx + 25) {
			hx--;
			obiekty[szczyt].wspx--;
			return;
		}
		if (wspx_liny + hx < obiekty[cel].wspx + 25) {
			hx++;
			obiekty[szczyt].wspx++;
			return;
		}
		if (wspx_liny + hx == obiekty[cel].wspx + 25) {
			spadajacy = szczyt;
			etap++;
			postep++;
			return;
		}
	}

};

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);

	// TODO: W tym miejscu umieœæ kod.
	GdiplusStartupInput gdiplusStartupInput;
	ULONG_PTR           gdiplusToken;
	GdiplusStartup(&gdiplusToken, &gdiplusStartupInput, NULL);


	// Zainicjuj ci¹gi globalne
	LoadStringW(hInstance, IDS_APP_TITLE, szTitle, MAX_LOADSTRING);
	LoadStringW(hInstance, IDC_DZWIG, szWindowClass, MAX_LOADSTRING);
	MyRegisterClass(hInstance);

	// Wykonaj inicjacje aplikacji:
	if (!InitInstance(hInstance, nCmdShow))
	{
		return FALSE;
	}

	HACCEL hAccelTable = LoadAccelerators(hInstance, MAKEINTRESOURCE(IDC_DZWIG));

	MSG msg;

	// G³ówna pêtla wiadomoœci:
	while (GetMessage(&msg, nullptr, 0, 0))
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
//  FUNKCJA: MyRegisterClass()
//
//  CEL: Rejestruje klasê okna.
//
ATOM MyRegisterClass(HINSTANCE hInstance)
{
	WNDCLASSEXW wcex;

	wcex.cbSize = sizeof(WNDCLASSEX);

	wcex.style = CS_HREDRAW | CS_VREDRAW;
	wcex.lpfnWndProc = WndProc;
	wcex.cbClsExtra = 0;
	wcex.cbWndExtra = 0;
	wcex.hInstance = hInstance;
	wcex.hIcon = LoadIcon(hInstance, MAKEINTRESOURCE(IDI_DZWIG));
	wcex.hCursor = LoadCursor(nullptr, IDC_ARROW);
	wcex.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wcex.lpszMenuName = MAKEINTRESOURCEW(IDC_DZWIG);
	wcex.lpszClassName = szWindowClass;
	wcex.hIconSm = LoadIcon(wcex.hInstance, MAKEINTRESOURCE(IDI_SMALL));

	return RegisterClassExW(&wcex);
}

//
//   FUNKCJA: InitInstance(HINSTANCE, int)
//
//   CEL: Zapisuje dojœcie wyst¹pienia i tworzy okno g³ówne
//
//   KOMENTARZE:
//
//        W tej funkcji dojœcie wyst¹pienia jest zapisywane w zmiennej globalnej i
//        jest tworzone i wyœwietlane okno g³ówne programu.
//
BOOL InitInstance(HINSTANCE hInstance, int nCmdShow)
{
	hInst = hInstance; // Przechowuj dojœcie wyst¹pienia w zmiennej globalnej

	HWND hWnd = CreateWindowW(szWindowClass, szTitle, WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, 0, CW_USEDEFAULT, 0, nullptr, nullptr, hInstance, nullptr);

	timer(hWnd, 0);
	HWND przycisk;
	HWND edit;
	przycisk = CreateWindow(TEXT("button"), TEXT("Ko³o - Kwadrat - Trójkat"),
		WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
		1100, 30, 325, 30, hWnd, (HMENU)TR_KOKWTR, GetModuleHandle(NULL), NULL);
	przycisk = CreateWindow(TEXT("button"), TEXT("Kwadrat - Trójkat - Ko³o"),
		WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
		1100, 60, 325, 30, hWnd, (HMENU)TR_KWTRKO, GetModuleHandle(NULL), NULL);
	przycisk = CreateWindow(TEXT("button"), TEXT("Funkcje wy³¹czone"),
		WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
		1100, 120, 325, 30, hWnd, (HMENU)TR_OFF, GetModuleHandle(NULL), NULL);
	SendMessage(przycisk, BM_SETCHECK, BST_CHECKED, 0);
	przycisk = CreateWindow(TEXT("button"), TEXT("Wykrywanie kwadratu"),
		WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
		1100, 150, 325, 30, hWnd, (HMENU)TR_KWADRAT, GetModuleHandle(NULL), NULL);
	przycisk = CreateWindow(TEXT("button"), TEXT("Wykrywanie trójk¹ta"),
		WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
		1100, 180, 325, 30, hWnd, (HMENU)TR_TROJKAT, GetModuleHandle(NULL), NULL);
	przycisk = CreateWindow(TEXT("button"), TEXT("Wykrywanie ko³a"),
		WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
		1100, 210, 325, 30, hWnd, (HMENU)TR_KOLO, GetModuleHandle(NULL), NULL);
	przycisk = CreateWindow(TEXT("button"), TEXT("Wykrywanie przekroczenia wagi"),
		WS_CHILD | WS_VISIBLE | BS_AUTORADIOBUTTON,
		1100, 240, 245, 30, hWnd, (HMENU)TR_WAGA, GetModuleHandle(NULL), NULL);
	przycisk = CreateWindow(TEXT("button"), TEXT("Akceptuj"),
		WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
		1345, 240, 80, 30, hWnd, (HMENU)AKCEPTUJ, GetModuleHandle(NULL), NULL);
	//pola tekstowe
	{edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 270, 80, 30, hWnd, (HMENU)WAGA_1, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 300, 80, 30, hWnd, (HMENU)WAGA_2, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 330, 80, 30, hWnd, (HMENU)WAGA_3, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 360, 80, 30, hWnd, (HMENU)WAGA_4, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 390, 80, 30, hWnd, (HMENU)WAGA_5, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 420, 80, 30, hWnd, (HMENU)WAGA_6, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 450, 80, 30, hWnd, (HMENU)WAGA_7, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 480, 80, 30, hWnd, (HMENU)WAGA_8, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 510, 80, 30, hWnd, (HMENU)WAGA_9, hInstance, NULL);
	edit = CreateWindowEx(WS_EX_CLIENTEDGE, TEXT("EDIT"), TEXT("100"),
		WS_CHILD | WS_VISIBLE | WS_BORDER,
		1345, 540, 80, 30, hWnd, (HMENU)W_MAX, hInstance, NULL); }

	//tekst 
	{przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga kwadratu nr1"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 270, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga kwadratu nr2"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 300, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga kwadratu nr3"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 330, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga ko³a nr1"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 360, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga ko³a nr2"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 390, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga ko³a nr3"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 420, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga trójk¹ta nr1"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 450, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga trójk¹ta nr2"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 480, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Waga trójk¹ta nr3"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 510, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("Maksymalna waga obiektu"),
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 540, 245, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("TRYB AUTOMATYCZNY"),
		WS_CHILD | WS_VISIBLE | SS_CENTER, 1100, 0, 325, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), TEXT("TRYB MANUALNY"),
		WS_CHILD | WS_VISIBLE | SS_CENTER, 1100, 90, 325, 30, hWnd, (HMENU)TEKST, hInstance, NULL);
	przycisk = CreateWindowEx(0, TEXT("STATIC"), NULL,
		WS_CHILD | WS_VISIBLE | SS_LEFT, 1100, 570, 325, 130, hWnd, (HMENU)TEKST, hInstance, NULL);
	}
	if (!hWnd)
	{
		return FALSE;
	}

	ShowWindow(hWnd, nCmdShow);
	UpdateWindow(hWnd);

	return TRUE;
}

//
//  FUNKCJA: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  CEL: Przetwarza wiadomoœci dla okna g³ównego.
//
//  WM_COMMAND — przetwarzaj menu aplikacji
//  WM_PAINT — pomaluj okno g³ówne
//  WM_DESTROY — opublikuj komunikat o rezygnacji i wróæ
//
//


LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	PAINTSTRUCT ps;
	HDC hdc;
	int wmId;

	switch (message)
	{
	case WM_COMMAND:
	{
		int wmId = LOWORD(wParam);
		// Analizuj zaznaczenia menu:
		switch (wmId)
		{
		case TR_OFF:
			timer(hWnd, 0);
			tryb = 0;
			break;
		case TR_KWADRAT:
			timer(hWnd, 0);
			tryb = 1;
			break;
		case TR_KOLO:
			timer(hWnd, 0);
			tryb = 2;
			break;
		case TR_TROJKAT:
			timer(hWnd, 0);
			tryb = 3;
			break;
		case TR_WAGA:
			timer(hWnd, 0);
			tryb = 4;
			break;
		case TR_KWTRKO:
			timer(hWnd, 1);
			postep = 0;
			etap = 0;
			break;
		case TR_KOKWTR:
			timer(hWnd, 2);
			postep = 0;
			etap = 0;
			break;
		case AKCEPTUJ:
			_TCHAR buff[20];
			GetWindowText(GetDlgItem(hWnd, WAGA_1), buff, 20);
			obiekty[0].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, WAGA_2), buff, 20);
			obiekty[1].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, WAGA_3), buff, 20);
			obiekty[2].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, WAGA_4), buff, 20);
			obiekty[3].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, WAGA_5), buff, 20);
			obiekty[4].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, WAGA_6), buff, 20);
			obiekty[5].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, WAGA_7), buff, 20);
			obiekty[6].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, WAGA_8), buff, 20);
			obiekty[7].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, WAGA_9), buff, 20);
			obiekty[8].waga = _tstoi(buff);
			GetWindowText(GetDlgItem(hWnd, W_MAX), buff, 20);
			max_waga = _tstoi(buff);
			break;
		case IDM_ABOUT:
			DialogBox(hInst, MAKEINTRESOURCE(IDD_ABOUTBOX), hWnd, About);
			break;
		case IDM_EXIT:
			DestroyWindow(hWnd);
			break;
		default:
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
	}
	break;
	case WM_PAINT:
	{
		PAINTSTRUCT ps;
		HDC hdc = BeginPaint(hWnd, &ps);
		// TODO: tutaj dodaj kod rysowania u¿ywaj¹cy elementu hdc...
		Graphics graphics(hdc);
		Image image(L"maklowicz.png");
		graphics.DrawImage(&image, 0, 0, 1424, 700);
		EndPaint(hWnd, &ps);
	}
	break;
	case WM_DESTROY:
		PostQuitMessage(0);
		break;
	case WM_TIMER:
		switch (wParam)
		{
		case TMR1:
			InvalidateRect(hWnd, &obszar, TRUE);
			hdc = BeginPaint(hWnd, &ps);
			ruch();
			ruch();
			animacja(hdc, hWnd);
			EndPaint(hWnd, &ps);
			break;
		case TMR2:
			InvalidateRect(hWnd, &obszar, TRUE);
			hdc = BeginPaint(hWnd, &ps);
			if (etap == 0) {
				auto_ukladanie(1, 3);
				auto_ukladanie(1, 3);
			}
			if (etap == 1) {
				postep = 0;
				spadanie_obiektu(spadajacy, hWnd);
			}
			if (etap == 2) {
				auto_ukladanie(3, 2);
				auto_ukladanie(3, 2);
			}
			if (etap == 3) {
				spadanie_obiektu(spadajacy, hWnd);
			}
			if (etap == 4) {
				KillTimer(hWnd, TMR2);
			}
			animacja(hdc, hWnd);
			EndPaint(hWnd, &ps);
			break;
		case TMR3:
			InvalidateRect(hWnd, &obszar, TRUE);
			hdc = BeginPaint(hWnd, &ps);
			if (etap == 0) {
				auto_ukladanie(2, 1);
				auto_ukladanie(2, 1);
			}
			if (etap == 1) {
				postep = 0;
				spadanie_obiektu(spadajacy, hWnd);
			}
			if (etap == 2) {
				auto_ukladanie(1, 3);
				auto_ukladanie(1, 3);
			}
			if (etap == 3) {
				spadanie_obiektu(spadajacy, hWnd);
			}
			if (etap == 4) {
				KillTimer(hWnd, TMR3);
			}
			animacja(hdc, hWnd);
			EndPaint(hWnd, &ps);
			break;
		}
	case WM_ERASEBKGND:
		return FALSE;
		break;
	default:
		return DefWindowProc(hWnd, message, wParam, lParam);
	}
	return 0;
}

//Procedura obs³ugi wiadomoœci dla okna informacji o programie.
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
