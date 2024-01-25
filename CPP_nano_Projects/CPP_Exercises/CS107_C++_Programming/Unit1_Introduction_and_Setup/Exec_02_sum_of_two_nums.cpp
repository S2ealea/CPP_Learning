// Write a program in C++ to print the sum of two numbers.
/*
* Sample Output:
* Print the sum of two numbers :
* -----------------------------------
* The sum of 29 and 30 is : 59
*/

#include <iostream>
int main()
{
    int i = 0;
    int j = 0;
    std::cout << "Please input 2 numbers: " << std::endl;
    std::cin >> i >> j ;
    std::cout << "The sum of " << i << " and " << j << " is : " << (i + j) << std::endl;
    return 0;
}
