//Exercise 3.6
//using for loop replace the string's 
//character to X 

#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
	string s("this is a piece of string ");

	for (auto &c : s)
	{
		c = 'X';    //Using '' not "", or error will occur
	}
	
	cout << s << endl;
}
