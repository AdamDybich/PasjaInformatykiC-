#include <iostream>
#include <string>

using namespace std;



void zad18(void) {
	string wyraz;
	cout << "Podaj wyraz do odwrocenia: ";
	cin >> wyraz;

	int dlugosc = wyraz.length();

	for (int i = dlugosc - 1; i >= 0; i--)
	{
		cout << wyraz[i];
	}
	cout << endl;

}