#include <iostream>

using namespace std;

class Line
{
private:
    int *ptr;

public:
    Line(int);             // constructor
    Line(const Line &obj); // copy constructor
    int getLength();
};

// Normal constructor
Line::Line(int length)
{
    ptr = &length;
}

// copy constructor
Line::Line(const Line &obj)
{
    cout << "Inside copy constructor!" << endl;

    // ptr = obj.ptr;

    // cout << "EEE: " << getLength() << endl;

    // doing nothing - Will throw error
    // ptr = new int;
    // *ptr = *obj.ptr;
}

int Line::getLength()
{
    return *ptr;
}

Line display(Line obj)
{
    return NULL;
    // return obj.getLength();
}

int main()
{
    // Ways to create an obj
    // Line line = Line(10); // 1
    Line line(10); // 2
    display(line);
    cout << "The length of line is : " << line.getLength() << endl;
    // Line lineCpy = line;
    // cout << "The length of copied line is : " << lineCpy.getLength() << endl;

    // line.setLength(100);
    // cout << "The updated length of line is : " << line.getLength() << endl;
    // cout << "The updated length of copied line is : " << lineCpy.getLength() << endl;

    // lineCpy.setLength(25);
    // cout << "The updated length of line is : " << line.getLength() << endl;
    // cout << "The updated length of copied line is : " << lineCpy.getLength() << endl;

    return 1;
}