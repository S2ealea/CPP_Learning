#include <iostream>

int main() {

//    /*
//     * Test the nested comment /*  Test comment
//     *
//     * */
//    std::cout << "Hello, World!" << std::endl;

    // Exercise 1.8
//    std::cout << "/*";    // Print out /*
//    std::cout << "*/";
//    std::cout << /* "*/" */   // error : missing terminating " character
    std::cout << /* "*/" /* "/*" */;    // Print out /*
    return 0;
}
