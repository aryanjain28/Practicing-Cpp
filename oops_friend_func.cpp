#include <iostream>

using namespace std;

class Box
{
private:
    double width;

public:
    friend void print(Box box);
    void setWidth(double w);
};

void Box::setWidth(double w)
{
    width = w;
}

void print(Box box)
{
    cout << "Width: " << box.width << endl;
}

int main()
{
    Box box;
    box.setWidth(123.456);
    print(box);
    return 1;
}