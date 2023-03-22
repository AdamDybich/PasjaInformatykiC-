#include <iostream>
#include <fstream> 

using namespace std;

string imiee, nazwisko;
int nr_tel;

void zad14(void) {
	cout << "Podaj imie: ";
	cin >> imiee;
	cout << "Podaj nazwisko: ";
	cin >> nazwisko;
	cout << "Podaj numer telefonu: ";
	cin >> nr_tel;

	fstream plik;
	plik.open("wizytowka.txt", ios::out | ios::app);

	plik << imiee << endl;
	plik << nazwisko << endl;
	plik << nr_tel << endl;


	plik.close();

}