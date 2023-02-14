//Namespace "using" definate

#include <iostream>

//Through the follwing using defination, we can use the standard lib's name
using std::cin;
using std::cout; using std::endl;

int main()
{
	cout << "Enter two numbers:" << endl;
	int v1, v2;
	cin >> v1 >> v2;
	cout << "The sum of " << v1 << " and " << v2 
	     <<  " is " << v1 + v2  << endl;

	return 0;
}