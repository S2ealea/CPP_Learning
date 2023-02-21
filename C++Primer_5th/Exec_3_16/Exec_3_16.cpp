//Exec 3.16
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char *argv[])
{


    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10,42);
    vector<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vector<string> v7{10, "hi"};

    cout << "v1's size is :" << v1.size() << endl;
    cout << "v2's size is : " << v2.size() << endl;
    cout << "v3's size is : " << v3.size() << endl;
    cout << "v4's size is : " << v4.size() << endl;
    cout << "v5's size is : " << v5.size() << endl;
    cout << "v6's size is : " << v6.size() << endl;
    cout << "v7's size is : " << v7.size() << endl;

    for (auto i : v1)
    {
    	cout << " v1 " <<  i << endl;
    }
    cout << endl;


    for (auto i : v2)
    {
    	cout << " v2 " <<  i << endl;
    }
    cout << endl;


    for (auto i : v3)
    {
    	cout << " v3 " <<  i << endl;
    }
    cout << endl;


    for (auto i : v4)
    {
    	cout << " v4 " <<  i << endl;
    }
    cout << endl;


    for (auto i : v5)
    {
    	cout << " v5 " <<  i << endl;
    }
    cout << endl;


    for (auto i : v6)
    {
    	cout << " v6 " <<  i << endl;
    }
    cout << endl;


    for (auto i : v7)
    {
    	cout << " v7 " <<  i << endl;
    }
    cout << endl;

	return 0;
}