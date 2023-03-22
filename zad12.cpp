#include <iostream>
#include <iomanip>

using namespace std;

long double fib[1000000]; int n;

void zad12(void) {
	cout << "Ile licz fibonaczeego mam wyznaczyc: ";
	cin >> n;

	fib[0] = 1;
	fib[1] = 1;

	for (int i = 2; i < n; i++)

	{
		fib[i] = fib[i - 1] + fib[i - 2];

	}


	/*for (int i = 2; i < n; i++)

	{
		cout << endl << "wyraz nr " << i + 1 << ": " << fib[i] << endl;

	}

	cout << endl << "wyraz nr " << n << " : " << fib[n - 1];*/

	cout << "zlota liczba: " << fib[n - 1] / fib[n-2];

}