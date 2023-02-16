//Operation of the string object 
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	#if 0
	string s;
	cout << "Please enter a string :" ;
	cin >> s;
	cout << s << endl;
	#endif

    #if 0
	string s1, s2;
	cin >> s1 >> s2;
	cout << s1 << s2 << endl;
	#endif

	//read unknown quantity of string objects
	#if 0
	string word;
	while (cin >> word)
	{
		cout << word << endl;

	}
	#endif


    #if 0
	//Use getline read a whole line input
	string line;
	//Read entire line, until the end
	while (getline(cin, line))
	{
		if (!line.empty())
		cout << line << endl;
	}
	#endif

	//String obj manipulate

    #if 0
	//1.String obj addition
	string s1 = "hello, ", s2 = "world\n";
	string s3 = s1 + s2;
	s1 += s2;

	cout << "s1 :" << s1 << endl;
	cout << "s2 :" << s2 << endl;
	cout << "s3 :" << s3 << endl;
	#endif

	//2.String obj add literal
	string s1 = "hello", s2 = "world";
	string s3 = s1 + "," + s2 + '\n';
	string s4 = s1 + ",";
	//string s5 = "hello" + ",";           //Error, the two operator neither is the string object
	string s6 = s1 + "," + "world";
	//string s7 = "hello" + "," + s2;        //Error same with the s5


	cout << "s1 :" << s1 << endl;
	cout << "s2 :" << s2 << endl;
	cout << "s3 :" << s3 << endl;
	cout << "s4 :" << s4 << endl;
	cout << "s6 :" << s6 << endl;
	//cout << "s7 :" << s7 << endl;

	return 0;
}