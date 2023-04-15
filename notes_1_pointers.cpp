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

    // Pointers can only store memory address.
    // It gives address if we try to set it to something
    // else.

    // int *pointer = 12; // int cannot be used to refer *int

    // the datatype used with pointer describes the
    // datatype of the value for which the pointer is
    // storing the address.

    // therefore the following are valid:

    string str = "Aryan Jain";
    string *pointer_s = &str;

    cout << "string Mem: " << pointer_s << endl;
    cout << "string Val: " << *pointer_s << endl;

    char c = 'a';
    char *pointer_c = &c;

    cout << "char Mem: " << pointer_c << endl;
    cout << "char Val: " << *pointer_c << endl;

    float f = 3.17238457236594;
    float *pointer_f = &f;

    cout << "float Mem: " << pointer_f << endl;
    cout << "float Val: " << *pointer_f << endl;

    double d = 3.17238457236594;
    double *pointer_d = &d;

    cout << "double Mem: " << pointer_d << endl;
    cout << "double Val: " << *pointer_d << endl;

    return 1;
}