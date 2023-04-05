// Implement reset function with the reference parameter
#include <iostream>

void reset(int &i)
{
    i = 0;
}
int main()
{
    int i = 20;
    reset(i);

    std::cout << "i's value is :" << i << std::endl;

    return 0;
}
