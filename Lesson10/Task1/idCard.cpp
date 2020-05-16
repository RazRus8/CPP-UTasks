#include "idCard.h"

IdCard::IdCard(int n)
{
	number = n;
	category = "Not set";
}

IdCard::IdCard()
{
	number = 0;
	category = "Not set";
}

IdCard::IdCard(int n, string cat)
{
	number = n;
	category = cat;
}

void IdCard::setNumber(int newNumber)
{
	number = newNumber;
}

int IdCard::getNumber()
{
	return number;
}

void IdCard::setCategory(string cat)
{
	category = cat;
}

string IdCard::getCategory()
{
	return category;
}