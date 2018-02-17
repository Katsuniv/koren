#include <iostream>

using namespace std;

int main()
{
	double R = 0;
	double R1 = 0;
	double R2 = 0;
	for (int i = 2; i <= 98; i += 3)
	{
		R = sqrt(i);
		R1 = i+3;
		R1 += R;
		R2 = sqrt(R1);
	}

	cout << R2 << endl;

	system("pause");
}