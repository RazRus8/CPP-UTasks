#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int indexOf(int arr[], int length, int seek)
{
	for (int i = 0; i < length; i++)
	{
		if (arr[i] == seek)
		{
			return i;
		}
	}

	return -1;
}

int max(int arr[], int length)
{
	int max = arr[0];

	for (int i = 0; i < length; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	return max;
}

int min(int arr[], int length)
{
	int min = arr[0];

	for (int i = 0; i < length; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	return min;
}

int main()
{
	const int n = 10;
	int mas[n];

	for (int i = 0; i < n; i++)
	{
		mas[i] = i + 1;

		//cout << "mas[" << i << "] = ";
		//cin >> mas[i];
	}

	int s = 0;
	int negative = 0;
	int positive = 0;
	int odd = 0;
	int even = 0;

	for (int i = 0; i < n; i++)
	{
		s += mas[i];

		if (mas[i] < 0)
		{
			negative += mas[i];
		}

		if (mas[i] > 0)
		{
			positive += mas[i];
		}

		if (i % 2 != 0)
		{
			odd += mas[i];
		}

		if (i % 2 == 0)
		{
			even += mas[i];
		}
	}

	cout << "Sum = " << s << endl;

	double avg = s / 2;

	cout << "Avg = " << avg << endl;
	cout << "Positive sum = " << positive << endl;
	cout << "Negative sum = " << negative << endl;
	cout << "Odd sum = " << odd << endl;
	cout << "Even sum = " << even << endl;

	int minval = min(mas, n);
	int maxval = max(mas, n);
	int indexOfMin = indexOf(mas, n, minval);
	int indexOfMax = indexOf(mas, n, maxval);

	cout << "Index of min value " << minval << " in the array = " << indexOfMin << endl;
	cout << "Index of max value " << maxval << " in the array = " << indexOfMax << endl;

	long product = 1;

	for (int i = indexOfMin; i < indexOfMax; i++)
	{
		product *= mas[i];
	}

	cout << "Product of numbers = " << product;
}