#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <math.h>
#include <vector>
#include <windows.h>

using namespace std;

class Item
{
private:
	string title;
	double price;

public:
	virtual void getdata()
	{
		cout << "\nEnter a title: ";
		cin >> title;
		cout << "Enter a price: ";
		cin >> price;
	}

	virtual void putdata()
	{
		cout << "\nTitle: " << title;
		cout << "\nPrice: " << price;
	}
};

class PaperBook : public Item
{
private:
	int pages;

public:
	void getdata()
	{
		Item::getdata();
		cout << "Enter number of sheets: ";
		cin >> pages;
	}

	void putdata()
	{
		Item::putdata();
		cout << "\nSheets: " << pages;
	}
};

class AudioBook : public Item
{
private:
	double time;

public:
	void getdata()
	{
		Item::getdata();
		cout << "Enter a duration time: ";
		cin >> time;
	}

	void putdata()
	{
		Item::putdata();
		cout << "\nDuration time: " << time;
	}
};

int main()
{
	SetConsoleOutputCP(1251);

	Item* pubarr[100];

	int n = 0;
	char choice;

	do
	{
		cout << "Paper book or audio book (b/a)? ";
		cin >> choice;

		if (choice == 'b')
		{
			pubarr[n] == new PaperBook;
		}
		else
		{
			pubarr[n] == new AudioBook;
		}

		pubarr[n++]->getdata();

		cout << "Continue (y/n)?";
		cin >> choice;
	} while (choice == 'y');

	for (int i = 0; i < n; i++)
	{
		pubarr[i]->putdata();
		cout << endl;
	}

	return 0;
}