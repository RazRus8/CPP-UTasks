#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double Area(int arrX[], int arrY[], int n)
{
	double area = 0;
	
	int j = n - 1;

	for (int i = 0; i < n; i++)
	{
		area += (arrX[j] + arrX[i]) * (arrY[j] - arrY[i]);
		j = i;
	}

	return abs(area / 2);
}

int main()
{
	int x;
	int y;
	int arrX[5];
	int arrY[5];

	cout << "Enter coordinates x and y of 5 poits of pentagon!" << endl;

	for (int i = 1; i < 6; i++)
	{
		if (i == 1)
		{
			cout << "\nEnter coordinates of 1st point of pentagon!" << endl;
		}
		else if (i == 2)
		{
			cout << "\nEnter coordinates of 2nd point of pentagon!" << endl;
		}
		else if (i == 3)
		{
			cout << "\nEnter coordinates of 3rd point of pentagon!" << endl;
		}
		else
		{
			cout << "\nEnter coordinates of "<< i <<"th point of pentagon!" << endl;
		}

		cout << "Enter x: ";
		cin >> x;
		cout << "Enter y: ";
		cin >> y;

		arrX[i - 1] = x;
		arrY[i - 1] = y;
	}

	int n = sizeof(arrX) / sizeof(arrX[0]);
	cout << "Area of pentagon: " << Area(arrX, arrY, n) << endl;

	return 0;
}
