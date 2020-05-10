#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	const int n = 10;

	int a[n] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

	int min = 0;
	int buf = 0;

	for (int i = 0; i < n; i++)
	{
		min = i;

		for (int j = i + 1; j < n; j++)
			min = (a[j] < a[min]) ? j : min;

		if (i != min)
		{
			buf = a[i];
			a[i] = a[min];
			a[min] = buf;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
}