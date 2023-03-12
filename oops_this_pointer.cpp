#include <iostream>

using namespace std;

class Box
{
private:
    int w, h, l;

public:
    Box(int, int, int);
    int volume();
};

int Box::volume()
{
    return this->h * this->l * this->w;
}

Box::Box(int w, int h, int l)
{
    this->w = w;
    this->h = h;
    this->l = h;
    cout << "Volume: " << this->volume();
}

int main()
{
    Box box(10, 20, 25);
}