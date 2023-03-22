#include <iostream>



using namespace std;



void zad23(void) {
	int a, b, c, m;

	cout << "Podaj trzy liczby rozdzielone spacja: " << endl;
	cin >> a >> b >> c;

	m = a;

	if (b > m) m = b;
	if (c > m) m = c;
	cout << "Najawieksza liczba to " << m;

	/*if ((a >= b) && (a >= c))
		cout << "Najwieksza liczba to " << a << endl;

	else if ((b >= a) && (b >= c))
		cout << "Najwieksza liczba to " << b << endl;

	else if ((c >= a) && (c >= b))
		cout << "Najwieksza liczba to " << c << endl;*/



}