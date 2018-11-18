#include "MyForm.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main()
{
	FreeConsole();
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
}
