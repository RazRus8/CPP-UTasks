#include <iostream>
#include <string>
#include <math.h>
#include <ctime>

using namespace std;

void ExerciseOne(int x, int y)
{
	if (x * x + y * y < 9 && y > 0)
	{
		cout << "Inside" << endl;
	}
	else if (x * x + y * y > 9 || y < 0)
	{
		cout << "Outside" << endl;
	}
	else
	{
		cout << "On boarder" << endl;
	}
}

void ExerciseTwo()
{
	char op;

	cout << "Make a choise, set your dream car: ";
	cin >> op;

	switch (tolower(op))
	{
		case 'v':
			cout << "Air conditioning should be\n";
		
		case 's':
			cout << "Radio should play\n";

		default:
			cout << "Round wheels\n";
			cout << "Powerful engine\n";
	}
}

void ExerciseThree()
{
	double x, x1, x2, y;

	cout << "x1 = ";
	cin >> x1;
	cout << "x2 = ";
	cin >> x2;

	cout << "\tx\tsin(x)\n";

	x = x1;
	do
	{
		y = sin(x);
		cout << "\t" << x << "\t" << y << endl;
		x = x + 0.01;
	} while (x <= x2);
}

void ExerciseFour()
{
	int a, b;

	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		}
		else
		{
			b -= a;
		}
	}

	cout << "GCD = " << a << endl;
}

void ExerciseFive()
{
	//srand(time(NULL));

	int a, b, c;

	int k = 0, n = 10;

	for (int i = 1; i <= n; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;

		cout << a << " * " << b << " = ";
		cin >> c;

		if (a * b != c)
		{
			k++;
			cout << "Error!";
			cout << a << " * " << b << " = " << a * b << endl;
		}
	}

	cout << "Count error: " << k << endl;
}

void ExerciseSix()
{
	int k = 0;
	int m = 0;
	int s = 0;

	for (int i = 1; i < 100; i++)
	{
		if ((i > k) && (i < m))
		{
			continue;
		}

		s += i;
	}

	cout << s;
}