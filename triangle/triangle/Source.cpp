#include <iostream>

using namespace std;
double b=0,b1=0;
int main()
{

	int a, h,h1;
	a = 16;
	h = 15;
	h1 = 17;
	int counter = 0;
	while (counter != 5)
	{
		b = sqrt(pow((a / 2), 2) + pow(h, 2));
		b1 = sqrt(pow((a / 2), 2) + pow(h1, 2));
		if (b==(long long) b)
		{
			cout << a << " " << h << " " << b << " " << endl;
			counter++;
		}
		if (b1 == (long long)b1)
		{
			cout << a << " " << h1 << " " << b1 << " " << endl;
			counter++;
		}
		a+=2;
		h+=2;
		h1+=2;
	}
	system("pause");
}