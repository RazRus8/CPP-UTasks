#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

class Point
{
private:
	double x;
	double y;

public:
	Point() { }

	Point(double _x, double _y)
	{
		x = _x;
		y = _y;
	}

	double centerOfCoordinates()
	{
		return sqrt(pow(x, 2) + pow(y, 2));
	}

	bool operator < (Point &point)
	{
		Point temp;
		double tempDist = temp.centerOfCoordinates();
		double pointDist = point.centerOfCoordinates();

		if (pointDist > tempDist)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	friend ostream &operator << (ostream &out, Point &point);
};

void sort(Point point1, Point point2)
{
	Point temp;

	if (point1 < point2)
	{
		return;
	}
	else
	{
		temp = point1;
		point1 = point2;
		point2 = temp;
	}
}

ostream &operator << (ostream &out, Point &point)
{
	out << "x = " << point.x << "\ny = " << point.y;
	return out;
}

int main()
{
	vector<Point> v;
	v.push_back(Point(1, 2));
	v.push_back(Point(10, 12));
	v.push_back(Point(21, 7));
	v.push_back(Point(4, 8));
	
	sort(v.begin(), v.end());

	for (auto &point : v)
	{
		cout << point << '\n';
	}

	return 0;
}
