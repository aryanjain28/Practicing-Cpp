
#include <iostream>

using namespace std;

void swap(int *p, int *q);
void swap(int &p, int &q);

int main()
{
    int var1;
    char var2[10];

    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;

    // What is a pointer ?
    // A  pointer is a variable that stores the address
    // of some other variable;

    int *i_pointer;
    double *d_pointer;
    float *f_pointer;
    char *c_pointer;

    int a = 20;
    int *mPointer;

    mPointer = &a;

    cout << "\n\n";
    // cout << "Adress of a: " << mPointer << endl;
    // cout << "Value of a: " << *mPointer << endl;

    // a = 100;
    int b = 200;

    cout << "\nBefore swapping: "
         << "A: " << a << " B: " << b;

    // swap(&a, &b);
    swap(a, b);

    cout << "\nAfter swapping: "
         << "A: " << a << " B: " << b;

    return 1;
}

// call by pointer
void swap(int *pointer1, int *pointer2)
{
    int temp;
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
    return;
}

// call by reference :: wont create a copy
// &param1 -> here '&' tells the compiler that reference is shared.
void swap(int &address1, int &address2)
{
    // here address1 and address 2
    // are not copies of a and b.
    // They are 'actually' a and b;
    int temp;
    temp = address1;
    address1 = address2;
    address2 = temp;

    return;
}