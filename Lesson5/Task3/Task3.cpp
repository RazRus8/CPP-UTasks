#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void showArray(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	cout << "\n";
}

bool fromMin(const int a, const int b)
{
	return a > b;
}

bool fromMax(const int a, const int b)
{
	return a < b;
}

void bubbleSort(int arr[], const int n, bool(*compare)(int a, int b))
{
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if ((*compare)(arr[j], arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	bool(*fromFunc[2])(int, int) = { fromMin, fromMax };

	const int n = 10;
	int choose = 0;
	int arr[n] = { 9, 8, 7, 6, 1, 2, 3, 5, 4, 9 };

	cout << "1. Sort by ascending\n";
	cout << "2. Sort by descending\n";
	cin >> choose;
	cout << "initial data: ";

	showArray(arr, n);

	/*switch (choose)
	{
	case 1:
		bubbleSort(arr, n, fromMin);
		break;
	case 2:
		bubbleSort(arr, n, fromMax);
		break;
	default:
		cout << "\rUnknown operatin";
	}*/

	bubbleSort(arr, n, (*fromFunc[choose - 1]));

	showArray(arr, n);

	return 0;
}
