#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>

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
    // other containers:  list; set; map; arrays;

    vector<int> nums;
    vector<string> names;

    names.resize(10, "Aryan");
    print(names);

    nums.resize(10, 12);
    print(nums);

    set<int> mSet;
    mSet.insert(1);
    mSet.insert(13);
    mSet.insert(3);
    mSet.insert(2);
    mSet.insert(2);
    mSet.insert(0);
    mSet.insert(2);
    mSet.insert(3);
    mSet.insert(5);
    mSet.insert(1);

    cout << "Size of : " << mSet.size() << endl;

    for (auto i : mSet)
    {
        cout << i << " ";
    }

    map<int, string> mStudent;
    mStudent[1] = "Aryan";
    mStudent[2] = "John";
    mStudent[3] = "Josh";

    cout << endl
         << endl;

    cout << "Student with roll 1: " << mStudent[1] << endl;
    cout << "Student with roll -121: " << mStudent[-121] << endl;
    // cout << "Student with roll ABC: " << mStudent["ABC"] << endl; // error

    map<int, string>::iterator it = mStudent.begin();

    while (it != mStudent.end())
    {
        cout << "IT: " << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}