#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>

	using namespace std;

	int numberBall;

	void zad10(void) {

		{
			cout << "Witaj w losowaniu, za 3 sekundy nastapi zwolnienie blokady" << endl;
			Sleep(3000);
			srand(time(NULL));

			for (int i = 1; i <= 6; i++)
			{

				numberBall = rand() % 49 + 1;
				Sleep(1000);
				cout << numberBall << "\a" << endl; // \a to brzeczyk systemowy
			}
		}
	}