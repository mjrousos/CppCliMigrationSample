#include "pch.h"
#include <msclr\auto_gcroot.h>
#include "CppCliInterop.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace ManagedLibrary;

class CppCliManagedState
{
public:
	msclr::auto_gcroot<Form1^> pForm1;
};

CppCliInterop::CppCliInterop()
{
	_managedState = new CppCliManagedState();
	_managedState->pForm1 = gcnew Form1();
}

CppCliInterop::~CppCliInterop()
{
	delete _managedState;
}

void CppCliInterop::ShowForm()
{
	_managedState->pForm1->Show();
}

void CppCliInterop::SetMessage(wchar_t* message)
{
	_managedState->pForm1->SetMessageText(gcnew String(message));
}
