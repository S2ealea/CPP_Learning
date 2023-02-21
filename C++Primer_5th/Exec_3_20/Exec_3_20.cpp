//Exec 3.20
#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main(int argc, char *argv[])
{

	int i;
	vector<int> v;

	//read a set of integet
	while (cin >> i)
	{
		v.push_back(i);
	}


	//print the vector on demand
	#if 0
	//1.print the neighbo-two integer's addition
	for (unsigned int i = 0 ; i < v.size(); ++i)
	{
		cout << v[i] + v[i+1] << endl;
	}
	#endif


	//2.print the two integer's addition which head-tail symmetrical
	for (unsigned int i = 0 ; i < (v.size())/2; ++i)
	{
		cout << v[i] + v[v.size() - 1 -i] << endl;
	}

	return 0;
}