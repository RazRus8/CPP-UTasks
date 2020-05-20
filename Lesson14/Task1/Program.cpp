#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

template<class T>
void sorting(T arr[], int length)
{
	int j = 0;
	for (int i = 0; i < length; i++)
	{
		T x = arr[i];
		
		for (int j = i - 1; j >= 0 && x < arr[j] ; j--)
		{
			arr[j + 1] = arr[j];
		}

		arr[j + 1] = x;
	}
}

template<class T>
void display(T arr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << "; ";
	}

	cout << "\n";
}

int main()
{
	int arr[] = { 9, 3, 17, 6, 5, 4, 31, 2, 12 };
	double arrd[] = { 2.1, 2.3, 1.7, 6.6, 5.3, 2.44, 3.1, 2.4, 1.2 };
	char arrc[] = "Hello, word";
	int k1 = sizeof(arr) / sizeof(arr[0]);
	int k2 = sizeof(arrd) / sizeof(arrd[0]);
	int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;

	sorting(arr, k1);
	display(arr, k1);

	sorting(arrd, k2);
	display(arrd, k2);

	sorting(arrc, k3);
	display(arrc, k3);
}
