// Section 1.4.4
// if condition statement
#include <iostream>

int main() {
    // currVal is what we are count
    // val is used for storing the input new value
    int currVal = 0;
    int val = 0;

    // read the first value , ensuring having data to process
    if (std::cin >> currVal) {
        int cnt = 1;                     // store the count of the value we are processing
        while (std::cin >> val) {        // read the rest values
            if (val == currVal)          // if the value is equal to currVal
                ++cnt;                   // cnt add 1
            else {                       // or print the pre-value's count
                std::cout << currVal << " occurs "
                          << cnt << " times " << std::endl;
                currVal = val;            // update the currVal with val
                cnt = 1;                  // reset the counter
            }

        } // while loop exit from here
         // print the last value
         std::cout << currVal << " occurs "
                   << cnt << " times " << std::endl;

    } // Outer if exit from here
    return 0;
}
