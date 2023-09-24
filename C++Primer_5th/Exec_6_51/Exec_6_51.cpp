// Function match.
#include <iostream>

using std::cout;
using std::endl;

// Function declaration.
//void f();
//void f(int);
//void f(int , int);
//void f(double, double = 3.14);

// Function define.
void f()
{
    cout << "f() is invoked." << endl;
}

void f(int)
{
    cout << "f(int) is invoked." << endl;
}

void f(int, int)
{
    cout << "f(int, int) is invoked." << endl;
}

void f(double, double = 3.14)
{
    cout << "f(double, double = 3.14) is invoked." << endl;
}

int main()
{
    //Ambiguous
    //f(2.56, 42);
    // f(int)
    //f(42);

    //f(int, int)
    //f(42, 0);
    //f(double, double = 3.14)
    f(2.56, 3.14);

    return 0;
}

