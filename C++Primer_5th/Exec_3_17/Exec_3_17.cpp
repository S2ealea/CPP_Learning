//Exec 3.17
#include <iostream>
#include <vector>
#include <cctype>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char *argv[])
{

    //read a set of words
    string words;
    vector<string> v;

    while (cin >> words)
    {
    	v.push_back(words);
    }


    //transfer the words in the vector 
    // to uppercase
    for (auto &str : v)
    {
    	for (auto &c : str)
    	{
    		c = toupper(c);    		
    	}

    }

    //print the vector 
    for (auto i : v)
    {
    	cout << i << endl;
    }


	return 0;
}