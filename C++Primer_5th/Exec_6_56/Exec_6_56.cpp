#include <iostream>
#include <vector>

int func(int , int);


int add(int a, int b) {return a + b; }
int subtract(int a, int b) {return a - b; }
int multiply(int a, int b) {return a * b; }
int divide(int a, int b) {return b != 0 ? a / b : 0; }

int main()
{
    std::vector<decltype(func)*> v;

    v.push_back(add);
    v.push_back(subtract);
    v.push_back(multiply);
    v.push_back(divide);

    for (auto f: v)
        std::cout << f(2, 2) << std::endl;
    return 0;
}
