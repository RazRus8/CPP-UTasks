#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

class Dot
{
private:
	double x;
	double y;

public:
	Dot()
	{
		x = 0;
		y = 0;
	}

	Dot(double x, double y)
	{
		this->x = x;
		this->y = y;
	}

	double distanceTo(Dot dot)
	{
		return sqrt(pow(dot.x - x, 2) + pow(dot.y - y, 2));
	}

};

class Triangle // Aggregation
{
private:
	Dot* dot1;
	Dot* dot2;
	Dot* dot3;

	double arr[3];

public:

	Triangle(Dot* _dot1, Dot* _dot2, Dot* _dot3) // Aggregation
	{
		dot1 = _dot1;
		dot2 = _dot2;
		dot3 = _dot3;
	}

	double* sidesLength()
	{
		arr[0] = dot1->distanceTo(*dot2);
		arr[1] = dot1->distanceTo(*dot3);
		arr[2] = dot2->distanceTo(*dot3);

		return arr;
	}

	double perimeter()
	{
		return arr[0] + arr[1] + arr[2];
	}

	double area()
	{
		return sqrt(perimeter() * (perimeter() - arr[0]) * (perimeter() - arr[1]) * (perimeter() - arr[2]));
	}
};

class Triangle // Composition
{
private:
	Dot dot1;
	Dot dot2;
	Dot dot3;

	double arr[3];

public:
	Triangle(const double arr[6]) // Composition
	{
		dot1 = Dot(arr[0], arr[1]);
		dot2 = Dot(arr[2], arr[3]);
		dot3 = Dot(arr[4], arr[5]);
	}

	double* sidesLength()
	{
		arr[0] = dot1.distanceTo(dot2);
		arr[1] = dot1.distanceTo(dot3);
		arr[2] = dot2.distanceTo(dot3);

		return arr;
	}

	double perimeter()
	{
		return arr[0] + arr[1] + arr[2];
	}

	double area()
	{
		return sqrt(perimeter() * (perimeter() - arr[0]) * (perimeter() - arr[1]) * (perimeter() - arr[2]));
	}
};

int main()
{
}
