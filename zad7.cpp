#include <iostream>

using namespace std;

int popoulacja = 1; int godzin;

void zad7(void)
{
	
		while (popoulacja <= 1000000000)
	{
		godzin++;
		popoulacja = popoulacja * 2;

		cout << "minelo godzin: " << godzin << " liczba bakterii: " << popoulacja << endl;
	}
}