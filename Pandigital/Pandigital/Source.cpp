#include <iostream>

using namespace std;

/*void delimost(int i1, int i2, int i3, int i4, int i5, int i6, int i7, int i8, int i9, int i10,)
{
	bool usl = false;

	return usl;
}*/

int main()
{
	int i1, i2, i3, i4, i5, i6, i7, i8, i9,i10, MAX = 10;
	for (i1 = 0; i1 < MAX; i1++)
		for (i2 = i1; i2 < MAX; i2++)
			for (i3 = i2; i3 < MAX; i3++)
				for (i4 = i3; i4 < MAX; i4++)
					for (i5 = i4; i5 < MAX; i5++)
						for (i6 = i5; i6 < MAX; i6++)
							for (i7 = i6; i7 < MAX; i7++)
								for (i8 = i7; i8 < MAX; i8++)
									for (i9 = i8; i9 < MAX; i9++)
										for (i10 = i9; i10 < MAX; i10++)
										{
											if(i1!=i2&& i2 != i3 && i3 != i4 && i4 != i5&& i5 != i6 && i6 != i7 && i7!= i8 && i8 != i9&&i9 != i10)
											//if ((i2*100+i3*10+i4)%2==0&& (i3 * 100 + i4 * 10 + i5) % 3 == 0 && (i4 * 100 + i5 * 10 + i6) % 5 == 0 && (i5 * 100 + i6 * 10 + i7) % 7 == 0 && (i6 * 100 + i7 * 10 + i8) % 11 == 0 && (i7 * 100 + i8 * 10 + i9) % 13 == 0 && (i8 * 100 + i9 * 10 + i10) % 17 == 0)
											{
												cout << i1 << i2 << i3 << i4 << i5 << i6 << i7 << i8 << i9 << i10 << endl;
											}
										}

	system("pause");
}