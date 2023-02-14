// Definate and initialize the string object

#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	//String obj initialize
	string s1;              //Default initialize
	string s2 = s1;         //s2 is the copy of the s1
	string s3 = "hiya";     //s3 is the copy of the literal of string
	string s4(10,'c');      //s4's content is cccccccccc
	string s5(s4);          //s5 is the copy of s4
	string s6("value");     //s6 is the copy of the literal of "value", 
	                        //except the literal's final empty char

	cout << "s1 is :" << s1 << endl;
	cout << "s2 is :" << s2 << endl;
	cout << "s3 is :" << s3 << endl;
	cout << "s4 is :" << s4 << endl;
	cout << "s5 is :" << s5 << endl;
	cout << "s6 is :" << s6 << endl;


	return 0;
}