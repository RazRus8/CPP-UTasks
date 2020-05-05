#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long double firBinSearch(double a, int n)
{
	double l = 0;
	double r = a;

	while (r - l > 1e-10)
	{
		double m = (l + r) / 2;

		if (pow(m, n) < a)
			l = m;
		else
			r = m;
	}

	return r;
}

int main()
{
	double a;
	int n;

	cout << "Enter a number: ";
	cin >> a;

	cout << "Enter a power between 1 and 10: ";
	cin >> n;

	cout << firBinSearch(a, n);
}
