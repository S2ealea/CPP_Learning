//Implement a function, when every time
//it was called, the count increases
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

size_t count_calls()
{
    static size_t count = 0;
    return count++;
}
int main(int argc, char *argv[])
{
    for (int i = 0; i != 20; ++i)
        cout << "function called" << count_calls() << "time(s)" << endl; 
    return 0;
}
