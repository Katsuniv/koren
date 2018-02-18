#include <iostream>

using namespace std;

int main()
{
	int a[100];
	int p[1000];
	for (int n = 1; n<1000; n++)
	{
		p[n] = (n * ((3 * n) - 1)) / 2;
	}
	for (int c= 0; c<10;c++)
		for (int i = 1; i <= 1000; i++)
			for (int j = 1; j < 1000; j++)
			{
				if (p[i] + p[i + c] == p[j])
				{
					
					cout << p[i] << " " << p[i + c] << " "<< c<< " "<< i<<endl;
						break;
				}
			}
			/*for (int j = 1; j < 5000; j++)
			{
				for (int k = 1; k < 5000; k++)
				{
					if (p[i + c] - p[i] == p[j] && p[i] + p[i + c] == p[k]|| p[i + c] - p[i] == p[k] && p[i] + p[i + c] == p[j])
					{
						cout << p[i] << " " << p[i + c] << endl;
						break;
					}
				}
			}*/
			
		
	
	/*cout << "-----------------------" << endl;
	for (int c = 0; c<10; c++)
	{
		for (int i = 1; i <= 1000; i++)
		{
			for (int j = 1; j < 1000; j++)
			{
				if (p[i+c] - p[i] == p[j])
				{
					cout << p[i] << " " << p[i + c] << " " << c << " " << i << endl;
					break;
				}
			}

		}
	}*/
	for (int i = 0; i <= 100; i++)
	{
		cout << a[i] << " ";
	}
	system("pause");
}