#include <iostream>


using namespace std;

float metry;

float ile_cali(float m1)
{
	float cale = m1 * 39.37;
	return cale;
}

float ile_jardow(float m2);

void ile_mil(float m3)
{
	cout << "na mile to bedzie: " << m3 * 0.0006213 << endl;

}

void zad20(void) {
	

	cout << "Podaj ile metrow: ";
	cin >> metry;

	cout << "na cale to bedzie: " << ile_cali(metry) << endl;
	cout << "na jardy to bedzie: " << ile_jardow(metry) << endl;
	ile_mil(metry);

}
float ile_jardow(float m2)
{
	float jardy = m2 * 1.0936;
	return jardy;
}