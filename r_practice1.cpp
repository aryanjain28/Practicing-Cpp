#include <iostream>

using namespace std;

/*
    POINTERS.

    1. What is a pointer?
    A pointer is an variable that stores
    memory address as its value.
    Thats all it is.

    2. What is a double pointers?
    A pointer that points to the memory address
    of some other pointer, is called a double
    pointer. There can be triple, qudruple... pointers.

*/

int main()
{
    int a = 10;
    int *pointer = &a;

    // pointer now points to the memory address of a.
    // we can access the memory address using pointer.
    // we can access the value using *pointer.

    cout << "Address of a: pointer => " << pointer << endl;
    cout << "Value of a: *pointer => " << *pointer << endl;

    // double pointer -> we need to define double pointer
    // using ** sign.
    int **dPointer = &pointer;
    // this dPointer is now a double pointer,
    // that simply stores the memory address of
    //  the first pointer.

    // dPointer will now store the memory address
    // of the first pointer.
    // the value of the dPointer will be the memory
    // address of a.

    // Therefore, we can access the value of dPointer
    // using **dPointer.

    cout << "dPointer: " << dPointer << endl;
    cout << "*dPointer: " << *dPointer << endl;
    cout << "**dPointer: " << **dPointer << endl;

    // Similarly there can be triple pointers.
    int ***tPointer = &dPointer;

    cout << tPointer << endl;  // mem address of dPointer.
    cout << *tPointer << endl; // dPointer.

    // These are the same.
    cout << "dPointer: " << dPointer << endl;
    cout << "*tPointer: " << *tPointer << endl;

    return 1;
}