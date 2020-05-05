#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int Sum(int n)
{
	if (n == 1)
		return 5;

	return 5 * n + Sum(n - 1);
}

int main()
{
	cout << Sum(3);
}
