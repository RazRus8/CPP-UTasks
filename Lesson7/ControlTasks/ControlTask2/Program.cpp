#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

struct quadraticEq
{
	double x1;
	double x2;
};

quadraticEq equation(double a, double b, double c)
{
	quadraticEq roots;

	double discr = pow(b, 2) - 4 * a * c;

	if (discr > 0)
	{
		roots.x1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		roots.x2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	}
	else if (discr == 0)
	{
		roots.x1 = roots.x2 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
	}
	else
	{
		roots.x1 = roots.x2 = NULL;
	}

	return roots;
}

int main()
{
	double a;
	double b;
	double c;

	cout << "Quadratic equation: ax^2 + bx + c = 0" << endl;
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "Enter c: ";
	cin >> c;

	quadraticEq roots = equation(a, b, c);

	if (roots.x1 == NULL && roots.x2 == NULL)
	{
		cout << "There are no roots in the eqution!";
	}
	else if (roots.x1 == roots.x2)
	{
		cout << "X1 = X2 = " << roots.x1;
	}
	else
	{
		cout << "X1 = " << roots.x1;
		cout << "\nX2 = " << roots.x2;
	}
}
