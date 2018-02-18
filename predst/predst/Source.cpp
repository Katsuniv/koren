#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	do
	{
		cin >> n;
	} while (n<2||n>40);

	int i1, i2, i3, i4, i5, i6, i7, i8, i9, MAX = 10;
	for (i1 = 0; i1 < MAX; i1++)
		for (i2 = i1; i2 < MAX; i2++)
			for (i3 = i2; i3 < MAX; i3++)
				for (i4 = i3; i4 < MAX; i4++)
					for (i5 = i4; i5 < MAX; i5++)
						for (i6 = i5; i6 < MAX; i6++)
							for (i7 = i6; i7 < MAX; i7++)
								for (i8 = i7; i8 < MAX; i8++)
									for (i9 = i8; i9 < MAX; i9++)
									{
										if (i1 + i2 + i3 + i4 + i5 + i6 + i7 + i8 + i9 == n)
										{
											if (i1 != 0)
												cout << i1 << " + ";
											if (i2 != 0)
												cout << i2 << " + ";
											if (i3 != 0)
												cout << i3 << " + ";
											if (i4 != 0)
												cout << i4 << " + ";
											if (i5 != 0)
												cout << i5 << " + ";
											if (i6 != 0)
												cout << i6 << " + ";
											if (i7 != 0)
												cout << i7 << " + ";
											if (i8 != 0)
												cout << i8 << " + ";
											if (i9 != 0)
												cout << i9;;
											cout << " = " << n << endl;;
										}

									}
	cout << endl;
	
	system("pause");
}