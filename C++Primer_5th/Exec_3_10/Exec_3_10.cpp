//Exercise 3.10
//remove the punctutaion of the string
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main (int argc, char *argv[])
{

	string s = "This is string, which: has - some % punctuations !!!";

	for (auto &c : s)
	{
		if (ispunct(c))
			c = ' ';
	}

	cout << s << endl;

	return 0;

}