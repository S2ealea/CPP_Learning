//Operation of the string object 
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	// string s;
	// cout << "Please enter a string :" ;
	// cin >> s;
	// cout << s << endl;

	// string s1, s2;
	// cin >> s1 >> s2;
	// cout << s1 << s2 << endl;

	//read unknown quantity of string objects
	// string word;
	// while (cin >> word)
	// {
	// 	cout << word << endl;

	// }

	//Use getline read a whole line input
	string line;
	//Read entire line, until the end
	while (getline(cin, line))
	{
		if (!line.empty())
		cout << line << endl;
	}

	return 0;
}