//Section 3.3 
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main(int argc, char* argv[])
{
    #if 0
    //section 3.3.2 add element into vector
    vector<int> v2;
    for (int i = 0; i != 100; ++i)
    {
    	v2.push_back(i);
    }

    //after the addition operation, print the element
    for (auto i : v2)
    {
    	cout << i << endl;
    }
    #endif

    #if 0
    //section 3.3.2 read the input from stdin
    //then store them as the vector element
    string word;
    vector<string> text;
    while (cin >> word) 
    {
    	text.push_back(word);
    }

    //print the pushed words
    for (auto i : text)
    {
    	cout << i << endl;
    }
    #endif

    #if 1
    //section 3.3.2
    //calculate vector object's index
    //take 10 points as a grade segment 
    //to summary the scores: 0-9,10-19,20-29,
    //30-39,40-49,50-59,60-69,70-79,80-89,90-99,100
    vector<unsigned> scores(11,0);    //vector with 11 element
    unsigned grade;

    //read the scores
    while (cin >> grade)
    {
    	if (grade <= 100)
    		++scores[grade/10];
    }

    //print the socres
    for (auto i : scores)
    {
    	cout << i << endl;
    }
    #endif 
	return 0;
}