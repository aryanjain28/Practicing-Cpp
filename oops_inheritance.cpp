#include <iostream>

using namespace std;

class Shape
{
protected:
    int width;
    int height;

public:
    void setWidth(int w)
    {
        this->width = w;
    }
    void setHeight(int h)
    {
        this->height = h;
    }
};

class Rectangle : public Shape
{
public:
    Rectangle(int w, int h)
    {
        this->setHeight(h);
        this->setWidth(w);
    }
    int getArea()
    {
        return this->height * this->width;
    }
};

int main()
{
    Rectangle rect(10, 20);
    cout << "Area: " << rect.getArea() << endl;
    return 1;
}