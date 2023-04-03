#include <iostream>

using namespace std;

// template <typename T, size_t n>
// void swap(T (&a)[n], T (&b)[n]);

// template <typename T, size_t n>
// void print(T (&)[n]);

// template <typename T, size_t n>
// void print(T (&)[4], T (&)[2]);

// template <typename T>
// void swap(T (&arr1)[4], T (&arr2)[2])
// {
//     T(&temp) = arr1;
//     arr1 = arr2;
//     arr2 = temp;
// }

template <typename T>
void print(T (&arr1)[4], T (&arr2)[2])
{
    cout << "HERE" << endl;

    cout << "arr1: ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr1[i] << " - ";
    }
    cout << endl;

    cout << "arr2: ";
    for (int i = 0; i < 2; i++)
    {
        cout << arr2[i] << " - ";
    }
    cout << endl;
}

// template <typename T, size_t n>
// void print(T (&arr)[n])
// {
//     size_t size = sizeof(arr) / sizeof(T);
//     for (size_t i = 0; i < size; i++)
//     {
//         cout << "arr[" << i << "]:" << arr[i] << " ";
//     }
//     cout << endl;
// }

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {11, 12};

    cout << "BEFORE: " << endl;
    cout << "Arr1: " << endl;
    cout << "Arr2: " << endl;

    print(arr1, arr2);

    // print(arr2);

    // swap(arr1, arr2);

    // cout << "\n\nAFTER: " << endl;
    // cout << "Arr1: " << endl;
    // print(arr1);
    // cout << "Arr2: " << endl;
    // print(arr2);

    return 1;
}

// template <typename T, size_t n>
// void print(T (&arr)[4], T (&arr1)[2])
// {
//     size_t size = sizeof(arr) / sizeof(T);
//     for (size_t i = 0; i < size; i++)
//     {
//         cout << "arr[" << i << "]:" << arr[i] << " ";
//     }
//     cout << endl;
// }