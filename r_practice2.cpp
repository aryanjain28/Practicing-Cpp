#include <iostream>

using namespace std;

template <typename T>
size_t getWrongArrSize(T arr[])
{
    return sizeof(arr);
}

template <typename T, size_t n>
int getCorrectArrSize(T (&arr)[n])
{
    return sizeof(arr);
}

template <typename T, size_t n>
void print(T (&arr)[n])
{
    size_t size = getCorrectArrSize(arr);
    for (size_t i = 0; i < size / sizeof(arr[0]); i++)
    {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }
}

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

    // Furthermore, there's one interesting thing I notice.

    cout << "sizeof(arr): " << sizeof(arr) << endl;                   // 20 (4[int] * 5[len])
    cout << "getWrongArrSize(arr): " << getWrongArrSize(arr) << endl; // 8 {WRONGGGGG!!! SO WRONG! OMG!}

    // But why?
    // the above function simply returns the size of the pointer.
    // as described above 'arr' is just a pointer. Therefore,
    // the 8 it returned is just a pointer size.

    // Solution?
    // Sending as arr-reference;
    // SYNTAX: (&arr)[];
    // Yeah I know!

    // Now
    cout << "arr : " << arr << endl;
    cout << "getCorrectArrSize(arr): " << getCorrectArrSize(arr) << endl; // 20 Correct!

    cout << "\n\nINT ARR: " << endl;
    int i_arr[] = {52, 6, 45, 64, 6756};
    print(i_arr);

    cout << "\nSRING ARR: " << endl;
    string s_arr[] = {"asd", "saf", "345", "name"};
    print(s_arr);

    return 1;
}