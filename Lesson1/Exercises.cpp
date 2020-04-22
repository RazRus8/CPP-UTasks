#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void ExerciseOne()
{
	//system("chcp 1251");

	string name;
	cout << "What is your name? ";

	//cin >> name; //gets first word only in string for input

	getline(cin, name); //gets all words in string for input

	cout << "Hello, " << name << "!\n";
}

int ExerciseTwo()
{
	//system("chcp 1251");

	string name;
	double x;
	double a, b;

	cout << "Enter a name: ";
	cout << "\nEnter a and b:\n";
	cin >> a;
	cin >> name;
	cin >> b;

	x = a / b;

	cout.precision(3);

	cout << "\nx = " << x << endl;
	cout << "Hello " << name << "!\n";
	//cout << sizeof(a / b) << ends << sizeof(x) << endl;

	return 0;
}

void ExerciseThree()
{
	double perimeter;

	cout << "Enter a perimeter: ";
	cin >> perimeter;

	double temp = perimeter / 3;
	double square = sqrt(perimeter * pow(temp, 3));

	cout << "Side\tSquare\n";
	cout.precision(3);
	cout << temp << "\t" << square << endl;
}
