//A simeple program processing the input name and phone number.
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::istringstream;
using std::cin;

int main()
{
    struct PersonInfo {
        string name;
        vector<string> phones;
    };

    string line, word;
    vector<PersonInfo> people;

    while (getline(cin, line)) {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }
    return 0;
}
