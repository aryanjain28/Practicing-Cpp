#include <iostream>
#include <cmath>

using namespace std;

// C++ polymorphism means that a call to a
// member function will cause a different function
// to be executed depending on the type of object
// that invokes the function.

// virtual functions tell the compiler to "direct" the
// method call based on the object that called it.

// we have to declare virtual because of static binding by
// the compiler
class Shape
{
protected:
    int width;
    int height;

public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        cout << "Parent class area method: " << width * height << endl;
        return width * height;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int w, int h)
    {
        this->width = w;
        this->height = h;
    }

    int area()
    {
        cout << "Rectangle class area: " << width * height << endl;
        return width * height;
    }
};

class Triangle : public Shape
{
public:
    Triangle(int w, int h)
    {
        this->width = w;
        this->height = h;
    }
    int area()
    {
        cout << "Trianle class area: " << 0.5 * width * height << endl;
        return 0.5 * width * height;
    }
};

class Circle
{
private:
    int radius;

public:
    Circle(int r)
    {
        radius = r;
    }
    float area()
    {
        return (0.5) * (3.14) * (pow(radius, 2));
    }
};

int main()
{
    Shape *shape;

    Shape shp(11, 11);
    Rectangle rect(12, 12);
    Triangle tri(13, 13);

    shape = &tri;

    shp.area();

    shape->area();
}