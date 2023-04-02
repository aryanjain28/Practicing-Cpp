#include <iostream>

using namespace std;

void preview(int *arr /*arr[]: Also valid */, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "*(arr + i): " << *(arr + i) << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    preview(arr, sizeof(arr) / sizeof(arr[0]));
    return 1;
}