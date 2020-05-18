#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"

using namespace std;

int main()
{
	vector<int> scores;

	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student *stud = new student("Petrov", "Ivan", "Alekseevich", scores);
	cout << stud->get_full_name() << endl;
	cout << "Average score: " << stud->get_average_score() << endl;

	unsigned int teacher_work_time = 40;
	
	teacher* teacher1 = new teacher("Sergeev", "Dmitry", "Sergeevich", teacher_work_time);

	cout << teacher1->get_full_name() << endl;
	cout << "Hour count: " << teacher1->get_work_time() << endl;

	return 0;
}
