// Morse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <Windows.h>
#define U 150
int Codes[26][5] = {
	{'A', 'a', 1, -1, 0},
	{'B', 'b', -1, 3, 0},
	{'D', 'd', -1, 2, 0},
	{'E', 'e', 1, 0, 0},
	{'F', 'f', 2, -1, 1},
	{'G', 'g', -2, 1, 0},
	{'H', 'h', 4, 0, 0},
	{'I', 'i', 2, 0, 0},
	{'J', 'j', 1, -3, 0},
	{'K', 'k', -1, 1, -1},
	{'L', 'l', 1, -1, 2},
	{'M', 'm', -2, 0, 0},
	{'N', 'n', -1, 1, 0},
	{'O', 'o', -3, 0, 0},
	{'P', 'p', 1, -2, 1},
	{'Q', 'q', -2, 1, -1},
	{'R', 'r', 1, -1, 1},
	{'S', 's', 3, 0, 0},
	{'T', 't', -1, 0, 0},
	{'U', 'u', 2, -1, 0},
	{'V', 'v', 3, -1, 0},
	{'W', 'w', 0, -2, 0},
	{'X', 'x', -1, 2, -1},
	{'Y', 'y', -1, 1, -2},
	{'Z', 'z', -2, 2, 0}
};


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

		for (int i = 0; i < 25; i++)
		{
			for (int j = 0; j < 2; j++)
			{

				if (pher == Codes[i][j])
				{
					Morse(Codes[i][2], Codes[i][3], Codes[i][4]);
					Sleep(3 * U);
					break;
				}


			}
		}

		if (pher == 'c' || pher == 'C')
		{
			Morse(-1, 1, -1); dot(1);
			Sleep(3 * U);
		}
		
		if (pher == ' ')
		{
			Sleep(7 * U);
		}



	}
}
