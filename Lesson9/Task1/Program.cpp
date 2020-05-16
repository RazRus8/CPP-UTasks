#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

class DivideByZeroError
{
private:
	string message;

public:
	DivideByZeroError() : message ("Divide by zero") { }
	void printMessage() const { cout << message << endl; }
};

float quotient(int num1, int num2)
{
	if (num2 == 0)
	{
		throw DivideByZeroError();
	}

	return (float)num1 / num2;
}

int main()
{
	int number1;
	int number2;

	cout << "Enter two integer for calculating quotient of them:\n";
	cin >> number1;
	cin >> number2;

	try
	{
		float result = quotient(number1, number2);
		cout << "Quotient equals: " << result << endl;
	}
	catch (DivideByZeroError error)
	{
		cout << "Error: ";
		error.printMessage();
		return 1;
	}

	return 0;
}
