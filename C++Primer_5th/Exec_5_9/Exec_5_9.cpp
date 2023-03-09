//Exec 5.9
//using if statement to summary the text's vowel
// read from cin 

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main(int argc, char *argv[])
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (cin >> ch)
	{
		if (ch == 'a') ++aCnt;
		else if (ch == 'e') ++eCnt;
		else if (ch == 'i') ++iCnt;
		else if (ch == 'o') ++oCnt;
		else if (ch == 'u') ++uCnt;
	}

	cout << "Number of vowel a: \t" << aCnt << '\n'
	     << "Number of vowel e: \t" << eCnt << '\n'
	     << "Number of vowel i: \t" << iCnt << '\n'
	     << "Number of vowel o: \t" << oCnt << '\n'
	     << "Number of vowel u: \t" << uCnt << endl;


	return 0;
}