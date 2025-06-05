// Morse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <Windows.h>
#define U 200

int pher = 0;
int freq = 700;
void beep(int dwDur)
{
	Beep(freq, dwDur);
}
void dot(int count) {

	for (count; count > 0; count--)
	{
		beep(U);
	}
	
}
void D(int count) {

	for (count; count > 0; count--)
	{
		beep(U * 3);
	}

}

int main()
{
	while (1) {
		pher = getchar();
		if (pher == 110 || pher == 78)
		{
			D(1);dot(1);
		}
		Sleep(3 * U);
   }
}
