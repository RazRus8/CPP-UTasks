#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include <typeinfo>

using namespace std;

template<class T>
T average_of_array(T arr[], int length)
{
	T sum = 0;

	if (typeid(T) == typeid(char))
	{
		int _sum = 0;

		for (int i = 0; i < length; i++)
		{
			_sum += (int)arr[i];
		}

		return _sum / length;
	}
	else
	{
		for (int i = 0; i < length; i++)
		{
			sum += arr[i];
		}
		
	}
	
	return sum / length;
}

int main()
{
	int arr1[] = { 9, 3, 17, 6, 5, 4, 31, 2, 12 };
	long arr2[] = { 9, 3, 17, 6, 5, 4, 31, 2, 12 };
	double arr3[] = { 2.1, 2.3, 1.7, 6.6, 5.3, 2.44, 3.1, 2.4, 1.2 };
	char arr4[] = "Hello, world!";
	
	int size1 = sizeof(arr1) / sizeof(arr1[0]);
	int size2 = sizeof(arr2) / sizeof(arr2[0]);
	int size3 = sizeof(arr3) / sizeof(arr3[0]);
	int size4 = sizeof(arr4) / sizeof(arr4[0]) - 1;

	cout << average_of_array(arr1, size1) << endl;
	cout << average_of_array(arr2, size2) << endl;
	cout << average_of_array(arr3, size3) << endl;
	cout << average_of_array(arr4, size4) << endl;
}
