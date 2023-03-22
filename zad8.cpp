#include <iostream>

using namespace std;

int pop = 1; int godz;

void zad8(void)
{
	do
	{
		godz++;
		pop = pop * 2;

		cout << "minelo godzin: " << godz << " liczba bakterii: " << pop << endl;
	}
	while (pop <= 1000000000);
}