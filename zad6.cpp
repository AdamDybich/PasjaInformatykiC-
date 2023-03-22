#include <iostream>

using namespace std;

string imie; int liczba;

void zad6(void)
{
	
	cout << "Podaj imie: ";
		cin >> imie;
		cout << "Podaj dodatnia liczbe calkowita: ";
		cin >> liczba;

		for (int i = 1; i <= liczba; i++)
		{
			cout << imie << " zostalo juz wypisane " << i << " razy" << endl;
		}
}