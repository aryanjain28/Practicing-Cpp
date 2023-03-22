#include <iostream>
#include <algorithm>

using namespace std;

void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "-";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5, 7, 1, 4, 8, 22, 4};
    int size = sizeof(arr) / sizeof(int);

    // returns the pointer
    cout << "MAX: " << *max_element(begin(arr), end(arr)) << endl;

    cout << "Before: ";
    print(arr, size);

    reverse(begin(arr), end(arr));

    cout << "After: ";
    print(arr, size);

    reverse(begin(arr), end(arr));

    sort(begin(arr), end(arr));

    cout << "Before: ";
    print(arr, size);

    reverse(begin(arr), end(arr));
    cout << "After: ";
    print(arr, size);
}