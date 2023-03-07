#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

int main()
{
    cout << "Cos(10): " << cos(10) << endl;
    cout << "Sin(10): " << sin(10) << endl;
    cout << "10^2: " << pow(10, 2) << endl;
    cout << "floor(10.22289): " << floor(10.22289) << endl;
    cout << "ceil(10.1): " << ceil(10.1) << endl;

    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        cout << "Random number: " << rand() << endl;
    }

    return 1;
}