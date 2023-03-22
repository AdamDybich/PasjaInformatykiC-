#include <iostream>



using namespace std;



void zad25(void) {
	int v1, v2, ile;

	cin >> ile;
	for (int i = 1; i <= ile; i++) {
		cin >> v1 >> v2;
		cout << 2 * v1 * v2 / (v1 + v2) << endl;
		}

}