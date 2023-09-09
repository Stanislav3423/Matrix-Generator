#include "MyForm.h"
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	lab11oop::MyForm form;
	Application::Run(% form);
}