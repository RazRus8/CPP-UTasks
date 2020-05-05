#include <iostream>
#include <string>
#include <math.h>

using namespace std;

double root1(int a, int power)
{
	return pow(a, 1 / power);
}

double root2(int a, int power)
{
	double n = (double)power;
	double x[2];
	x[0] = a;
	x[1] = a / n;

	while (abs(x[0] - x[1]) > 0.001) // 0.001 is precision
	{
		x[1] = x[0];
		x[0] = (1 / n) * (((n - 1) * x[1]) + (a / pow(x[1], n - 1)));
	}

	return x[0];
}

int main()
{
	cout << root2(1000, 3);
}
