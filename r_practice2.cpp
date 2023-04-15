#include <iostream>

using namespace std;

int main()
{
    // Another interesting thing between arr and
    // pointers.
    // the variable used for array is just a pointer
    // to the first element in that array.

    // for eg.

    int arr[] = {14, 34, 56, 6, 42};

    // here 'arr' is just another pointer; that points to
    // the first element's address, that is, 1.
    // its similar to=> int *arr = &temp; { temp = 14; }

    // therefore,

    cout << (arr[0] == *arr) << endl;       // true: 14
    cout << (arr[1] == *(arr + 1)) << endl; // true: 34

    // we can do *(arr + 1), because the memory is
    // consecutive in case of an array.

    cout << "Memory address of 14: " << arr << endl;
    cout << "Memory address of 34: " << (arr + 1) << endl;

    return 1;
}