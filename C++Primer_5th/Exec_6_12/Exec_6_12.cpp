//Using the reference formal parameter to
//exchange the two integer's value
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void exchange(int &ip, int &kp)
{
    int tmp = ip;
    ip = kp;
    kp = tmp;
}

int main(int argc, char *argv[])
{
    int x = 20;
    int y = 100;

    cout << "[Before exchange] The two values are:" << x << " " << y << endl;
    exchange(x, y);
    cout << "[After exchange] The two values are:" << x << " " << y << endl;

    return 0;
}

