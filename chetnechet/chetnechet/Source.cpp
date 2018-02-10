#include <iostream>
#include <string>
#include <string.h>
#include <fstream>

using namespace std;

int main()
{
	string vvod="";
	string vvodp="";
	ifstream fin("vvod.txt");
	while (fin)
	{
		vvodp += vvod;
		fin >> vvod;
	}

	cout << vvodp << endl;

	int i = 0;
	int chet = 0;
	int nechet = 0;
	while (vvodp[i] != NULL)
	{
		i++;
		if (vvodp[i] == '0' || vvodp[i] == '2' || vvodp[i] == '4' || vvodp[i] == '6' || vvodp[i] == '8') chet++;
		if (vvodp[i] == '1' || vvodp[i] == '3' || vvodp[i] == '5' || vvodp[i] == '7' || vvodp[i] == '9') nechet++;
	}

	cout << "Even numbers : " << chet << endl << "Odd numbers : " << nechet << endl;

	system("pause");
}