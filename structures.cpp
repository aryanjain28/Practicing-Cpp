#include <iostream>

using namespace std;

void preview(struct Student student);

struct Student
{
    string fName = "";
    string lName = "";
    int age = -1;
    int roll;
    void listOfSubj();
    string getDetails();
    string subjects[3];
    string getFullName(string f, string l)
    {
        return f + " " + l;
    };

} student, student1, student2;

string Student::getDetails()
{
    string age_stringified = to_string(age);
    string roll_stringified = to_string(roll);
    return fName + "-" +
           lName + "-" +
           roll_stringified + "-" +
           age_stringified;
}

void Student::listOfSubj()
{
    for (int i = 0; i < 3; i++)
    {
        cout << subjects[i] << " :: ";
    }
}

int main()
{

    // struct Student student1;
    // struct Student student2;

    student1.fName = "Aryan";
    student1.lName = "Jain";
    student1.age = 24;
    student1.roll = 161;
    // student1.subjects->append("Math");
    // student1.subjects->append("English");
    // student1.subjects->append("Science");

    student2.fName = "John";
    student2.lName = "Hopkins";
    student2.age = 51;
    student2.roll = 162;
    student2.subjects[0] = "Hindi";
    student2.subjects[1] = "Biology";
    student2.subjects[2] = "Social Science";

    // std::cout << "Student: " << student.fName << "-" << student.roll << endl;
    // std::cout << "Student: " << student1.fName << "-" << student1.roll << endl;
    // std::cout << "Student: " << student2.fName << "-" << student2.roll << endl;

    preview(student2);
    // preview(student);

    return 1;
}

void preview(struct Student student)
{
    cout << "Student Data: " << endl;
    cout << "Name: " << student.getFullName(student.fName + "-", student.lName + "-") << endl;
    cout << "Age: " << student.age << endl;
    cout << "Roll: " << student.roll << endl;
    cout << "Details: " << student.getDetails() << endl;
    cout << "Subjects: ";
    student.listOfSubj();
    return;
}
