#include <iostream>

using namespace std;

class Student
{
public:
    string fName;
    string lName;
    int age;
    int marks;

    void setFName(string);
    void setLName(string);
    void setMarks(int);
    void setAge(int);

    void preview();
};

void Student::setAge(int a)
{
    age = a;
}

void Student::setFName(string firstName)
{
    fName = firstName;
}

void Student::setLName(string lastName)
{
    lName = lastName;
}

void Student::setMarks(int m)
{
    marks = m;
}

void Student::preview()
{
    cout << "Student details: " << endl;
    cout << "Name: " << fName + " " + lName << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    Student student1;
    Student student2;

    student1.setFName("Josh");
    student1.setLName("Wells");
    student1.setAge(12);
    student1.setMarks(100);

    // student1.fName = ;
    // student1.lName = "Burger";
    // student1.age = 12;
    // student1.marks = 99;

    // student2.fName = "John";
    // student2.lName = "Wells";
    // student2.marks = 98;

    student1.preview();

    return 1;
}