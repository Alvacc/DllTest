//int Hello_Ma();
#include<stdio.h>

extern "C" {

	__declspec(dllexport) int Hello_Ma(); //export dll
	__declspec(dllexport) int Hello_Wang() {
		printf("Hello Wang");
		return 0;
	}
}