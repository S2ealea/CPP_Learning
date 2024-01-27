//  Write a program in C++ to check overflow/underflow during various arithmetical operation.
/*
Sample Output:
Check overflow/underflow during various arithmetical operation :
Range of int is [-2147483648, 2147483647]
---------------------------------------------------------------------
Overflow the integer range and set in minimum range : -2147483648
Increasing from its minimum range : -2147483647
Product is :1
Underflow the range and set in maximum range : 2147483647
Decreasing from its maximum range : 2147483646
Product is : 0
*/

#include <iostream>

int main()
{
    std::cout << "Check overflow/underflow during various arithmetical operation :" << std::endl;
    std::cout << "Range of int is [-2147483648, 2147483647]" << std::endl;

    int n1 = 2147483647;
    std::cout << "n1 = " << n1 << std::endl;
    std::cout << "Overflow the integer range and set in minimum range: " << n1 + 1 << std::endl;
    std::cout << "Increasing from its minimum range :" << n1 + 2 << std::endl;
    std::cout << "Product is :" << n1 * n1 << std::endl;
    std::cout << std::endl;

    int n2 = -2147483648;
    std::cout << "n2 = " << n2 << std::endl;
    std::cout << "Underflow the integer range and set in maximum range: " << n2 - 1 << std::endl;
    std::cout << "Decreasing from its maximum range: " << n2 - 2 << std::endl;
    std::cout << "Product is :" << n2 * n2 << std::endl;
    return 0;
}
