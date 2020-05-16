#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

class Triangle
{
private:
	double sideA;
	double sideB;
	double sideC;

public:
	Triangle(double _sideA, double _sideB, double _sideC)
	{
		sideA = _sideA;
		sideB = _sideB;
		sideC = _sideC;

		if (sideA > (sideB + sideC))
		{
			throw "invalid value of A side of the triangle!";
		}
		else if (sideB > (sideA + sideC))
		{
			throw "invalid value of B side of the triangle!";
		}
		else if (sideC > (sideA + sideB))
		{
			throw "invalid value of C side of the triangle!";
		}
	}

	friend double triangleArea(Triangle t);
};

double triangleArea(Triangle t)
{
	double perimeter = (t.sideA + t.sideB + t.sideC) / 2;
	return sqrt(perimeter * (perimeter - t.sideA) * (perimeter - t.sideB) * (perimeter - t.sideC));
}

int main()
{
	double sideA;
	double sideB;
	double sideC;

	cout << "Enter values for sides of the triangle";
	cout << "\nEnter value for A side: ";
	cin >> sideA;
	cout << "Enter value for B side: ";
	cin >> sideB;
	cout << "Enter value for C side: ";
	cin >> sideC;

	try
	{
		Triangle triangle = Triangle(sideA, sideB, sideC);
		double area = triangleArea(triangle);
		cout << "Area of the triangle: " << area << endl;
	}
	catch (const char *msg)
	{
		cout << "Error: " << msg << endl;
		return 1;
	}

	return 0;
}
