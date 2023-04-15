#include <iostream>

using namespace std;

int &setValue(int a[], int index)
{
    return a[index];
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {53, 123, 64, 16, 23};

    print(a, 5);
    setValue(a, 0) = 35;
    print(a, 5);
}