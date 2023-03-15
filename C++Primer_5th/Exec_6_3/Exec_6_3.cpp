//Exec 6.3 Implement myself's fact function
#include <iostream>

using std::cout;
using std::endl;

unsigned fact(unsigned i)
{
    unsigned ret = 1;
    for (; i > 1; )
    {
        ret *= i--;
    }
    return ret;
}

int main(int argc, char *argv[])
{
    int j = fact(5);
    cout << "5! is : " << j << endl;

    return 0;
}
