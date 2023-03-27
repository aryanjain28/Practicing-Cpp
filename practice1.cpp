#include <iostream>
#include <string>

using namespace std;

/**
 *
 * Diffrerences between a struct and a class.
 *
 * 1. Default access for class - private; for struct - public.
 * 2. No inheriance in struct.
 * 3. Struct basically for user-defined datatype; Class is for encapsulation and OOPS.
 *
 */

struct Student
{
    string name;
    int age;
    Student *frnd;
};

int main()
{
    Student s1;
    Student s2;
    Student s3;

    s1.name = "Aryan";
    s1.age = 25;
    s1.frnd = NULL;

    s2.name = "Josh";
    s2.age = 23;
    s2.frnd = &s1;

    cout << "Structures" << endl;

    cout << s1.name << endl;
    cout << s1.age << endl;
    if (s1.frnd != NULL)
    {
        cout << "Friend: " << s1.frnd->name << endl; // error because s1 has NULL friends.
    }
    else
    {
        cout << s1.name << " has no friends." << endl;
    }

    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.frnd->name << endl; // Josh has one friend - Aryan (s1)

    return 1;
}