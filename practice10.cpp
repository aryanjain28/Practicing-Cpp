#include <iostream>
#include <string>

using namespace std;

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

int main()
{
    int arr_i[] = {1, 2, 3, 4, 5};
    char arr_c[] = {'A', 'R', 'Y', 'A', 'N'};

    preview(arr_c, "name1");
    preview(arr_i, "name22");

    return 1;
}