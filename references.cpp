#include <iostream>

using namespace std;

int main()
{
    // Diff between pointer and ref.

    // 1. You cannot have NULL references.
    // You must always be able to assume that a reference
    // is connected to a legitimate piece of storage.

    // 2. Once a reference is initialized to an object,
    // it cannot be changed to refer to another object.
    // Pointers can be pointed to another object at any time.

    // 3. A reference must be initialized when it is created.
    // Pointers can be initialized at any time.return 1;

    int i = 51;
    // int &r; // error
    int &r = i;

    cout << "Value: " << i << endl;
    cout << "Address: " << &i << endl;
    cout << endl;

    cout << "Value: " << r << endl;
    cout << "Address: " << &r << endl;
}