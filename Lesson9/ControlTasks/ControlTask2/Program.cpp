#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

class Time
{
private:
	int hours;
	int minutes;
	int seconds;

public:
	Time()
	{
		hours = 0;
		minutes = 0;
		seconds = 0;
	}

	Time(int _hours, int _minutes, int _seconds)
	{
		hours = _hours;
		minutes = _minutes;
		seconds = _seconds;

		if (hours < 0 || minutes < 0 || seconds < 0)
		{
			throw ErrorException("Time cannot be a negative!");
		}

		if (seconds > 59)
		{
			minutes += (seconds / 60);
			seconds %= 60;
		}

		if (minutes > 59)
		{
			hours += (minutes / 60);
			minutes %= 60;
		}

		if (hours > 12)
		{
			hours %= 12;
		}
	}

	void displayTime()
	{
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}

	Time addition(Time time1, Time time2)
	{
		

		Time time;

		time.hours = time1.hours + time2.hours;
		time.minutes = time1.minutes + time2.minutes;
		time.seconds = time1.seconds + time2.seconds;

		if (time.seconds > 59)
		{
			time.minutes += (time.seconds / 60);
			time.seconds %= 60;
		}

		if (time.minutes > 59)
		{
			time.hours += (time.minutes / 60);
			time.minutes %= 60;
		}

		if (time.hours > 12)
		{
			time.hours %= 12;
		}

		return time;
	}

	class ErrorException
	{
	private:
		string message;
	public:
		ErrorException(string _message)
		{
			message = _message;
		}

		void printMessage() const { cout << message << endl; }
	};
};

int main()
{
	try
	{
		Time time1 = Time(5, 22, 50);
		Time time2 = Time(100, 500, 100);
		Time time3;
		time1.displayTime();
		time2.displayTime();
		time3 = time3.addition(time1, time2);
		time3.displayTime();
	}
	catch (Time::ErrorException ex)
	{
		cout << "Error: ";
		ex.printMessage();
		return 1;
	}

	return 0;
}