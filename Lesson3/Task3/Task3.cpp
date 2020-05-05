#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void Hello(string name)
{
	cout << name << ", " << "hello!" << endl;
}

void Hello(string name, int k)
{
	cout << name << ", " << "hello! " << "your input " << k << endl;
}

int main()
{
	int k;
	cout << "Input number: ";
	cin >> k;

	string name;
	cout << "What is your name? " << endl;
	cin >> name;
	Hello(name);
	Hello(name, k);

	return 0;
}
