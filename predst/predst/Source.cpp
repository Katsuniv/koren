#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	do
	{
		cin >> n;
	} while (n<2||n>40);

	int m = 1;
//	int schet = n - m;
	int help = 0;
	for (int k = m; k<n;k++)
	{
		int schet = n - m;
		for (int j = schet; j > 0; j--)
		{
			int i = 0;
			for (i; i < n - j; i++)
			{
				cout << m << "+";
			}
			cout << n-m*i << endl;
			schet--;
		}
		m++;
		
	}

/*	m = 2;
	schet = n - m;
	for (int j = schet; j > 0; j--)
	{
		for (int i = 1; i <= n - schet; i++)
		{
			cout << m << "+";
			help += i;
		}
		cout << n-help << endl;
		schet--;
	}*/
	cout << endl;
	
	system("pause");
}