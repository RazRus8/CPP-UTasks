#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void Hello(string);

int A(int arr[])
{
	return arr[3];
}

int main()
{
	/*string name;
	cout << "What is your name? " << endl;
	cin >> name;
	Hello(name);*/


	int arr[] = { 1,2,3,4,5 };
	cout << A(arr);

	return 0;
}

void Hello(string name)
{
	cout << name << ", " << "hello!" << endl;
}
