#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;

	void displaySeconds()
	{
		int secondsCount = seconds + (minutes * 60) + (hours * 3600);
		cout << hours << ":" << minutes << ":" << seconds << " = " << secondsCount << " seconds" << endl;
	}

	void addition(Time time)
	{
		hours += time.hours;
		minutes += time.minutes;
		seconds += time.seconds;

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

		if (hours > 24)
		{
			hours %= 24;
		}
	}

	void substraction(Time time)
	{
		hours -= time.hours;
		minutes -= time.minutes;
		seconds -= time.seconds;

		if (seconds < 0)
		{
			minutes -= 1;
			seconds += 60;
		}

		if (minutes < 0)
		{
			hours -= 1;
			minutes += 60;
		}

		if (hours < 1)
		{
			hours += 24;
		}
	}
};

Time inputTime()
{
	Time time;
	
	while (true)
	{
		cout << "Enter hours from 1 to 24: ";
		cin >> time.hours;
		
		if (time.hours < 25 && time.hours > 0)
		{
			break;
		}
	}

	while (true)
	{
		cout << "Enter minutes from 0 to 59: ";
		cin >> time.minutes;

		if (time.minutes < 60 && time.minutes >= 0)
		{
			break;
		}
	}

	while (true)
	{
		cout << "Enter seconds from 0 to 59: ";
		cin >> time.seconds;

		if (time.seconds < 60 && time.seconds >= 0)
		{
			break;
		}
	}

	return time;
}

int main()
{
	Time time1 = inputTime();
	time1.displaySeconds();

	Time time2 = inputTime();
	time2.displaySeconds();

	time1.addition(time2);
	time1.substraction(time2);
	time1.displaySeconds();
}
