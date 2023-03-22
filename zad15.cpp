#include <iostream>
#include <fstream> 
#include <cstdlib>
#include <string>

using namespace std;

string imieee, nazwiskoo;
int nr_tele;

void zad15(void) {


	fstream plik;
	plik.open("wizytowka.txt", ios::in);

	if (plik.good() == false)
	{
		cout << "Plik nie istnieje" << endl;
	}

	string linia;
	int nr_linii = 1;

	while (getline(plik, linia))
	{
		switch (nr_linii)
		{
		case 1: imieee = linia;
			break;
		case 2: nazwiskoo = linia;
			break;
		case 3: nr_tele = atoi(linia.c_str());
			break;
		}

		nr_linii++;
	}
		

	plik.close();

	cout << imieee << endl;
	cout << nazwiskoo << endl;
	cout << nr_tele << endl;
}