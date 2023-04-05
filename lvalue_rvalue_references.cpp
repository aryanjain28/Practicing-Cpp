#include <iostream>

using namespace std;

void swap(int &, int &);
double &valueAtIndex(double arr[], int i);
double valueAtIndex2(double arr[], int i);
int &getValue(int &);

void printArr(double arr[], int size);

int main()
{
    int a = 10;
    int b = 20;

    swap(a, b);

    cout << "(a,b):" << a << "," << b << endl;

    double arr[] = {11.12, 23.43, 621.54, 54.893, 23.52};

    printArr(arr, 5);

    double *d = &valueAtIndex(arr, 0); // equivalue to - *p

    cout << "address D: " << d << endl;
    cout << "value *D: " << *d << endl;

    // Since reference is nothing but an
    // alias(synonym) of another variable,
    // the address never changes.

    int p = 1900;
    int &q = getValue(p);

    cout << "p: " << p << endl;
    cout << "addr of p:" << &p << endl;
    cout << "q: " << q << endl;
    cout << "addr of q:" << &q << endl;

    // since the function just returns a ref to
    // p (ref is just another name) therefore,
    // we can even set the new value.
    getValue(p) = 2500;

    cout << "After: " << endl;

    cout << "p: " << p << endl;
    cout << "addr of p:" << &p << endl;

    cout << "q: " << q << endl;
    cout << "addr of q:" << &q << endl;

    return 1;
}

// returns a reference of variable
int &getValue(int &x)
{
    return x;
}

double &valueAtIndex(double arr[], int i)
{
    return arr[i];
}

double valueAtIndex2(double arr[], int i)
{
    return arr[i];
}

void printArr(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "]: " << arr[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}