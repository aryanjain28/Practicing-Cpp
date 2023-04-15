#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    // REFERENCES
    // References are just another name for a variable.
    // Once a reference is initialized with a variable,
    // either the variable name or the reference name may be used to refer to the variable.

    int a = 123;
    int &a_ref = a;

    cout << "a: " << a << endl;
    cout << "a_ref: " << a_ref << endl;

    int b = 456;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 1;
}