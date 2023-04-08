#include <iostream>

using namespace std;

class Person
{
public:
    virtual int getID() { return -1; };
};

class Employee : public Person
{
public:
    Employee(int id_) { id = id_; }
    int getID() { return id; }
    int id;
};

void printId(Person *p) { cout << p->getID() << endl; }

int main()
{
    Person p;
    printId(&p);

    Employee e(100);
    printId(&e);

    return 1;
}