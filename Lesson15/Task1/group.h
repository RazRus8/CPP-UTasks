#pragma once
#include <string>
#include <list>
#include <algorithm>
#include "student.h"

using namespace std;


class Group
{
private:
	string name;
	list<Student> masSt;			// список студентов
	list<Student>::iterator iter; // итератор для списка


public:
	Group(string name);
	Group();

	void setName(string newName);
	string getName();
	int  getSize();
	
	void addStudent(Student newStudent);
	void delStudent(Student oldStudent);

	Student findStudent(string, string);

	void GroupSort();
	void GroupOut();
};