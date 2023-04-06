#include <iostream>

using namespace std;

// R-value references => WHY?
// We can define a function that can only accept
// temporary expressions, meaning - r-values.
// Using r-value references.

void getFullName(string &&fullName)
{
    cout << fullName << endl;
}

int main()
{
    string fName = "Aryan";
    string lName = "Jain";

    //    getFullName(fName); // error : lvalue provided
    getFullName(fName + lName);

    return 1;
}