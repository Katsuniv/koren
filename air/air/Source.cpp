#include <iostream>

using namespace std;

int main()
{
	char place; //�����
	long long range = 0; //���
	long long time = 0;

	cin >> range >> place;
	
	if (place == 'a') time = 4;
	if (place == 'b') time = 5;
	if (place == 'c') time = 6;
	if (place == 'd') time = 3;
	if (place == 'e') time = 2;
	if (place == 'f') time = 1;

	
	
	cout << time << endl;

	system("pause");
}