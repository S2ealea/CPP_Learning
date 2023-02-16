//Exercise 3.4
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	string s1, s2;
	cout << "Please input two string "<< endl;
	cin >> s1 >> s2;

    //Compare the string 
    #if 0
	if ( s1 == s2) {
		cout << "s1 is equal to s2" << endl;

	} else {
		if (s1 < s2)
		{
			cout << s2 << endl;

		} else {
			cout << s1 << endl;
		}
	}
	#endif

	//Compare the string through the length
	#if 1
	if (s1.size() == s2.size())
	{
		cout << s1 << " is as long as " << s2 << endl;

	} else {
		if (s1.size() < s2.size())
		{
			cout << s2 << endl;

		} else {
			cout << s1 << endl;
		}
	}
	#endif 
}