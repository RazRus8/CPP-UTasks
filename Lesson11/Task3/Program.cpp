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
	Distance() : feet(0), inches(0.0) {}
	Distance(int _feet, float _inches) : feet(_feet), inches(_inches) {}

	void getDist()
	{
		cout << "\nEnter feets: ";
		cin >> feet;
		cout << "\nEnter inches: ";
		cin >> inches;
	}

	void showDist()
	{
		cout << feet << "\'- " << inches << "\"\n";
	}

	friend Distance operator+ (Distance, float);
	friend Distance operator+ (float, Distance);
	friend Distance operator- (Distance, float);
	friend Distance operator- (float, Distance);

	friend ostream& operator<< (ostream& out, const Distance &dist);

};

Distance operator+ (Distance dist, float inches)
{
	int f = dist.feet;
	float i = dist.inches + inches;

	if (i > 12.0)
	{
		f = dist.feet + (i / 12);
		i -= 12;
	}

	return Distance(f, i);
}

Distance operator+ (float inches, Distance dist)
{
	int f = dist.feet;
	float i = dist.inches + inches;

	if (i > 12.0)
	{
		f = dist.feet + (i / 12);
		i -= 12;
	}

	return Distance(f, i);
}

Distance operator- (Distance dist, float inches)
{
	int f = dist.feet;
	float i = dist.inches - inches;

	if (i < 0)
	{
		i += 12;
		f--;
	}

	return Distance(f, i);
}

Distance operator- (float inches, Distance dist)
{
	int f = dist.feet;
	float i = dist.inches - inches;

	if (i < 0)
	{
		i += 12;
		f--;
	}

	return Distance(f, i);
}

ostream& operator<< (ostream& out, const Distance& dist)
{
	out << dist.feet << "\'- " << dist.inches << "\"\n";
	return out;
}

int main()
{
	Distance dist1 = Distance(3, 8);
	Distance dist2;
	dist2 = dist1 - 12.2F;
	dist2.showDist();
}