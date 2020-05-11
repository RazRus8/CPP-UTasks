#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	string poem;

	cout << "Enter a poem: ";
	getline(cin, poem);

	ofstream out ("Poem.txt", ofstream::out);

	if (!out)
	{
		cout << "Unable to open a file\n";
		return 1;
	}

	if (out.is_open())
	{
		out << poem;
	}

	cout << "The poem has successfuly written into the file\n";

	out.close();

	return 0;
}
