#include "Chapter6.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
    if (val == 0 || val == 1)
        return 1;
    else
        return val*fact(val - 1);
}

int func()
{
    int n, ret = 1;
    cout <<"Input a number:"<<endl;
    cin >> n;
    while (n > 1)
        ret *= n--;

    return ret;
}



