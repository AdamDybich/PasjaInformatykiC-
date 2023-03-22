#include <iostream>


using namespace std;



void zad17(void) {
	string imie;
	
	cout << "Podaj imie: ";
	cin >> imie;

	int dlugosc = imie.length();
	/*cout << dlugosc << endl;*/

	if (imie[dlugosc - 1] == 'a')
		cout << "Witam Pania" << endl;
	else
		cout << "Witam Pana" << endl;


}