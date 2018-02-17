#include <iostream>

using namespace std;

int main()
{
	double a = 0, b = 100;

	for (int i = 100; i > 0; i--)
	{
		a = i - 1;
		b = a + (1 / b);
	}

	cout << b << endl;

	system("pause");
}