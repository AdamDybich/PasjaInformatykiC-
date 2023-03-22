#include <iostream>

using namespace std;

int age;
void zad4(void)
{
	cout << "Ile masz lat:" << endl;
	cin >> age;
	

	if (age < 18)
	{
		cout << "Nie jestes pelnoletni i nie możesz jeszcze zostac prezydentem ";
	}
	else if ((age >= 18) && (age<35)) {
		cout << "jestes pelnoletni ale nie możesz jeszcze zostac prezydentem ";
	}

	
	else {
		cout << "mozesz zostac prezydentem";
	}
}