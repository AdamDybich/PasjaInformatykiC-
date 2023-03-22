#include <iostream>
#include <time.h>
#include <windows.h>


using namespace std;
void sortowanie_bombelkowe(int* tab, int n) {
	for (int i = 1; i < n; i++) {
		for (int j = n - 1; j >= 1; j--) {
			if (tab[j] < tab[j - 1]){
			int bufor;
			bufor = tab[j - 1];
			tab[j - 1] = tab[j];
			tab[j] = bufor;
}
		}
	}
}
void quicksort(int* tablica, int lewy, int prawy)
{
	int v = tablica[(lewy + prawy) / 2];
	int i, j, x;
	i = lewy;
	j = prawy;
	do
	{
		while (tablica[i] < v) i++;
		while (tablica[j] > v) j--;
		if (i <= j)
		{
			x = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = x;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > lewy) quicksort(tablica, lewy, j);
	if (i < prawy) quicksort(tablica, i, prawy);
}

void zad27(void) {
	int ile;
	clock_t start, stop;
	double czas;

	cout << "Porównanie czasow srotowania v.1" << endl;

	cout << "ile losowych liczb w tablicy: " << endl;
	cin >> ile;

	//dynamiczna alokacja tablicy

	int* tablica;
	tablica = new int[ile];

	int* tablica2;
	tablica2 = new int[ile];
	//inicjowanie generatora licz losowych
	srand(time(NULL));

	//wczytywanie losowych liczb do tablicy
	for (int i = 0; i < ile; i++) {
		tablica[i] = rand() % 100000 + 1;
			}

	// przepisanie tablicy do tablicy2

	for (int i = 0; i < ile; i++)
	{
		tablica2[i] = tablica[i];
	}
	/*cout << " przed posorotwaniem sortowaniem babelkowym: " << endl;

	for (int i = 0; i < ile; i++) {
		cout << tablica[i] << " " << endl;
	}*/
	cout << "sortuje teraz babelkowo. Prosze czekac!" << endl;

	start = clock();

	sortowanie_bombelkowe(tablica, ile);

	stop = clock();

	czas = (double)(stop - start) / CLOCKS_PER_SEC;

	cout << endl << "czas sortowania babelkowego: " << czas << " " << endl;
	/*cout << "po posorotwaniu babelkowym: " << endl;

	for (int i = 0; i < ile; i++) {
		cout << tablica2[i] << " " << endl;
	}*/

	/*cout << " przed posorotwaniem quick sortem: " << endl;

	for (int i = 0; i < ile; i++) {
		cout << tablica2[i] << " " << endl;
	}*/ 
	cout << "sortuje teraz quick sortem. Prosze czekac!" << endl;

	start = clock();

	quicksort(tablica2, 0, ile-1);

	stop = clock();

	czas = (double)(stop - start) / CLOCKS_PER_SEC;

	cout << endl << "czas quick sorta: " << czas << " " << endl;
	/*cout << "po posorotwaniu: " << endl;

	for (int i = 0; i < ile; i++) {
		cout << tablica2[i] << " " << endl;
	}*/
	delete[] tablica;
	delete[] tablica2;
}