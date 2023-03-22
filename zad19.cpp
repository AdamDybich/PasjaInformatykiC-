#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



void zad19(void) {

	cout << "Laczenie napisow" << endl;
	string jeden = "Ala ma ";
	string dwa = "kota";
	string trzy = jeden + dwa;

	cout << trzy << endl;

	cout << "zmiana wielkosci liter" << endl;

	transform(trzy.begin(), trzy.end(), trzy.begin(), ::toupper);
	cout << trzy << endl;

	transform(trzy.begin(), trzy.end(), trzy.begin(), ::tolower);
	cout << trzy << endl;

	cout << "szukanie frazy kot" << endl;


	string szukaj = "kot";

	size_t pozycja = trzy.find(szukaj);

	if (pozycja != string::npos)
		cout << "znaleziono na pozycji: " << pozycja << endl;
	else cout << "nie znaleziono!" << endl;

	cout << "Kasowanie znakow" << endl;
	
	trzy.erase(3, 3);
	cout << trzy << endl;

	cout << "wstawianie znakow" << endl;

	string cztery = "Ala ma kota";

	cztery.insert(11, " Filemona");
	cout << cztery << endl;

	cout << "zastepowanie znakow" << endl;

	cztery.replace(4,2, "nie ma");
	cout << cztery << endl;

	cout << "wyjecie czesci znakow" << endl;

	string piec = cztery.substr(4, 7);
	cout << piec << endl;
}