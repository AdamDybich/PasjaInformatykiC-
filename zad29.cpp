#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>


using namespace std;

void wartoscBezWzgledna(void) 
{

	//Wartość bez wzgledna
	int x = 31, R, D, o1, o2;

	cout << "(1947-2014) Ile raz LA Lakers wystapili w finale NBA?" << endl;
	cout << "Rick: " << endl;
	cin >> R;
	cout << "Daryl: ";
	cin >> D;

	o1 = abs(x - R);
	o2 = abs(x - D);

	if (o1 < o2) cout << "Wygral Rick!" << endl;
	else if (o2 < o1) cout << "Wygral Daryl!" << endl;
	else
		cout << "Remis!" << endl;
}

void potegowanie(void) {
	/*Potegowanie*/
	long long int y = pow(2, 32) - 1;
	unsigned int z = y;
	cout << setprecision(20);
	cout << y << endl;
	cout << "MAX: " << z << endl;

	cout << sizeof(y) << endl;
}

void pierwiaskowanie(void) {
	/*Pierwiaskowanie*/

	float x_1, y_1, x_2, y_2, d;
	cout << "Podaj wspolrzedne dla postaci A i postaci B" << endl;

	cout << "A (x1, y1) = " << endl;
	cin >> x_1 >> y_1;

	cout << "B (x2, y2) = " << endl;
	cin >> x_2 >> y_2;

	d = sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2));
	cout << "Odleglosc postaci od siebie to " << d << endl;

	cout << "Pierwiastek to odwrotnosc potegowania, pierwiastek trzeciego stopnia z odległosci to: " << pow(d, 1.0 / 3.0) << endl;
}

void zaokraglanie(void) {
	/*zaokraglanie*/
	float liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba;
	cout << "Round: " << round(liczba) << endl;
	cout << "Ceil: " << ceil(liczba) << endl;
	cout << "Floor: " << floor(liczba) << endl;
	cout << "Trunc: " << trunc(liczba) << endl;
	}

void staleMatematyczne(void) {
	
//#define _USE_MATH_DEFINES
//#include <math.h>

	cout << setprecision(20);
	cout << "Liczba Pi: "<< M_PI << endl;
	cout << "Liczba Eulera (Nepera): " << M_E << endl;
}

void funkcjeTrygonometryczne(void) {

	float kat;

	//#define _USE_MATH_DEFINES
	//#include <math.h>
	cout << "Podaj wartosc kata: ";
	cin >> kat;
	cout << "Sinus z kata wynosi "<< sin(kat * M_PI / 180) << endl;
	cout << "Cosinus z kata wynosi " << cos(kat * M_PI / 180) << endl;
	cout << "tanges z kata wynosi " << tan(kat * M_PI / 180) << endl;
	cout << "cotanges z kata wynosi " << 1/tan(kat * M_PI / 180) << endl;

}
void zad29(void) {

	cout << "Co chcesz zrobic gamoniu?" << endl;
	int typOperacji;

	cout << "0 - Wylacz program" << endl;
	cout << "1 - wartość bezwzgledna" << endl;
	cout << "2 - potegowanie" << endl;
	cout << "3 - pierwiaskowanie" << endl;
	cout << "4 - zaokraglanie" << endl;
	cout << "5 - stale matematyczne" << endl;
	cout << "6 - funkcje trygnometryczne" << endl;

	cin >> typOperacji;
	
	switch (typOperacji)
	{
	case 0:
		exit(0);
		break;
	case 1:  wartoscBezWzgledna();
		break;
	case 2:  potegowanie();
		break;
	case 3:  pierwiaskowanie();
		break;
	case 4:  zaokraglanie();
		break;
	case 5:  staleMatematyczne();
		break;
	case 6:  funkcjeTrygonometryczne();
		break;
	default:
		break;
	}
	}
