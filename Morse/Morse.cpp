// Morse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <Windows.h>
#define U 150

int pher = 0;
int freq = 500;
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

void dash(int count) {

	for (count; count > 0; count--)
	{
		beep(U * 3);
	}

}

void Morse(int m1, int m2, int m3) {

	if (m1 > 0)	
		dot(m1);
	
	if (m1 < 0)
		dash(-m1);
	
	if (m2 > 0)
		dot(m2);

	if (m2 < 0)
		dash(-m2);

	if (m3 > 0)
		dot(m3);

	if (m3 < 0)
		dash(-m3);
}


int main()
{
	while (1) {
		pher = getchar();
		if (pher == 'N' || pher == 'n')
		{
			Morse(-1, 1, 0);
		}
		if (pher == 'S' || pher == 's')
		{
			Morse(3, 0, 0);
		}
		if (pher == 'O' || pher == 'o')
		{
			Morse(-3, 0, 0);
		}
		Sleep(2 * U);
   }
}
