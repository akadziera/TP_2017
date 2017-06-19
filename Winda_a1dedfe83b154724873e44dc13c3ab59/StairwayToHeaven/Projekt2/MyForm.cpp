#include "MyForm.h"
#include "Resource.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Projekt2::MyForm form;
	Application::Run(%form);
}