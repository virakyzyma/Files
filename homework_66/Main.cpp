#include <iostream>
#include <fstream>
using namespace std;

int main() 
{
	ifstream in("index.html", ios::in);
	char next = '\0';
	bool valid = true;

	if (in.is_open())
	{
		do	
		{
			char ch = '\0';
			in.get(ch);

			if (ch == '<' && next != '>') 
			{
				valid = false;
			}

			if (ch == '<')
			{
				next = ch;
			}
			if (ch == '>')
			{
				next = ch;
			}
		} while (in);
		in.close();
	}
	else
	{
		cout << "Can't open this file\n";
	}

	if (valid = true)
	{
		cout << "File is valid\n";
	}
	else 
		cout << "File isn't valid\n";

	return 0;
}