#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty = 0;

void zad16(void) {
	int nr_linii = 1;
	string liniaa;
	int nr_pytania = 0;


	fstream plik;
	plik.open("quiz.txt", ios::in);

	if (plik.good() == false)
	{
		cout << "nie udalo sie otworzyc pliku!";
		exit(0);
	}

	while (getline(plik, liniaa))
	{
		switch (nr_linii)
		{
		case 1: temat = liniaa; 
			break;
		case 2: nick = liniaa;
			break;
		case 3: tresc[nr_pytania] = liniaa;
			break;
		case 4: odpA[nr_pytania] = liniaa;
			break;
		case 5: odpB[nr_pytania] = liniaa;
			break;	
		case 6: odpC[nr_pytania] = liniaa;
			break;
		case 7: odpD[nr_pytania] = liniaa;
			break;
		case 8: poprawna[nr_pytania] = liniaa;
			break;
		}

		if (nr_linii == 8) { nr_linii = 2; nr_pytania++; }
		nr_linii++;

	}
	plik.close();

	for (int i = 0; i <= 4; i++)
	{
		cout << endl << tresc[i] << endl;
		cout << "A. " << odpA[i] << endl;
		cout << "B. " << odpB[i] << endl;
		cout << "C. " << odpC[i] << endl;
		cout << "D. " << odpD[i] << endl;

		cout << "Twoja odpowiedz: ";
		cin >> odpowiedz;

		transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

		if (odpowiedz == poprawna[i])
		{
			cout << "Dobrze! zdobywasz punkt!" << endl;
			punkty++;
		}
		else
			cout << "Zle! brak punktu! Poprawna odpowiedz: " << poprawna[i] << endl;
					}
	cout << endl << "Koniec quizu! Zdobyte punkty: " << punkty << endl;

}