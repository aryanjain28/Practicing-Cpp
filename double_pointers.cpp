#include <iostream>

using namespace std;

struct Person
{
    string name;
    Person *friend_;
};

void foo()
{
    Person p1;
    Person p2;

    p1.name = "Person 1";
    p1.friend_ = NULL;

    p2.name = "Person 2";
    p2.friend_ = NULL;

    p1.friend_ = &p2;
    p2.friend_ = &p1;

    cout << "Friend of p1: " << p1.friend_->name << endl;
    cout << "Friend of p2: " << p2.friend_->name << endl;

    cout << "Friend of p2: " << p1.friend_->friend_->name << endl;

    // cout << "p" << to_string(p) << endl;
    // cout << "p.pointer: " << p.pointer << endl;
}

int main()
{
    foo();
    return 1;

    int a = 86;
    int *pointer = &a;
    int **doublePointer = &pointer;

    cout << "a=" << a << endl;
    cout << "pointer=" << pointer << endl;
    cout << "*pointer=" << *pointer << endl;
    cout << "double_pointer=" << doublePointer << endl;
    cout << "*double_pointer=" << *doublePointer << endl;
    cout << "**double_pointer=" << **doublePointer << endl;

    int ***triplePointer = &doublePointer;
    cout << "triplePointer=" << triplePointer << endl;
    cout << "*triplePointer=" << *triplePointer << endl;
    cout << "**triplePointer=" << **triplePointer << endl;
    cout << "***triplePointer=" << ***triplePointer << endl;

    int ****quadruplePointer = &triplePointer;
    cout << "quadruplePointer=" << quadruplePointer << endl;
    cout << "*quadruplePointer=" << *quadruplePointer << endl;
    cout << "**quadruplePointer=" << **quadruplePointer << endl;
    cout << "***quadruplePointer=" << ***quadruplePointer << endl;
    cout << "****quadruplePointer=" << ****quadruplePointer << endl;

    return 1;
}