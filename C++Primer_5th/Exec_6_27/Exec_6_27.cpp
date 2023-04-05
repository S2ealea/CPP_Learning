//Implement a function with initializer_list<int> type parameter,
//summary the list's elements
#include <iostream>
#include <initializer_list>

int sum (std::initializer_list<int> const &il)
{
    int sum = 0;
    for (auto i : il)
        sum += i;
    return sum;
}

int main(void)
{
    auto il = {10, 20, 34, 46, 69, 38};
    std::cout << "sum of the initializer list is :" << sum(il) << std::endl;
    return 0;
}
