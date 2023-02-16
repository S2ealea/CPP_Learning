//Exercise 3.5
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	string s, result;

	//Joined together
	#if 0
	while (cin >> s) 
	{
		result += s;
	}
	#endif

	//Separate by space 
	#if 1
	while (cin >> s)
	{
		result += s + " ";
	}
	#endif 

	cout << result << endl;

	return 0;
}