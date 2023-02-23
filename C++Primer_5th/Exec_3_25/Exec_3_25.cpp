//Exec 3.25
//use the iterator rebuild
//the section 3.3.3 in page 93

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
    vector<unsigned> scores(11, 0);
    unsigned grade;

    while (cin >> grade)
    {
    	if (grade <= 100)
    		++*(scores.begin() + grade/10);
    }

    for (auto s : scores)
    {
    	cout << s << " " << endl;
    }
	return 0;
}