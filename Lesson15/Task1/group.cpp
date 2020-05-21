#include <iostream>
#include <string>
#include <Windows.h>
#include "group.h"
#include "student.h"


using namespace std;

void Group::addStudent(Student newStudent)
{
	masSt.push_back(newStudent);
}

void Group::delStudent(Student oldStudent)
{
	masSt.remove(oldStudent);
}

Student Group::findStudent(string searchName, string searchLastName)
{
	Student temp(searchName, searchLastName);
	iter = find(masSt.begin(), masSt.end(), temp);

	return *iter;
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
		(iter++)->display();
	}
}