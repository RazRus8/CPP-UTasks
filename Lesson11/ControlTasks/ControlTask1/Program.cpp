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

	friend Time operator+ (Time, Time);
	friend Time operator- (Time, Time);
	friend Time operator+ (Time, double);
	friend Time operator+ (double, Time);
	friend bool operator> (Time, Time);
	friend bool operator< (Time, Time);
};

Time operator+ (Time time1, Time time2)
{
	int hours = time1.hours + time2.hours;
	int minutes = time1.minutes + time2.minutes;
	int seconds = time1.seconds + time2.seconds;

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

	return Time(hours, minutes, seconds);
}

Time operator- (Time time1, Time time2)
{
	int hours = time1.hours - time2.hours;
	int minutes = time1.minutes - time2.minutes;
	int seconds = time1.seconds - time2.seconds;

	if (seconds < 0)
	{
		minutes -= (seconds / 60);
		seconds %= 60;
	}

	if (minutes > 59)
	{
		hours -= (minutes / 60);
		minutes %= 60;
	}

	if (hours > 12)
	{
		hours %= 12;
	}

	return Time(hours, minutes, seconds);
}

Time operator+ (Time time, double _seconds)
{
	int seconds = time.seconds + _seconds;
	int minutes = time.minutes;
	int hours = time.hours;

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

	return Time(hours, minutes, seconds);
}

Time operator+ (double _seconds, Time time)
{
	int seconds = time.seconds + _seconds;
	int minutes = time.minutes;
	int hours = time.hours;

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

	return Time(hours, minutes, seconds);
}

bool operator> (Time time1, Time time2)
{
	int secondsT1 = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;
	int secondsT2 = (time2.hours * 3600) + (time2.minutes * 60) + time2.seconds;

	if (secondsT1 > secondsT2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool operator< (Time time1, Time time2)
{
	int secondsT1 = (time1.hours * 3600) + (time1.minutes * 60) + time1.seconds;
	int secondsT2 = (time2.hours * 3600) + (time2.minutes * 60) + time2.seconds;

	if (secondsT1 < secondsT2)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	Time time1 = Time(5, 22, 50);
	Time time2 = Time(100, 500, 100);
	Time time3;

	time1.displayTime();
	//time2.displayTime();

	time3 = time1 + 3600;
	time3.displayTime();
}