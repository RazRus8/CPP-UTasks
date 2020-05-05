#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int addNumbers(int n)
{
	if (n == 1)
		return 1;
	else
		return (n + addNumbers(n - 1));
}

int addNumbers(int first, int second)
{
	if (second == first)
		return first;
	else
		return (second + addNumbers(first, second - 1));
}

int gcd(int m, int n)
{
	if (n == 0)
		return m;

	return gcd(n, m % n);
}

int main()
{
	//int number;
	//cout << "Enter a number: ";
	//cin >> number;
	//cout << "Sum: " << addNumbers(number);

	//int first;
	//int second;
	//cout << "Enter a first number: ";
	//cin >> first;
	//cout << "Enter a second number greater than first: ";
	//cin >> second;
	//cout << "Sum: " << addNumbers(first, second);

	int m;
	int n;

	cout << "Enter m: ";
	cin >> m;
	cout << "Enter n: ";
	cin >> n;
	cout << gcd(m, n);
}