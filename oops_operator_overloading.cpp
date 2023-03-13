#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length = 0;
    int width = 0;

public:
    void setLength(int);
    void setWidth(int);
    int volume();
    Rectangle operator+(Rectangle &other);
};

void Rectangle::setLength(int l)
{
    this->length = l;
}
void Rectangle::setWidth(int w)
{
    this->width = w;
}
int Rectangle::volume()
{
    return this->width * this->length;
}

Rectangle Rectangle::operator+(Rectangle &other)
{
    Rectangle r3;
    r3.setLength(this->length + other.length);
    r3.setWidth(this->width + other.width);

    return r3;
}

int main()
{
    Rectangle r1;
    r1.setLength(10);
    r1.setWidth(5);

    Rectangle r2;
    r2.setLength(20);
    r2.setWidth(10);

    cout << "Vol1: " << r1.volume() << endl;
    cout << "Vol2: " << r2.volume() << endl;

    Rectangle r3 = r1 + r2;
    cout << r3.volume() << endl;

    return 1;
}