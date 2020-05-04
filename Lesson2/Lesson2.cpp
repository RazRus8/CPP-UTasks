// Lesson2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Exercises2.h"
#include <iomanip>

using namespace std;

void ControlTaskOne()
{
	int year;

	cout << "Enter a year: ";
	cin >> year;

	if ((year % 4 == 0) && (year % 100 != 0) && (year % 400 == 0))
	{
		cout << year << "is a leap year";
	}
	else
	{
		cout << year << "ain't a leap year";
	}
}

void ControlTaskTwo()
{
	int greatest;
	int arr[3];

	cout << "Enter three numbers:\n";

	greatest = arr[0];

	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << " : ";
		cin >> arr[i];
	}

	for (int i = 1; i < 3; i++)
	{
		if (arr[i] > greatest)
		{
			greatest = arr[i];
		}
	}

	cout << "Greatest number is: " << greatest;
}

void ControlTaskThree()
{

	int c1 = 1;
	int c2 = 2;
	int c5 = 5;
	int c10 = 10;

	int count1 = 0; 
	int count2 = 0;
	int count5 = 0;
	int count10 = 0;

	int value;

	cout << "Enter a value: ";
	cin >> value;

	int outputVal = value;
	

	if (value / 10 != 0)
	{
		count10 = value / 10;
		value -= (count10 * 10);
	}

	if (value / 5 != 0 && value != 0)
	{
		count5 = value / 5;
		value -= (count5 * 5);
	}

	if (value / 2 != 0 && value != 0)
	{
		count2 = value / 2;
		value -= (count2 * 2);
	}

	if (value / 1 != 0 && value != 0)
	{
		count1 = value / 1;
		value -= (count1 * 1);
	}

	cout << outputVal << " rub contains:\n";
	cout << "10 rub coin(s): " << count10 << "\n";
	cout << "5 rub coin(s): " << count5 << "\n";
	cout << "2 rub coin(s): " << count2 << "\n";
	cout << "1 rub coin(s): " << count1 << "\n";
}

void ControlTaskFour1()
{
	double x;
	double y;
	int points = 0;

	cout << "You'll shoot a bow 5 times!\n";
	cout << "Enter X and Y coordinates of shoot!\n";
	
	for (int i = 0; i < 5; i++)
	{
		cout << "X : ";
		cin >> x;
		cout << "Y : ";
		cin >> y;

		if (x * x + y * y < 1)
		{
			points += 10;
		}
		else if (x * x + y * y < 2 * 2)
		{
			points += 5;
		}
		else if (x * x + y * y < 3 * 3)
		{
			points += 1;
		}
	}

	if (points > 40)
	{
		cout << "Congrats, you have " << points << "! You are sniper!";
	}
	else if (points > 35)
	{
		cout << "Congrats, you have " << points << "! You are simple sniper!";
	}
	else if (points > 25)
	{
		cout << "Congrats, you have " << points << "! You are not bad!";
	}
	else
	{
		cout << "Congrats, you have " << points << "! You are newbie!";
	}
}

void ControlTaskFour2()
{
	double xCor = ((double)rand() / (double)RAND_MAX) * 3; // x correction
	double yCor = ((double)rand() / (double)RAND_MAX) * 3; // y correction

	double x;
	double y;
	int points = 0;

	cout << "You'll shoot a bow 5 times!\n";
	cout << "Enter X and Y coordinates of shoot!\n";

	for (int i = 0; i < 5; i++)
	{
		cout << "X : ";
		cin >> x;
		x += ((double)rand() / (double)RAND_MAX);
		cout << "Y : ";
		cin >> y;
		y += ((double)rand() / (double)RAND_MAX);

		if ((x - xCor) * (x - xCor) + (y - yCor) * (y - yCor) < 1)
		{
			points += 10;
		}
		else if ((x - xCor) * (x - xCor) + (y - yCor) * (y - yCor) < 2 * 2)
		{
			points += 5;
		}
		else if ((x - xCor) * (x - xCor) + (y - yCor) * (y - yCor) < 3 * 3)
		{
			points += 1;
		}
	}

	if (points > 40)
	{
		cout << "Congrats, you have " << points << "! You are sniper!";
	}
	else if (points > 35)
	{
		cout << "Congrats, you have " << points << "! You are simple sniper!";
	}
	else if (points > 25)
	{
		cout << "Congrats, you have " << points << "! You are not bad!";
	}
	else
	{
		cout << "Congrats, you have " << points << "! You are newbie!";
	}
}

void ControlTaskFour3()
{
	double xCor = ((double)rand() / (double)RAND_MAX) * 3; // x correction
	double yCor = ((double)rand() / (double)RAND_MAX) * 3; // y correction

	double x;
	double y;
	int counter = 0;
	int points = 0;

	cout << "You'll shoot a bow until get 50 points!\n";
	cout << "Enter X and Y coordinates of shoot!\n";

	while (points < 50)
	{
		counter++;

		cout << "X : ";
		cin >> x;
		x += ((double)rand() / (double)RAND_MAX);
		cout << "Y : ";
		cin >> y;
		y += ((double)rand() / (double)RAND_MAX);

		if ((x - xCor) * (x - xCor) + (y - yCor) * (y - yCor) < 1)
		{
			points += 10;
		}
		else if ((x - xCor) * (x - xCor) + (y - yCor) * (y - yCor) < 2 * 2)
		{
			points += 5;
		}
		else if ((x - xCor) * (x - xCor) + (y - yCor) * (y - yCor) < 3 * 3)
		{
			points += 1;
		}
	}

	if (counter < 7)
	{
		cout << "Congrats, you have " << counter << " shots! You are sniper!";
	}
	else if (counter < 10)
	{
		cout << "Congrats, you have " << counter << " shots! You are simple sniper!";
	}
	else if (counter < 14)
	{
		cout << "Congrats, you have " << counter << " shots! You are not bad!";
	}
	else
	{
		cout << "Congrats, you have " << counter << " shots! You are newbie!";
	}
}

int main()
{
	//ExcerciseOne();
	//ExerciseTwo();
	//ExerciseThree();
	//ExerciseFour();
	//ExerciseFive();
	//ExerciseSix();

	//ControlTaskOne();
	//ControlTaskTwo();
	//ControlTaskThree();
	
	//ControlTaskFour1();
	//ControlTaskFour2();
	ControlTaskFour3();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
