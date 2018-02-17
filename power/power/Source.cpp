#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int ans = 0;
	do 
		cin >> n;
	while (n >= 18);
	for (int i = 1; i <=10; i++)
	{
		int x1 = 0;
		long long x = pow(i, n);
		while (x)
		{
			x /= 10;
			x1++;
		}
		if (n == x1)ans++;
	}
	cout << ans << endl;

	system("pause");
}