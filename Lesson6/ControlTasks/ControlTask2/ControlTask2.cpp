#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

int* bubbleSort(int arr[], int length)
{
	int min = 0;
	int buf = 0;

	for (int i = 0; i < length; i++)
	{
		min = i;

		for (int j = i + 1; j < length; j++)
			min = (arr[j] < arr[min]) ? j : min;

		if (i != min)
		{
			buf = arr[i];
			arr[i] = arr[min];
			arr[min] = buf;
		}
	}

	return arr;
}

string int2string(int arr[], int length)
{
	string str;

	for (int i = 0; i < length; i++)
	{
		str += to_string(arr[i]);
		str += " ";
	}

	return str;
}

int main()
{
	string initialArr;
	string sortedArr;

	const int length = 10;
	int arr[length] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

	initialArr = "Initial array: " + int2string(arr, length);
	sortedArr = "Sorted array: " + int2string(bubbleSort(arr, length), length);

	ofstream out("File.txt", ofstream::out);

	if (!out)
	{
		cout << "Unable to open a file\n";
		return 1;
	}

	if (out.is_open())
	{
		out << initialArr << "\n" << sortedArr << endl;
	}

	cout << "Arrays has successfuly written into the file\n";

	out.close();

	return 0;
}