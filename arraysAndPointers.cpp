#include <iostream>

using namespace std;

void incrementBy10(int *arrPointer, int size);
void incrementBy100(int *mArr, int size);
int *multiplyBy100(int *mArr, int size);
void preview(int mArr[], int size);
void preview2(int *mArr, int size);

int main()
{

    // In CPP, the name of the array is basically a
    // pointer that stores the memory location of the
    // first element of the array;
    // Therefore,

    int mArr[] = {10, 20, 30, 40, 50};
    // here, 'mArr' is a pointer to 10 (mArr[0])

    int *pointer;

    pointer = mArr;

    // cout << "Value of 0th element: " << *pointer << endl;
    // cout << "Value of 1st element: " << *(pointer + 1) << endl;

    int length = sizeof(mArr) / sizeof(int);
    incrementBy100(mArr, length);
    int *nArr;
    nArr = multiplyBy100(mArr, length);
    preview2(nArr, length);

    return 1;
}

void incrementBy10(int mArr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        mArr[i] += 10;
    }
}

void incrementBy100(int *mArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(mArr + i) += 100;
    }
}

// If we want out function to return an arr.
// Then the function should return a pointer of that arr.
// Also, C++ will not allow the address of the variable
// to be shared among other functions, therefore, we need to
// use 'static'.
int *multiplyBy100(int *mArr, int size)
{
    static int nArr[5];
    for (int i = 0; i < size; i++)
    {
        nArr[i] = *(mArr + i) * 100;
    }
    return nArr;
}

void preview(int mArr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << mArr[i] << endl;
    }
}

void preview2(int *mArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(mArr + i) << endl;
    }
}