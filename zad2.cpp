#include <iostream>

using namespace std;

string strPIN;

void zad2(void)
{
	cout << "Witaj w naszym banku" << endl;
	cout << "Podaj numer PIN:" << endl;
	cin >> strPIN;

	if (strPIN == "1729") 
	{
		cout << "Poprawny PIN";
	}
	else
	{
		cout << "Niepoprawny PIN";

	}
}