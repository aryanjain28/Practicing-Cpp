#include <iostream>

using namespace std;

void swap(int *pointer1, int *pointer2);
void nullPointer();
void pointerMath();
void pointerComp();
void arrAndPointer();

int main()
{
    int a = 10;
    int b = 20;
    int *pointer;

    // pointer = &a;
    *pointer = a;

    cout << "Address of a: " << pointer << " Value of a: " << *pointer << endl;

    cout << "Before Swap-> A: " << a << " B: " << b << endl;
    swap(&a, &b);
    cout << "After swap-> A: " << a << " B: " << b << endl;

    nullPointer();
    pointerMath();
    pointerComp();
    arrAndPointer();

    return 1;
}

void arrAndPointer()
{
    float fArr[] = {12.5, 34.6, 57.12};
    float *pointer;
    pointer = fArr;
    for (int i = 0; i < 3; i++)
    {
        *pointer = (i + 1) * 20;
        pointer++; // allowed
        // fArr++;   // not allowed:: Difference between pointer and arr
    }

    pointer = fArr;
    for (int i = 0; i < 3; i++)
    {
        cout << "Via index: " << fArr[i] << endl;
        cout << "Via pointer: " << *(pointer + i) << endl;
    }
}

void pointerComp()
{
    int mArr[] = {10, 20, 30};
    int *pointer;
    pointer = mArr;

    while (pointer <= &mArr[2])
    {
        cout << "Address: " << pointer << endl;
        cout << "Current value: " << *pointer << endl;
        cout << endl;
        pointer++;
    }
}

void pointerMath()
{

    // There are four arithmetic operations that can be
    // perform on  a pointer.
    // ++ -- + -

    // ++ or -- will move the pointer forward or backward,
    // based on the size of type definition

    int arr[3] = {10, 20, 30};
    int *pointer;
    pointer = arr;

    for (int i = 0; i < 3; i++)
    {
        cout << "Address: " << pointer << endl;
        cout << "Value: " << *pointer << endl;
        pointer++;
    }

    char name[] = "Aryan";
    char *pointerC;
    pointerC = name;

    cout << endl;
    cout << "Add: " << pointerC << " Char at 0: " << *pointerC << endl;
    pointerC++;
    cout << "Add: " << pointerC << " Char at 1: " << *pointerC << endl;
    pointerC++;
    pointerC++;
    pointerC++;
    pointerC++;
    pointerC++;
    cout << "Add: " << pointerC << " Char at -: " << *pointerC << endl;
}

void nullPointer()
{
    int *pointer;
    pointer = NULL;

    cout << "Pointer will point at: " << pointer << endl;

    // Fails.
    // cout << "The value at pointer: " << *pointer << endl;
    return;
}

void swap(int *pointer1, int *pointer2)
{
    int temp;
    temp = *pointer1;
    *pointer1 = *pointer2;
    *pointer2 = temp;
}
