#include <iostream>
#include <vector>

using namespace std;

class Pixel
{
private:
    int r;
    int g;
    int b;

public:
    Pixel(int, int, int);
};

class Image
{
private:
    vector<Pixel> pixels;

public:
    Image(vector<Pixel> pixels);
};

Pixel::Pixel(int r, int g, int b)
{
    this->r = r;
    this->g = g;
    this->b = b;
}

Image::Image(vector<Pixel> pixels)
{
    this->pixels = pixels;
}

int main()
{
    vector<int> roll;

    for (int i = 0; i < 10; i++)
    {
        roll.push_back((i + 1) * 200);
    }

    for (int i = 0; i < 10; i++)
    {
        cout << " Element @ " << i << ": " << roll[i] << endl;
    }

    // vector of pointers.
    int image_h = 10;
    int image_w = 10;
    vector<Pixel> pixels;
    srand(time(0));

    for (int i = 0; i < image_h * image_w; i++)
    {
        Pixel pixel(rand(), rand(), rand());
        pixels.push_back(pixel);
    }

    Image image(pixels);

    return 0;
}