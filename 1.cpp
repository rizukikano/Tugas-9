#include <iostream>

using namespace std;

int *generate(int angkaAwal, int panjang)
{
	int *listArray = new int[panjang];

	for (int i = 1; i <= panjang; i++)
	{
		listArray[i - 1] = angkaAwal * i;
	}

	return listArray;
}

int main()
{
	int panjang = 10, **array2d = new int*[panjang];

	for (int i = 0; i < panjang; i++)
	{
		array2d[i] = new int[panjang];
		array2d[i] = generate(i + 1, panjang);
	}

	for (int i = 0; i < panjang; i++)
	{
		for (int j = 0; j < panjang; j++)
		{
			cout << array2d[i][j] << " ";
		}
		cout << endl;
	}
}
