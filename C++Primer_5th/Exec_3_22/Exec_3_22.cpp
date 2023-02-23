//Exec 3.22

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(int argc, char *argv[])
{

    //change the text word to upcase
    //until space character on line
    std::vector<string> text{"this is the element of the vector", "\n", "and then"};
    for (auto it = text.begin();
    	it != text.end() && !it->empty(); ++it)
    {
    	for (auto &c : *it)
    		c = toupper(c);
    }

    for (auto it = text.cbegin();
    	it != text.cend() && !it->empty(); ++it)
    {
    	cout << *it << endl;
    }

	return 0;
}