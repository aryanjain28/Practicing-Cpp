#include <iostream>

using namespace std;

class Box
{

    int width;
    int height;
    int length;

public:
    void setWidth(int);
    int getWidth();

    void setHeight(int);
    int getHeight();

    void setLength(int);
    int getLength();

    double volume();
};

void Box::setHeight(int h)
{
    height = h;
}

int Box::getHeight()
{
    return height;
}

void Box::setWidth(int w)
{
    width = w;
}

int Box::getWidth()
{
    return width;
}

void Box::setLength(int l)
{
    length = l;
}

int Box::getLength()
{
    return length;
}

double Box::volume()
{
    return length * width * height;
}

bool validate(Box);

int main()
{

    Box box1;
    Box box2;

    box1.setWidth(12);
    box1.setHeight(23);
    box1.setLength(34);

    if (validate(box1))
    {
        cout << "Everthing seems to be working fine!" << endl;
    }
    else
    {
        cout << "Something went wrong!" << endl;
    }

    return 1;
}

bool validate(Box obj)
{
    cout << "Volume: " << obj.volume() << endl;
    return obj.getHeight() * obj.getWidth() * obj.getLength() == obj.volume();
}