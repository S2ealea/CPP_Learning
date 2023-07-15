//Exercise 6.30
//str_subrange

#include <iostream>
#include <string>
using std::string;

bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size())
        return str1 == str2;

    auto size = (str1.size() < str2.size() )
                ? str1.size() : str2.size();

    for (decltype(size) i = 0; i != size; ++i) {
        if (str1[i] != str2[i])
            return;  // Error1: without return value and the compiler will report this error.
    }
    // Error2: The control flow may terminate the function without any return.
    // The compiler may lose to discovery this error.
}

int main()
{
    str_subrange("string1" , "stringstring2");
    return 0;
}
