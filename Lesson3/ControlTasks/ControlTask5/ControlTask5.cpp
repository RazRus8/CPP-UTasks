#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int BinaryConverter(int num)
{
	if (num == 0)
	{
		return 0;
	}

	return num % 2 + 10 * BinaryConverter(num / 2);
}

int main()
{
	cout << BinaryConverter(26);
}
