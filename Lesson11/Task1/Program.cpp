#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

class Distance
{
private:
	int feet;
	float inches;

public:
	Distance() : feet(0), inches(0.0) { }

	Distance(int _feet, float _inches) : feet(_feet), inches(_inches) { }

	void getDist()
	{
		cout << "\nEnter feets: ";
		cin >> feet;
		cout << "\nEnter inches: ";
		cin >> inches;
	}

	void showDist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}

	Distance operator+ (Distance) const;
	friend Distance operator- (Distance, Distance);
	friend ostream& operator<< (ostream& out, const Distance &dist);
};

Distance Distance::operator+ (Distance d2) const
{
	int f = feet + d2.feet;
	float i = inches + d2.inches;

	if (i > 12.0)
	{
		i -= 12.0;
		f++;
	}

	return Distance(f, i);
}

Distance operator- (Distance d1, Distance d2)
{
	int f = d1.feet - d2.feet;
	float i = d1.inches - d2.inches;

	if (i < 0)
	{
		i += 12;
		f--;
	}

	return Distance(f, i);
}

ostream& operator<< (ostream& out, const Distance& dist)
{
	out << dist.feet << "\'-" << dist.inches << "\"\n";
	return out;
}

int main()
{
	Distance dist1, dist2, dist3, dist4;
	dist1.getDist();
	dist2.getDist();

	dist3 = dist1 + dist2;
	dist4 = dist1 + dist2 + dist3;

	cout << "\ndist1 = " << dist1;
	//dist1.showDist();
}
