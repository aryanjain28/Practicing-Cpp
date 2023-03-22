#include <iostream>
#include <algorithm>

using namespace std;

// C++ STL (Standard Template Library) is a powerful set
// of C++ template classes to provide general-purpose classes
// and functions with templates that implement many popular
// and commonly used algorithms and data structures like
// vectors, lists, queues, and stacks.

// STL has: Containers. Algorithms. Iterators.

void print(int arr[], int size)
{
    for (int i; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {3, 5, 8, 2, 4};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);

    sort(arr, arr + size);

    print(arr, size);

    return 1;
}