#include <iostream>

using namespace std;

class Box
{
public:
    int w, h, l;
    static int nBoxes;

public:
    void set(int, int, int);
    int volume();
    int getNBoxes();
};

int Box::nBoxes = 0;

void Box::set(int w, int h, int l)
{
    this->h = h;
    this->l = l;
    this->w = w;
    this->nBoxes++;
}

int Box::volume()
{
    return this->w * this->h * this->l;
}

int Box::getNBoxes()
{
    return this->nBoxes;
}

int main()
{
    Box b1, b2, b3, b4;
    b1.set(12, 12, 12);
    b2.set(11, 11, 11);
    b3.set(9, 9, 9);

    cout << b1.getNBoxes() << endl;
    cout << b2.getNBoxes() << endl;
    cout << b3.getNBoxes() << endl;
}