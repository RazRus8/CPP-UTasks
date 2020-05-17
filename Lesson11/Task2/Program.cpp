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
	const float MTF;
	int feet;
	float inches;

public:
	Distance() : feet(0), inches(0.0), MTF(3.280833F) {}
	Distance(int _feet, float _inches) : feet(_feet), inches(_inches), MTF(3.280833F) {}
	Distance(float meters) : MTF(3.280833F)
	{
		float fltfeet = MTF * meters;
		feet = int(fltfeet);
		inches = 12 * (fltfeet - feet);
	}

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

	operator float() const
	{
		float fracfeet = inches / 12;
		fracfeet += static_cast<float>(feet);
		return fracfeet / MTF;
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
	Distance dist1 = 2.35F;
	Distance dist2;
	
	float mtrs;
	mtrs = static_cast<float>(dist1);
	mtrs = dist2;

	cout << dist2;
}