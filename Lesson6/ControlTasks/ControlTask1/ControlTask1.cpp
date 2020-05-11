#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
	string poem;
	int lines;
	cout << "How many lines does poem contain?: ";
	cin >> lines;
	cout << "Enter a poem in " << lines << " lines:\n";

	ofstream out ("Poem.txt", ofstream::out);
	
	for (int i = 0; i <= lines; i++)
	{
		getline(cin, poem);
		
		if (!out)
		{
			cout << "Unable to open a file\n";
			return 1;
		}

		if (out.is_open())
		{
			out << poem << "\n";
		}
	}

	cout << "The poem has successfuly written into the file\n";

	out.close();

	return 0;
}
