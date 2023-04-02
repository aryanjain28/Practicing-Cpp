#include <iostream>
#include <memory>
#include <string>

using namespace std;

struct Student
{
    string fName;
    string lName;
    int age;
    int roll;
    // Student partner; // Not allowed; Think about this-> You'd end up with a case of infinite recursion.
    Student *partner;
};

string getFullName(Student *student)
{
    return student->fName + " " + student->lName;
}

void preview(Student student)
{
    cout << "Full name: " << getFullName(&student) << endl;
    cout << "Age: " << student.age << endl;
    cout << "Roll: " << student.roll << endl;
    cout << "Project partner: " << getFullName(student.partner) << endl;
}

int main()
{
    Student s1, s2;

    s1.age = 12;
    s1.fName = "Aryan";
    s1.lName = "Jain";
    s1.roll = 435876;
    s1.partner = &s2;

    s2.age = 11;
    s2.fName = "John";
    s2.lName = "Williams";
    s2.roll = s1.roll + 1;
    s2.partner = &s1;

    preview(s1);
    cout << endl;
    preview(s2);

    return 1;
}