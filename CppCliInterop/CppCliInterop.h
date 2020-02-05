#pragma once

class CppCliManagedState;

class __declspec(dllexport) CppCliInterop
{
public:
	CppCliInterop();
	~CppCliInterop();

	virtual void ShowForm();
	virtual void SetMessage(wchar_t* message);
private:
	CppCliManagedState* _managedState;
};
