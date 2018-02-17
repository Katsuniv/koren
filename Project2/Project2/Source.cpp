#include <iostream>

using namespace std;

int main()
{
	double a = 0, b = 0, c = 0,d=0;

	for (int i = 100; i > 0; i--)
	{
		b = i - 1;
		c = b + (1 / i);
		b -= 1;
		a = b + 1 / c;
	}
	cout << a << endl;

	system("pause");
}