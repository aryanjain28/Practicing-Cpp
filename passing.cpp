#include <iostream>

using namespace std;

void passByRef(int &ref1, int &ref2);
void passByPointer(int *pointer1, int *pointer2);
int sum(int, int b = 1);

int main()
{

    int a = 100;
    int b = 200;

    // cout << "Pass By ref: " << endl;
    // cout << "Before swap: " << endl;
    // cout << "A: " << a << " B: " << b << endl;
    // passByRef(a, b);
    // cout << "After swap: " << endl;
    // cout << "A: " << a << " B: " << b << endl;

    // cout << "Pass By pointer: " << endl;
    // cout << "Before swap: " << endl;
    // cout << "A: " << a << " B: " << b << endl;
    // passByPointer(&a, &b);
    // cout << "After swap: " << endl;
    // cout << "A: " << a << " B: " << b << endl;

    cout << sum(2, 7) << endl;

    return 1;
}

int sum(int a, int b)
{
    return a + b;
}

void passByPointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void passByRef(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return;
}