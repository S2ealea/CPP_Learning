//Exec 6.5 
//Implement a function which returns a numbers 
//absolute value
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

// function definition
unsigned int absolute_val(int val)
{
    return val > 0 ? val : -val;
}

int main(int argc, char *argv[])
{
    int n = 0;
    cout << "Please input a integer number." << endl;
    cin >> n ;

    cout << n << "'s absolute value is " << absolute_val(n) << endl;

    return 0;
}
