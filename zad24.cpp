#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;



void zad24(void) {

	float a, b, c, d, e, srednia, bliskaSredniej;
	float wynik[5];

	cout << "Podaj piec liczb rozdzielonych spacja: " << endl;
	cin >> a >> b >> c >> d >> e;

	srednia = (a + b + c + d + e)/5;
	/*bliskaSredniej = a;*/

	cout << "Srednia tych liczb wynosi: " << srednia << endl;
	
	wynik[0] = abs(srednia - a);
	wynik[1] = abs(srednia - b);
	wynik[2] = abs(srednia - c);
	wynik[3] = abs(srednia - d);
	wynik[4] = abs(srednia - e);

	bliskaSredniej = wynik[0];
	if (wynik[1] < bliskaSredniej) bliskaSredniej = wynik[1];
	if (wynik[2] < bliskaSredniej) bliskaSredniej = wynik[2];
	if (wynik[3] < bliskaSredniej) bliskaSredniej = wynik[3];
	if (wynik[4] < bliskaSredniej) bliskaSredniej = wynik[4];

	if (bliskaSredniej == wynik[0])
		cout << "liczba najblizej sredniej jest: " << a << endl;
	if (bliskaSredniej == wynik[1])
		cout << "liczba najblizej sredniej jest: " << b << endl;
	if (bliskaSredniej == wynik[2])
		cout << "liczba najblizej sredniej jest: " << c << endl;
	if (bliskaSredniej == wynik[3])
		cout << "liczba najblizej sredniej jest: " << d << endl;
	if (bliskaSredniej == wynik[4])
		cout << "liczba najblizej sredniej jest: " << e << endl;

	/*if ((bliskaSredniej -b) > srednia - b ) bliskaSredniej = b;
	if ((bliskaSredniej - c) > srednia - c) bliskaSredniej = c;
	if ((bliskaSredniej - d) > srednia - d) bliskaSredniej = d;
	if ((bliskaSredniej - e) > srednia - e) bliskaSredniej = e;
	cout << "najblizsza sredniej to " << bliskaSredniej << endl;*/
}