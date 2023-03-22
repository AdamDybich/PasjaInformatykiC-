#include <iostream>


using namespace std;

float oceny[5]; float suma = 0, srednia;

void zad11(void) 
{
	for (int i = 0; i<5; i++)
	{
		cout << endl << "Podaj " << i+1<< " ocene: ";
		cin >> oceny[i];
		suma += oceny[i];
		
			}
	cout << "Suma to " << suma << endl;

	srednia = suma / 5;

	cout << "Srednia to " << srednia;

	


}