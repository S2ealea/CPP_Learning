//Store the lines from the file into vector.
//Then use the istringstream read the data by word.

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;
using std::cerr;
using std::endl;
using std::cout;

int main()
{
    ifstream ifs("test.txt");
    if (!ifs)
    {
        cerr << "No data ?" << endl;
        return -1;
    }

    vector<string> vecLine;
    string line;
    while(getline(ifs, line))
        vecLine.push_back(line);

    for (auto &s : vecLine)
    {
        istringstream iss(s);
        string word;
        while(iss >> word)
            cout << word << endl;
    }

    return 0;
}
