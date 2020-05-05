#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int Myroot(double, double, double, double&, double&);

int main()
{
	double a;
	double b;
	double c;
	double x1;
	double x2;

	cout << "Quadratic equation: ax^2 + bx + c = 0" << endl;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	if (Myroot(a, b, c, x1, x2) == -1)
	{
		cout << "There are no roots in the eqution!";
	}
	else if (Myroot(a, b, c, x1, x2) == 0)
	{
		cout << "X1 = X2 = " << x1;
	}
	else
	{
		cout << "X1 = " << x1;
		cout << "\nX2 = " << x2;
	}
}

int Myroot(double a, double b, double c, double &x1, double &x2)
{
	double discr = pow(b, 2) - 4 * a * c;

	if (discr > 0)
	{
		x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

		return 1;
	}
	else if (discr == 0)
	{
		x1 = x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

		return 1;
	}
	else
	{
		return -1;
	}
}
