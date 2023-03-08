#include <iostream>

using namespace std;

void preview(float *pointer, int size);
void preview1(float *pointer);

int main()
{
    float nums[] = {1.25, 1.50, 1.75, 2.00};
    int arrSize = sizeof(nums) / sizeof(float);

    float *pointer[arrSize];

    float *p = NULL;
    for (int i = 0; i < arrSize; i++)
    {
        pointer[i] = &nums[i];
        // pointer[i] = &nums[i];
    }

    for (int i = 0; i < arrSize; i++)
    {
        cout << "Value at " << *pointer[i] << endl;
    }

    preview(nums, arrSize);

    float a = 10;
    float *p_a;
    p_a = &a;
    preview1(p_a);

    float b = 900;
    preview1(&b);

    return 1;
}

void preview(float *pointer, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(pointer + i) << endl;
    }
}

void preview1(float *pointer)
{
    cout << "Address: " << pointer << endl;
    cout << "Value: " << *pointer << endl;
}