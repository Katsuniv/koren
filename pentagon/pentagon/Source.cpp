#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	//int a[100];
	//int p[1000];
	int r = 0;
	cin >> r;
	int *p = new int[r];
	for (int n = 1; n<=r; n++)
	{
		p[n] = (n * ((3 * n) - 1)) / 2;
	}
	for (int k = 0; k<10; k++)
		for(int i = 1; i<r; i++)
			for(int j = 2; j<=r; j++)
				for(int s = 1; s<r; s++)
					for (int v = 1; v<r;v++)
					{
						int sum = 0;
						int raz = 0;
						sum = p[i] + p[j];
						raz = p[j] - p[i];

						if (sum == p[s] && raz == p[v])
						{
							cout << p[i] << p[j] << endl;
						}
					}
	
	/*for (int c= 0; c<10;c++)
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
	for (int i = 1; i <= r; i++)
	{
		cout << p[i] << " ";
	}
//	delete p;
	system("pause");
}