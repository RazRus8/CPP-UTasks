#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <list>
#include <map>

using namespace std;

template<typename U, typename V>
void display_map(map<U, V> const &m)
{
	for (auto const& val : m)
	{
		cout << "Student: "<< val.first << " has rating: " << val.second;
	}
}

struct StudentGrade
{
	string name;
	char rating;
};

int main()
{
	map<string, char> students;
	map<string, char>::iterator it;

	StudentGrade st1;
	
	cout << "Enter a student name: ";
	cin >> st1.name;

	cout << "Enter a rating for this student: ";
	cin >> st1.rating;

	students.insert({ st1.name, st1.rating });

	display_map(students);
}
