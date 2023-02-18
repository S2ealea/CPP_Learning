//Section 3.2.3
#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main(int argc, char *argv[])
{
	#if 0
	//1.for loop expression
	string str("some string");

	for (auto c : str)
		cout << c << endl;

	#endif


	#if 0
	//2.use decltype
	string s("Hello World!!!");
	decltype(s.size()) punct_cnt = 0;

	//count the punctuation characters's number
	for (auto c : s)
	{
		if (ispunct(c))
		++punct_cnt;
	}

	cout << punct_cnt 
	     << " puncatuation characters in "<< s << endl;

	#endif


	#if 0
	//3.using the for loop change the string character
	//Notice: the loop variable must be reference type
	string s("Hello World!!!");
	for (auto &c : s )
	{
		c = toupper(c);
	}
	cout << s << endl;
	#endif


	#if 0
	//4.using the subscript operator to modify 
    //part of the string
	string s("some string");
	if (!s.empty())               //Enable the s[0] is not empty
		s[0] = toupper(s[0]);     //Make a new value to the first
		                          // character of s

	cout << s << endl;
	#endif 


    #if 0
    //5.using subscript to iterate
    //change the string's first word to upcase
    string s("some string");
    for (decltype(s.size()) index = 0;
    	index != s.size() && !isspace(s[index]); ++index)

    	      s[index] = toupper(s[index]);

    	  cout << s << endl;
    #endif


    #if 1
    //6.using the index to access randomly
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 - 15"
         << " separated by spaces."
         << " Hit ENTER when finished: "
         << endl;
    string result;        //store the hex string
    string::size_type n;  //store the input stream's input
    while (cin >> n)
    {
    	if (n < hexdigits.size())
    		result += hexdigits[n];
    }

    cout << "Your hex number is: " << result << endl;

    #endif 




	return 0;
}