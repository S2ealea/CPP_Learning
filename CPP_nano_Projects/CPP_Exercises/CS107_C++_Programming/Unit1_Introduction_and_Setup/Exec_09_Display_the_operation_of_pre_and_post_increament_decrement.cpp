// Write a program in C++ to display the operation of pre and post increment and decrement.
/*
Sample Output:
Display the operation of pre and post increment and decrement :
--------------------------------------------------------------------
The number is : 57
After post increment by 1 the number is : 58
After pre increment by 1 the number is : 59
After increasing by 1 the number is : 60
After post decrement by 1 the number is : 59
After pre decrement by 1 the number is : 58
After decreasing by 1 the number is : 57
*/

#include <iostream>
int main()
{
    std::cout << "Display the operation of pre and post increment and decrement :" << std::endl;
    int num = 57;
    std::cout << "The number is :" << num <<  std::endl;
    num++;
    std::cout << "After post increment by 1 the number is : " << num << std::endl;

    ++num;
    std::cout << "After pre increment by 1 the number is : " << num << std::endl;

    num = num + 1;
    std::cout << "After increasing by 1 the number is : " << num  << std::endl;

    num--;
    std::cout << "After post decrement by 1 the number is : "<< num << std::endl;

    --num;
    std::cout << "After pre decrement by 1 the number is : " << num  << std::endl;

    num = num - 1;
    std::cout << "After decreasing by 1 the number is : " << num << std::endl;

    return 0;
}
