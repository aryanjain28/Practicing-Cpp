#include <iostream>

using namespace std;

class MyClass
{
public:
    MyClass();
    ~MyClass();
};

MyClass::MyClass()
{
    cout << "This is a constructor!" << endl;
}

MyClass::~MyClass()
{

    cout << "This is a destructor!" << endl;
}

int main()
{
    MyClass obj;
    return 1;
}