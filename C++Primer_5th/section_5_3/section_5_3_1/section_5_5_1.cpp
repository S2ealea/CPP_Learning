//section 5.3.1

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
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
	string lettergrade;
	unsigned grade;

	//Input the grade
	cout << "Please input the grade:" << endl;
	cin >> grade;

	if (grade < 60)
		lettergrade = scores[0];
	else
	{
		lettergrade = scores[(grade - 50)/10];
		if (grade % 10 > 7)
			lettergrade += '+';
		else if (grade % 10 < 3)
			lettergrade += '-';
	}


	cout << "grade is :" << lettergrade << endl;

	return 0;
}