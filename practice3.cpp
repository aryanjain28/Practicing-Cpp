#include <iostream>

using namespace std;

int main()
{
    // double pointers. -> pointers, that point to "other" pointers.

    int a = 10;

    int *pointer_a = &a;            // single pointer - stores the address of a.
    int *pointer_b = &(*pointer_a); // single pointer - still stores the address of a

    cout << "A value: " << *pointer_a << endl;
    cout << "A address: " << pointer_a << endl;

    cout << "A value: " << *pointer_b << endl;
    cout << "A address: " << pointer_b << endl;

    // Now,
    int **pointer_c = &pointer_a;
    cout << "Pointer-C value: " << *pointer_c << endl;  // access address
    cout << "Pointer-C value: " << **pointer_c << endl; // access value (inside Pointer-a)
    cout << "Pointer-C address: " << pointer_c << endl;

    // similarly there can be triple pointers, qudruple pointers.
}