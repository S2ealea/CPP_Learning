// Write a program in C++ to check the upper and lower limits of integer.
/*
Expected Output:
Check the upper and lower limits of integer :
--------------------------------------------------
The maximum limit of int data type : 2147483647
The minimum limit of int data type : -2147483648
The maximum limit of unsigned int data type : 4294967295
The maximum limit of long long data type : 9223372036854775807
The minimum limit of long long data type : -9223372036854775808
The maximum limit of unsigned long long data type : 18446744073709551615
The Bits contain in char data type : 8
The maximum limit of char data type : 127
The minimum limit of char data type : -128
The maximum limit of signed char data type : 127
The minimum limit of signed char data type : -128
The maximum limit of unsigned char data type : 255
The minimum limit of short data type : -32768
The maximum limit of short data type : 32767
The maximum limit of unsigned short data type : 65535
*/

// Some problems with the char data type using the std::numeric_limits.
#include <iostream>
#include <climits>
#include <limits>

int main()
{
    std::cout << "Check the upper and lower limits of integer :" << std::endl;
    std::cout << "The maximum limit of int data type :" << INT_MAX << std::endl;
    std::cout << "The minimum limit of int data type : " << INT_MIN << std::endl;
    std::cout << "The maximum limit of unsigned int data type :" << UINT_MAX << std::endl;
    std::cout << "The maximum limit of long long data type :" << LLONG_MAX << std::endl;
    std::cout << "The minimum limit of long long data type :" << LLONG_MIN << std::endl;
    std::cout << "The maximum limit of unsigned long long data type :" << ULLONG_MAX << std::endl;
    std::cout << "The Bits contain in char data type :" << std::numeric_limits<char>::digits << std::endl;
    std::cout << "The maximum limit of char data type :" << std::numeric_limits<char>::max() << std::endl;
    std::cout << "The minimum limit of char data type :" << std::numeric_limits<char>::min() << std::endl;
    std::cout << "The maximum limit of signed char data type :" << std::numeric_limits<signed char>::max() << std::endl;
    std::cout << "The minimum limit of signed char data type :" << std::numeric_limits<signed char>::min() << std::endl;
    std::cout << "The maximum limit of unsigned char data type :" << std::numeric_limits<unsigned char>::max() << std::endl;
    std::cout << "The maximum limit of short data type :" << std::numeric_limits<short>::max() << std::endl;
    std::cout << "The minimum limit of short data type :" << std::numeric_limits<short>::min() << std::endl;
    std::cout << "The maximum limit of unsigned short data type :" << std::numeric_limits<unsigned short>::max() << std::endl;

    return 0;
}
