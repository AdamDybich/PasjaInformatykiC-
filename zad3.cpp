#include <iostream>

using namespace std;

string login, password;
void zad3(void)
{
	cout << "Podaj login:" << endl;
	cin >> login;
	cout << "Podaj haslo:" << endl;
	cin >> password;

	if ((login == "admin") && (password == "szarlotka"))
	{
		cout << "Udalo sie zalogowac!";
	}
	else {
		cout << "Nie udalo sie zalogwac!";
	}
}