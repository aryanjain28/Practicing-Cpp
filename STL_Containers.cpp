#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename T>
void print(vector<T> v)
{
    for (int i; i < v.size(); i++)
    {
        cout << v.at(i) << "-";
    }
    cout << endl;
}

int main()
{
    // other containers:  list; set; arrays;

    vector<int> nums;
    vector<string> names;

    names.resize(10);
    nums.resize(10, 12);

    print(nums);

    return 0;
}