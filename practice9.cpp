#include <iostream>
#include <memory>
#include <string>

using namespace std;

struct Student
{
    string fName;
    string lName;
    string getFullName();
};

string Student::getFullName()
{
    return fName + " " + lName;
}

int main()
{
    unique_ptr<int> pointer = make_unique<int>(25);

    Student student;

    student.fName = "Aryan";
    student.lName = "Jain";

    string fullName = student.getFullName();

    cout << "Full Name: " << fullName << endl;

    // Arrays

    int arr[] = {11, 12, 13, 14, 15, 16};
    int arrSize = sizeof(arr) / sizeof(int);

    cout << "sizeof(arr): " << sizeof(arr) << endl;
    cout << "sizeof(int) " << sizeof(int) << endl;
    cout << "sizeof(arr[0])" << sizeof(arr[0]) << endl;

    cout << "Arr size: " << arrSize << endl;

    cout << "\n\nAddresses : " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << "arr + " << i << " : " << (arr + i) << endl; // consecutive memory addresses.
    }

    cout << "\n\nValues : " << endl;
    for (int i = 0; i < arrSize; i++)
    {
        cout << "*(arr + " << i << ") : " << *(arr + i) << endl;
    }

    return 1;
}