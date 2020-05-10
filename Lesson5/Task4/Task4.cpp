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

	int n;
	int choose = 0;

	cout << "Enter size of the array: ";
	cin >> n;

	int* arr = new int[n];

	cout << "Enter " << n << " numbers for the array" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << i + 1 << " number: ";
		cin >> arr[i];
	}

	cout << "1. Sort the array by ascending\n";
	cout << "2. Sort the array by descending\n";
	cin >> choose;
	cout << "initial data: ";

	showArray(arr, n);

	bubbleSort(arr, n, (*fromFunc[choose - 1]));

	showArray(arr, n);

	delete[] arr;

	return 0;
}