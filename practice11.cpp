#include <iostream>
#include <string>

using namespace std;

template <typename T>
void swap(T *, T *);

template <typename T>
void swap(T &, T &);

template <typename T>
void print(T val)
{
    cout << "typeid(val): " << typeid(val).name() << endl;
    cout << "val: " << val << endl;
}

int main()
{
    print(12);
    print("aryan");
    print('a');

    string student1 = "Aryan";
    string student2 = "Jain";

    cout << "Before: " << endl;
    cout << "student1: " << student1 << endl;
    cout << "student2: " << student2 << endl;

    // via pointers
    swap(&student1, &student2);

    cout << "\n\n";
    cout << "After: " << endl;
    cout << "student1: " << student1 << endl;
    cout << "student2: " << student2 << endl;

    cout << "Before: " << endl;
    cout << "student1: " << student1 << endl;
    cout << "student2: " << student2 << endl;

    // via reference
    swap(student1, student2);

    cout << "\n\n";
    cout << "After: " << endl;
    cout << "student1: " << student1 << endl;
    cout << "student2: " << student2 << endl;

    return 1;
}

template <typename T>
void swap(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}