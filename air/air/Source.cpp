#include <iostream>

using namespace std;

int main()
{
	char place; //место
	long long range = 0; //ряд
	long long time = 0;

	cin >> range >> place;
	
	if (place == 'a') time = 4;
	if (place == 'b') time = 5;
	if (place == 'c') time = 6;
	if (place == 'd') time = 3;
	if (place == 'e') time = 2;
	if (place == 'f') time = 1;

	time = time + (range - 1) / 4 * 16 + (range % 2 ? 0 : 7);
	
	cout << time << endl;

	system("pause");
}