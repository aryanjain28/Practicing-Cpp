#include <iostream>

using namespace std;

int &getValue(int &);

int main()
{

    int a = 1500;

    // the function returns a ref to a
    // ref is just another name for the
    // same variable, in this case 'a'.
    int &ra = getValue(a);

    cout << "a: " << a << endl;
    cout << "ra: " << ra << endl;

    cout << "&a: " << &a << endl;
    cout << "&ra: " << &ra << endl;

    cout << "Changing values via ra: " << endl;

    ra = 15;

    cout << "a: " << a << endl;
    cout << "ra: " << ra << endl;

    cout << "&a: " << &a << endl;
    cout << "&ra: " << &ra << endl;

    cout << "Changing values via function: " << endl;

    getValue(ra) = 5600;

    cout << "a: " << a << endl;
    cout << "ra: " << ra << endl;

    cout << "&a: " << &a << endl;
    cout << "&ra: " << &ra << endl;

    return 1;
}

// a function that returns reference
int &getValue(int &a)
{
    return a;
}