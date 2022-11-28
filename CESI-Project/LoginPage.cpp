#include "LoginPage.h"
#include "Form2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    CESIProject::LoginPage form;
    Application::Run(% form);
    // test monsieur
}
