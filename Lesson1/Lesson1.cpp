// Lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <math.h>
#include "Exercises.h"

using namespace std;
//  0	1	2	3	4	5	6	7	8	9
// x1, y1, x2, y2, x3, y3, x4, y4, x5, y5

double ControlTask(int arr[])
{
	double square = ((arr[0] * arr[3]) 
		+ (arr[2] * arr[5])
		+ (arr[4] * arr[7])
		+ (arr[6] * arr[9])
		+ (arr[8] * arr[1])
		- (arr[2] * arr[1])
		- (arr[4] * arr[3])
		- (arr[6] * arr[5])
		- (arr[8] * arr[7])
		- (arr[0] * arr[9])) / 2;

	return abs(square);
}

int main()
{
	cout << "Enter coordinates of pentagon\n";
	
	int arr[10];
	int size = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	double square = ControlTask(arr);

	cout << "Pentagon square: " << square << endl;

	//ExerciseOne();
	//ExerciseTwo();
	//ExerciseThree();
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
