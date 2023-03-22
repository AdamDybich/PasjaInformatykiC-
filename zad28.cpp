#include <iostream>
#include <cstring>
#include <locale.h>

using namespace std;



void zad28(void) {

	setlocale(LC_ALL, "Polish");

	//char* tr(char* str);
	//{
	//	static char buff[256];
	//	char cp[] = "\245\206\251\210\344\242\230\276\253\244\217\250\235\343\340\227\275\215ąćęłńóśżźĄĆĘŁŃÓŚŻŹ";
	//	if (strlen(str) >= sizeof(buff)) return str;
	//	char* bf = buff;
	//	while (*str)
	//	{
	//		char* pos = strchr(cp + 18, *str);
	//		*(bf++) = pos ? *(pos - 18) : *str;
	//		++str;
	//	}
	//	*bf = 0;
	//	return buff;
	//}

	cout << "Zażółć gęślą jaźń" << endl;
	string napis;
	cin >> napis;
	cout << "Wpisant ciag znaków" << napis << endl;


}