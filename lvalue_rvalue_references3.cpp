#include <iostream>

using namespace std;

int main()
{
    int a = 15;
    int b = 25;

    // l-val reference. Meaning,
    // a and b are l-values and
    // we are referrring to it.
    int &ra = a;
    int &rb = b;

    // What about r-value reference?

    // ERROR: initial value of reference to non-const
    //  must be an lvalue

    // int &rx = 15; // error

    // However, there was something added after
    // C++11. That is, "r=value reference".
    // Using &&

    int &&rx = 15; // no error
    int &ry = rx;

    cout << "&rx: " << &rx << endl;
    cout << "rx: " << rx << endl;

    ry = 141234;

    cout << "&rx: " << &rx << endl;
    cout << "rx: " << rx << endl;

    return 1;
}
