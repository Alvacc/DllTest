#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	cout << "main" << endl;

	typedef int(*FUNC)();
	HMODULE hDll = LoadLibrary("DllTest.dll");
	FUNC Main_Hello_Ma = (FUNC)GetProcAddress(hDll, "Hello_Ma");
	Main_Hello_Ma();
	return 0;
}
