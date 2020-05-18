#pragma once
#include <string>
#include <vector>
#include "human.h"

using namespace std;

class student : public human
{
private:
	vector<int> scores;

public:
	student(string last_name, string name, string second_name, vector<int> scores) : human(last_name, name, second_name)
	{
		this->scores = scores;
	}

	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average_score;

		for (int i = 0; i < count_scores; i++)
		{
			sum_scores += this->scores[i];
		}

		average_score = (float)sum_scores / (float)count_scores;

		return average_score;
	}

	string get_full_name() override
	{
		ostringstream full_name;
		full_name << last_name << " "
			<< name << " "
			<< second_name
			<< "\nAverage score: " << get_average_score();

		return full_name.str();
	}
};