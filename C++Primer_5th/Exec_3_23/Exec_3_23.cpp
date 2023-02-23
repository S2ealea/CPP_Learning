//Exec 3.23
//Change the vector element to double

#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main(int argc, char *argv[])
{
    //construct a vector
    vector<int> v;
    for (int i = 0; i != 10; ++i)
    {
    	v.push_back(i);
    }


    //print the constructed vector
    cout << "Before doubled " << endl;
    for (int i = 0; i != 10; ++i)
    {
    	cout << v[i] << endl;
    }


    //use the iterator double the vector elements
    for (auto it = v.begin(); it != v.end(); ++it)
    {
    	*it = *it * 2;
    }

           
    //print the doubled vector
    cout << "After doubled " << endl;
    for (int i = 0; i != 10; ++i)
    {
    	cout << v[i] << endl;
    }

	return 0;
}