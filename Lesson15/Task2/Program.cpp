#include <iostream>
#include <windows.h>
#include <string>
#include "student.h"
#include "idCard.h"
#include "group.h"

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);


	string name;
	string last_name;

	IdCard* idc = new IdCard(123456, "�������");
	IdCard* idc2 = new IdCard(654321, "�������");

	cout << "Name: ";
	getline(cin, name);

	cout << "Last name: ";
	getline(cin, last_name);

	Student* student02 = new Student(name, last_name, idc);
	Student* student03 = new Student("����", "������", idc2);
	Student* student04 = new Student("�����", "�������", idc);
	Student* student05 = new Student("����", "����", idc2);
	Student* student06 = new Student("�������", "�����", idc);

	int scores[5];
	int sum = 0;

	for (int i = 0; i < 5; ++i)
	{
		cout << "Score " << i + 1 << ": ";
		cin >> scores[i];
		sum += scores[i];
	}
	
	student02->set_scores(scores);

	double average_score = sum / 5.0;

	student02->set_average_score(average_score);

	cout << "Average ball for " << student02->get_name() << " "
		<< student02->get_last_name() << " is "
		<< student02->get_average_score() << endl;


	cout << "IdCard: " << student02->getIdCard().getNumber() << endl;
	cout << "Category: " << student02->getIdCard().getCategory() << endl;


	Group gr1957("1957");
	gr1957.addStudent(student02);
	gr1957.addStudent(student03);
	gr1957.addStudent(student04);
	gr1957.addStudent(student05);
	gr1957.addStudent(student06);


	int k = gr1957.getSize();
	cout << "� ������ " << gr1957.getName() << " " << k << " ��." << endl;

	gr1957.GroupOut();

	return 0;
}
