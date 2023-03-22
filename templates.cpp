#include <iostream>

using namespace std;

template <typename T>
void print(T arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "-";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 46, 7, 87, 8};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);

    return 1;
}