#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
void main() {
	Application::EnableVisualStyles(); //se puede saltar
	Application::Run(gcnew TallerSemana9::MyForm()); //lanza el myform del project
}//garbage collector new ->cuando detecte inactividas darle delete automaticamente

