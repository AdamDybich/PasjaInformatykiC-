// Pasja informatyki.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <locale.h>
#include "zad1.h"
#include "zad2.h"
#include "zad3.h"
#include "zad4.h"
#include "zad5.h"
#include "zad6.h"
#include "zad7.h"
#include "zad8.h"
#include "zad9.h"
#include "zad10.h"
#include "zad11.h"
#include "zad12.h"
#include "zad13.h"
#include "zad14.h"
#include "zad15.h"
#include "zad16.h"
#include "zad17.h"
#include "zad18.h"
#include "zad19.h"
#include "zad20.h"
#include "zad21.h"
#include "zad22.h"
#include "zad23.h"
#include "zad24.h"
#include "zad25.h"
#include "zad26.h"
#include "zad27.h"
#include "zad28.h"
#include "zad29.h"

using namespace std;

void main(void) {
	setlocale(LC_ALL, "Polish");
	int nr_zadania;

	for (;;)
	{ 

	cout << "Podaj numer programu do wykonania: "<< endl;
	cout << "0 - Wylacz program" << endl;
	cout << "zad1 - dzielenie cukierkow" << endl;
	cout << "zad2 - bankomat" << endl;
	cout << "zad3 - logowanie" << endl;
	cout << "zad4 - spawdzanie wieku" << endl;
	cout << "zad5 - program odliczajacy czas" << endl;
	cout << "zad6 - program wypisujacy imie" << endl;
	cout << "zad7 - populacja bakterii - while" << endl;
	cout << "zad8 - program wypisujacy imie - do while" << endl;
	cout << "zad9 - losowanie liczb - liczby pseldoloswe" << endl;
	cout << "zad10 - losowanie lotto" << endl;
	cout << "zad11 - srednia ocen - tablice" << endl;
	cout << "zad12 - Program wyznaczajacy wyrazy ciagu - tablice" << endl;
	cout << "zad13 - Program podajacy dni w miesiacu - switch" << endl;
	cout << "zad14 - zapis imienia, nazwiska i nr telefonu do pliku txt" << endl;
	cout << "zad15 - odczytanie imienia, nazwiska i nr telefonu z pliku txt" << endl;
	cout << "zad16 - quiz" << endl;
	cout << "zad17 - sprawdzenie plci na podstawie imienia, typ string" << endl;
	cout << "zad18 - napisanie wyrazu od tylu, typ string" << endl;
	cout << "zad19 - operacje na stringach, typ string" << endl;
	cout << "zad20 - wywolywanie funkcji" << endl;
	cout << "zad21 - dynamiczne rezerwowanie i zwalnianie pamieci" << endl;
	cout << "zad22 - przekazywanie tablic do funkcji przez referencje" << endl;
	cout << "zad23 - sprawdzanie najwiekszej liczby" << endl;
	cout << "zad24 - szukanie liczby najblizszej sredniej" << endl;
	cout << "zad25 - liczenie sredniej predkosci" << endl;
	cout << "zad26 - rekurencja" << endl;
	cout << "zad27 - sortowanie babelkowe vs quick sort" << endl;
	cout << "zad28 - Ustawienie polskich znaków" << endl;
	cout << "zad29 - Funkcje matematyczne" << endl;
	cin >> nr_zadania;

	switch (nr_zadania) {

	case 0:
		exit(0);
		break;

	case 1:  zad1();
		break;

	case 2:  zad2();
		break;

	case 3:  zad3();
		break;

	case 4:  zad4();
		break;

	case 5:  zad5();
		break;

	case 6:  zad6();
		break;

	case 7:  zad7();
		break;

	case 8:  zad8();
		break;

	case 9:  zad9();
		break;

	case 10:  zad10();
		break;

	case 11:  zad11();
		break;

	case 12:  zad12();
		break;

	case 13:  zad13();
		break;

	case 14:  zad14();
		break;

	case 15:  zad15();
		break;

	case 16:  zad16();
		break;

	case 17:  zad17();
		break;

	case 18:  zad18();
		break;

	case 19:  zad19();
		break;

	case 20:  zad20();
		break;

	case 21:  zad21();
		break;

	case 22:  zad22();
		break;

	case 23:  zad23();
		break;

	case 24:  zad24();
		break;

	case 25:  zad25();
		break;

	case 26:  zad26();
		break;

	case 27:  zad27();
		break;

	case 28:  zad28();
		break;

	case 29:  zad29();
		break;
	}

	}
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
