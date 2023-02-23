//section 3.4.1 

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{
    string s("some string");

    #if 0
    //using iterator change the string's first
    //letter to upcase

    if (s.begin() != s.end())
    {
    	auto it = s.begin();
    	*it = toupper(*it);
    }
    #endif


    #if 0
    //using the iterator change the first
    //word to uppcase
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it )
    	*it = toupper(*it);
    #endif


    #if 1
    //print the text line until space character
    std::vector<string> text{"this is the element of the vector", "\n", "and then"};
    for (auto it = text.cbegin();
    	it != text.cend() && !it->empty(); ++it)

    	cout << *it << endl;
    #endif

    cout << s << endl;

	return 0;
}