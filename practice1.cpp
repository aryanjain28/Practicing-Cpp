#include <iostream>
#include <string>

using namespace std;

struct Student
{
    string name;
    int age;
};

int main()
{
    Student s1;
    Student s2;
    Student s3;

    cout << "Structures" << endl;

    cout << s1.name << endl;
    cout << s1.age << endl;

    cout << s2.name << endl;
    cout << s2.age << endl;

    cout << s3.name << endl;
    cout << s3.age << endl;

    return 1;
}