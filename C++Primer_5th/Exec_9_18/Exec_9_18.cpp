#include <iostream>
#include <string>
#include <deque>

using std::string;
using std::deque;
using std::cout;
using std::cin;

int main(){

    deque<string> input;
    for (string str; cin >> str; input.push_back(str));

    for (auto iter = input.cbegin(); iter != input.cend(); ++iter){
        cout << *iter << "\n";
    }
    return 0;
}
