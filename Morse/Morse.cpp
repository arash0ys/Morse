// Morse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
void beep(int dwDur)
{
	Beep(750, dwDur);
}
int main()
{
	while (1) {

		getchar();
		beep(500);
   }
}
