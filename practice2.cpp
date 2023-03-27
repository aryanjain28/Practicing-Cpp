#include <iostream>
#include <string>

using namespace std;

union Student
{
    string name;
    int age;
};

int main()
{
    Student s1;
    s1.name = "Aryan";
    s1.age = 25;
}