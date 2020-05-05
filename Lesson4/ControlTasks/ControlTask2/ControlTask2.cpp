#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool Input(int &a, int &b)
{
	cout << "Enter two integers!" << endl;
	cout << "a: ";
	cin >> a;

	if (cin.fail())
	{
		return false;
	}

	cout << "b: ";
	cin >> b;

	if (cin.fail())
	{
		return false;
	}

	return true;
}

int main()
{
	int a, b;

	if (!Input(a, b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	cout << s;
	return 0;
}
