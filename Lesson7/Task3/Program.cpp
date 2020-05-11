#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

struct Distance
{
	int feet;
	double inches;

	void ShowDist()
	{
		cout << feet << "\'-" << inches << "\"\n";
	}
};

Distance addDistance(Distance d1, Distance d2)
{
	Distance d;
	d.feet = d1.feet + d2.feet;
	d.inches = d1.inches + d2.inches;

	if (d.inches >= 12.0)
	{
		d.inches -= 12.0;
		d.feet++;
	}

	return d;
}

Distance inputDist()
{
	Distance d;
	cout << "Enter feet: ";
	cin >> d.feet;
	cout << "Enter inches: ";
	cin >> d.inches;
	return d;
}

void ShowDist(Distance d)
{
	cout << d.feet << "\'-" << d.inches << "\"\n";
}

int main()
{
	Distance d1 = inputDist();
	Distance d2 = { 1, 6.25 };
	Distance d3 = addDistance(d1, d2);

	d1.ShowDist();
	d2.ShowDist();
	d3.ShowDist();

	int length;
	cout << "Enter a length of the array of the distance: ";
	cin >> length;

	Distance *arrayDist = new Distance[length];

	for (int i = 0; i < length; i++)
	{
		arrayDist[i] = inputDist();
	}

	for (int i = 0; i < length; i++)
	{
		ShowDist(arrayDist[i]);
	}

	delete[] arrayDist;
	return 0;
}
