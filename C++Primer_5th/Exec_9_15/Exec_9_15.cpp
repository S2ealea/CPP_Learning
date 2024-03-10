// Compare the two vector<int> is equal.
#include <iostream>
#include <vector>

int main()
{
std::vector<int> vec1{1, 2, 3, 4, 5};
std::vector<int> vec2{1, 2, 3, 4, 5};
std::vector<int> vec3{1, 3, 5};

std::cout<<"vec1 equal to vec2 is:" << (vec1 == vec2 ? "true" : "false") << std::endl;
std::cout <<"vec1 equal to vec3 is :" << (vec1 == vec3 ? "true" : "false") << std::endl;

return 0;
}
