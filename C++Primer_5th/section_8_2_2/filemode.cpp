#include <iostream>
#include <fstream>

using std::ofstream;

int main(int argc, char **argv)
{
    ofstream out("file", ofstream::app);

    return 0;
}
