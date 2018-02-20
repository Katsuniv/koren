#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long a = 0ll;
	long long i1, i2, i3, i4, i5, i6, i7, i8, i9,i10, MAX = 10;
		for (i1 = 1; i1 < MAX; i1++)
			for (i2 = 0; i2 < MAX; i2++)
				for (i3 = 0; i3 < MAX; i3++)
					for (i4 = 0; i4 < MAX; i4++)
						for (i5 = 0; i5 < MAX; i5++)
							for (i6 = 0; i6 < MAX; i6++)
								for (i7 = 0; i7 < MAX; i7++)
									for (i8= 0; i8 < MAX; i8++)
										for (i9 = 0; i9 < MAX; i9++)
											for (i10 = 0; i10 < MAX; i10++)
										{
											if (i2!=i1)
												if(i3!= i2 &&i3!=i1)
													if(i4 != i3 && i4!=i2&&i4!=i1)
														if(i5 != i4 && i5 != i3 && i5 != i2&&i5!=i1)
															if(i6!=i5&&i6!=i4&&i6!=i3&&i6!=i2&&i6!=i1)
																if(i7!=i6&& i7 != i5&& i7 != i4&& i7 != i3&& i7 != i2&& i7 != i1)
																	if(i8!=i7&& i8 != i6&& i8 != i5&& i8 != i4&& i8 != i3&& i8 != i2&& i8 != i1)
																		if(i9 !=i8&& i9 !=i7&& i9 !=i6&& i9 !=i5&& i9 !=i4&& i9 !=i3&& i9 !=i2&& i9 !=i1 )
																			if(i10!=i9&& i10 != i8&& i10 != i7&& i10 != i6&& i10 != i5&& i10 != i4&& i10 != i3&& i10 != i2&& i10 != i1)
																				if ((i2 * 100 + i3 * 10 + i4) % 2 == 0 && (i3 * 100 + i4 * 10 + i5) % 3 == 0 && (i4 * 100 + i5 * 10 + i6) % 5 == 0 && (i5 * 100 + i6 * 10 + i7) % 7 == 0 && (i6 * 100 + i7 * 10 + i8) % 11 == 0 && (i7 * 100 + i8 * 10 + i9) % 13 == 0 && (i8 * 100 + i9 * 10 + i10) % 17 == 0)
																				{
																					cout << i1 << i2 << i3 << i4 << i5 << i6 << i7 << i8 << i9 << i10 << endl;																	
																					a += i1 * 1000000000 + i2 * 100000000 + i3 * 10000000 + i4 * 1000000 + i5 * 100000 + i6 * 10000 + i7 * 1000 + i8* 100 + i9 * 10 + i10;
																					cout <<"sum= "<< a << endl;
																				}
										}

		cout << endl << "sum= " << a << endl;
	system("pause");
}