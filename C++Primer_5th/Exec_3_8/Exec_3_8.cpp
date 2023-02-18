//Exercise 3.8
//using for loop and while loop 
//reimplement the exercise 3.6

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


     #if 0
	//1.for loop implement
	for (auto &c : s)
	{
		c = 'X';    //Using '' not "", or error will occur
	}
	#endif
    

    #if 1
    //2.while loop implement 
    decltype (s.size()) i = 0;

    while (i != s.size())
    {
    	s[i] = 'X';
    	i++;
    }
    #endif 


	
	cout << s << endl;
}
