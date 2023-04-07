#include <iostream>

using namespace std;

class Shape
{
private:
    int getWidth();
    int getHeight();

protected:
    int width;
    int height;

public:
    Shape() = default;
    Shape(int, int);
};

int Shape::getWidth() { return width; }
int Shape::getHeight() { return height; }
Shape::Shape(int w, int h)
{
    width = w;
    height = h;
}

class Rectangle : public Shape
{
public:
    Rectangle(int w, int h);
    int area();
};

// this is the way to initialize parent's contructor
Rectangle::Rectangle(int w, int h) : Shape(w, h) {}

int Rectangle::area() { return width * height; }

int main()
{
    Rectangle r1(11, 11);
    cout << "Area of rectange: " << r1.area() << endl;
    return 1;
}