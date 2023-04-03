#include <iostream>
#include <string>

using namespace std;

// passing arr via ref - This is the syntax for
// passing arr via reference.

// (&arr)[n] tells the compiler that we want to
// reference an array.

template <typename T, typename S, size_t n>
void preview(T (&arr)[n], S name)
{
    int length = sizeof(arr) / sizeof(T);

    cout << endl;
    cout << "sizeof(arr) : " << sizeof(arr) << endl;
    cout << "sizeof(T) : " << sizeof(T) << endl;
    cout << "LEN: " << length << endl;

    for (int i = 0; i < length; i++)
    {
        cout << "*(arr + i): " << *(arr + i)
             << " | "
             << "arr[" << i << "]: " << arr[i]
             << " " << name << endl;
    }
}

//  if "size" is not important.
template <typename T>
void preview2(T *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: " << arr[i] << endl;
    }

    cout << endl;
}

int main()
{
    int arr_i[] = {1, 2, 3, 4, 5};
    char arr_c[] = {'A', 'R', 'Y', 'A', 'N'};

    preview(arr_c, "name1");
    preview(arr_i, "name22");

    preview2(arr_c, sizeof(arr_c) / sizeof(arr_c[0]));
    preview2(arr_i, sizeof(arr_i) / sizeof(arr_i[0]));

    return 1;
}