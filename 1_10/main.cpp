//Exercise 1.10
// Using the -- calculator to print the
// integer from 10 to 0
//
//#include <iostream>
//
//int main() {
//    int i = 0;
//    while (i <= 10) {
//        std::cout << i << std::endl;
//        ++i;
//    }
//
//    return 0;
//}


//Exercise 1.11
//Prompt the user input two integer
//then print the integers between
//this two input-number
//#include <iostream>
//int main() {
//    int v1,v2;
//    std::cout << "Please input two integer number:" << std::endl;
//    std::cin >> v1 >>v2;
//
//    //Check the input validity
//    int lower_bound,upper_bound;
//    if (v1 < v2) {
//        lower_bound = v1;
//        upper_bound = v2;
//    }
//    else
//    {
//        lower_bound = v2;
//        upper_bound = v1;
//    }
//    //Print the integers between this two input number
//    int i = lower_bound;
//    while (i++ < (upper_bound - 1)) {
//        std::cout << i << std::endl;
//
//    }
//
//
//    return 0;
//}


//Exercise 1.12
// Using for loop summarize the
// integer from -100 to 100
//#include <iostream>
//int main() {
//    int sum = 0;
//    for (int i = -100; i <= 100; ++i) {
//        sum += i;
//
//    }
//    std::cout << "Sum of -100 to 100 is :" << sum << std::endl;
//    return 0;
//}


//Exercise 1.16
// Using the cin read a serial
// of numbers
// the print its sum
#include <iostream>
int main() {
    int sum = 0;
    int value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is :" << sum << std::endl;
    return 0;
}