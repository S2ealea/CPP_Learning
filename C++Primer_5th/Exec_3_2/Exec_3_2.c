//Exercise 3.2 
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	//One line in an action
	#if 0
	string line;
	while (getline(cin, line))
	{
		if (!line.empty())
			cout << line << endl;
	}
	#endif 

	//One letter in an action
	#if 1
	string letter;
	while (cin >> letter)
	{
		cout << letter << endl;
	}
	#endif


	return 0;
}