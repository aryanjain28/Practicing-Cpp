#include <iostream>

using namespace std;

int getIncValue(int x)
{
    return x * 100;
}

int &getIncValue2(int &x)
{
    return x;
}

int main()
{
    int a = 10;
    int &ra = a;

    // ra is just a reference to a, meaning its just an
    // another name for 'a'. Therefore, it has the same
    // value and the same memory address as of a.

    cout << "a: " << a << endl;
    cout << "ra: " << ra << endl;

    cout << "&a: " << &a << endl;
    cout << "&ra: " << &ra << endl;

    // These are also called 'l-value' references.
    // Since we can get the memory associated with these
    // variables.

    a = getIncValue(a);

    cout << "a: " << a << endl;
    cout << "ra: " << ra << endl;

    cout << "&a: " << &a << endl;
    cout << "&ra: " << &ra << endl;

    // Now

    // this is not allowed because '20' is an r-value
    // and we cannot get a reference to an r-value

    // int &r = 20; // error

    // however
    // if there is a const in front, then we are allowed
    // to get ref.

    const int &r = 20;

    cout << "&r: " << &r << endl;

    // this happens because internally C++ creates a temp
    // variable and assign the ref of temp to r.
    // Like this,

    int temp = 20;
    int &x = temp;

    // l-val references returned by function
    // a value returned by a function, by default, is
    // treated as an r-value. Therefore we cannot get
    // a ref to that returned value.
    // For example the below is incorrect and throws error.

    // int &h = getIncValue(10); // r-value, need l-value

    // However, if we make our function return the reference
    // instead of the the regular value.
    // It will be accepted!
    // For example,

    int &h = getIncValue2(a); // accepted! because the fnction returns a ref.

    // There is one more important topic that
    // screwed my mind.

    // Since the above function is just returning a referece
    // to a. That means, the returned value is just another name
    // for 'a'. And also the memory address is the same as 'a'.
    // Therefore wrting like below is valid.

    cout << endl
         << endl;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "h: " << h << endl;
    cout << "&h: " << &h << endl;

    // now,

    getIncValue2(a) = 8888;

    cout << "a: " << a << endl;
    cout << "&a: " << &a << endl;
    cout << "h: " << h << endl;
    cout << "&h: " << &h << endl;
}