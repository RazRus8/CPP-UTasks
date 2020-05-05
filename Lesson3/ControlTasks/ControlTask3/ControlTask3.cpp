#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double TriArea(int side)
{
	return (pow(side, 2) * sqrt(3)) / 4;
}

double TriArea(int a, int b, int c)
{
	double halfp = (a + b + c) / 2;
	return sqrt(halfp * (halfp - a) * (halfp - b) * (halfp - c));
}

int main()
{
	int num;

	cout << "What type of triangle?\n";
	cout << "1 - equilateral triangle; 2 - miscellaneous triangle: ";
	cin >> num;

	switch (num)
	{
		case 1:
			int side;
			cout << "Enter a side length: ";
			cin >> side;
			cout << "Triangle area: " << TriArea(side);
			break;
		
		case 2:
			int a;
			int b;
			int c;
			cout << "Enter a side length: ";
			cin >> a;
			cout << "Enter b side length: ";
			cin >> b;
			cout << "Enter c side length: ";
			cin >> c;
			cout << "Triangle area: " << TriArea(a, b, c);
			break;
	}
}
