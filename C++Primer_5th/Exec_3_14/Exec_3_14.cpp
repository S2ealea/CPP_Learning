//Exec 3.14
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
    int i;
    vector<int> v1;

    while ( cin >> i)
    {
    	v1.push_back(i);
    }

    //print the vector element
    for (auto k : v1)
    {
    	cout << k << endl;
    }

	return 0;
}