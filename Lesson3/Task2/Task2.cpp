#include <iostream>
#include <string>
#include <math.h>

using namespace std;

string Hello(string name)
{
	string str = name + ", " + "hello!\n";
	return str;
}

int main()
{
	string name;
	cout << "What is your name? " << endl;
	cin >> name;
	cout << Hello(name);

	return 0;
}