#include <iostream>
#include <string>
#include <Windows.h>
#include "group.h"
#include "student.h"


using namespace std;

void Group::addStudent(Student* newStudent)
{
	masSt.insert(newStudent);
}

void Group::delStudent(Student* oldStudent)
{
	masSt.erase(oldStudent);
}

Student* Group::findStudent(string searchName, string searchLastName)
{
	Student* temp = new Student(searchName, searchLastName);
	iter = masSt.lower_bound(temp);

	return (*iter);
}

Group::Group(string name)
{
	this->name = name;
}

Group::Group()
{
	name = "Не определена";
}

void Group::setName(string newName)
{
	name = newName;
}

string Group::getName()
{
	return name;
}

int  Group::getSize()
{
	return masSt.size();
}

void Group::GroupOut()
{
	iter = masSt.begin();

	while (iter != masSt.end())
	{
		(*iter++)->display();
	}
}