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
    Pixel();
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

void print(vector<int> roll)
{
    for (int i = 0; i < 10; i++)
    {
        cout << " Element @ " << i << ": " << roll[i] << endl;
    }
}

int main()
{
    vector<int> roll;
    roll.resize(13);
    print(roll);

    cout << "Roll @ 10: " << roll.at(10) << endl;

    cout << "Empty? " << roll.empty() << endl;

    for (int i = 0; i < 10; i++)
    {
        roll.push_back((i + 1) * 200);
    }

    print(roll);

    cout << "Size: " << roll.size() << endl;
    cout << "Empty? " << roll.empty() << endl;

    roll.resize(5);

    cout << "Size: " << roll.size() << endl;
    cout << "Empty? " << roll.empty() << endl;

    print(roll);

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

    cout << "The size of the image: " << pixels.size() << endl;
    cout << "The max_size: " << pixels.max_size() << endl;

    // pixels.resize(5);

    // cout << "The size of the image: " << pixels.size() << endl;
    // cout << "The max_size: " << pixels.max_size() << endl;

    return 0;
}