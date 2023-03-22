#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int roll, shot, howMany = 0;

void zad9(void)
{
	cout << "Witaj! pomyslalem sobie liczbe od 1 do 100" << endl;
	srand(time(NULL));
	roll = rand() % 100 + 1;

	while (shot != roll)
	{
		howMany++;

		cout << "Zgadnij jaka: ";
		cin >> shot;

		if (shot == roll)
			cout << "Udalo sie! trafiles za " << howMany << " razem." << endl;
		if (shot < roll)
			cout << "To za malo" << endl;
		else if (shot > roll)
			cout << "To za duzo" << endl;

	}
	system("pause");
}