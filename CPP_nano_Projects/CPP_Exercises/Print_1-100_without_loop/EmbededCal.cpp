#include <iostream>

int a(int n) {
    std::cout << n++ << std::endl;
    return n;
}

int b(int n) { return a(a(a(a(a(n))))); }

int c(int n) { return b(b(b(b(b(n))))); }

int main() {
    c(c(c(c(1))));
    return 0;
}
