#include <iostream>

using namespace std;
int students;
int sweet;
void zad1(void)
{
	cout << "Ilu jest uczniow?" << endl;
	
	cin >> students;
	cout << "Ile jas ma cukierkow?" << endl;
	
	cin >> sweet;

	int sweetPerStudents = sweet / (students - 1);
	int sweetForJohn = sweet % (students - 1);

	cout << "Każdy uczen dostanie po " << sweetPerStudents << " dla Jasia na wieczor zostanie " << sweetForJohn << endl;

	return;

}