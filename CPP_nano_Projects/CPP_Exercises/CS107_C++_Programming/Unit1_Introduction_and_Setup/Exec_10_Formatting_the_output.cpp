// Write a program in C++ to formatting the output.
/*
Sample Output:
Formatting the output :
----------------------------
The value of pi : 3.1416
The value of pi 4 decimal place of total width 8 : | 3.1416|
The value of pi 4 decimal place of total width 10 : | 3.1416|
The value of pi 4 decimal place of total width 8 : |--3.1416|
The value of pi 4 decimal place of total width 10 : |----3.1416|
The value of pi in scientific format is : 3.1416e+00
Status
in number : 0
Status in alphabet : false
*/

#include <iostream>
#include <cstdio>

int main()
{
    float pi = 3.1416;

    std::cout << "Formatting the output :" << std::endl;
    std::cout << "The value of pi : " << pi << std::endl;
    std::printf("The value of pi 4 decimal place of total width 8 : | %f|\n", pi);
    std::printf("The value of pi 4 decimal place of total width 10 : | %10f|\n", pi);
    std::printf("The value of pi 4 decimal place of total width 8 : | %-8f|\n", pi);
    std::printf("The value of pi 4 decimal place of total width 10 : | %-10f|\n", pi);
    std::printf("The value of pi in scientific format is : | %e|\n", pi);

    bool status = false;
    std::cout << "Status" << std::endl;
    std::cout << "in number : " << status << std::endl;
    std::printf("Status in alphabet : %s\n",status);

    return 0;
}
