#include <iostream>

using namespace std;

int main()
{
    /*
        Smart Pointers.

        Issues with "normal" pointers - >
        Normal pointers have issues like Memory Leaks, Wild Pointers, Data inconsistency.

        Memory Leaks -> This occurs when pointers are repeatedly allocated memory but this memory
                        is never freed. This leads to over-consumption of memory and eventually results
                        in a system crash.

        Wild Pointers-> This occurs when pointers are declared but they are never initialized.

        Data Inconsistency-> When the data is stored in memory but is not updated in a consistent manner.

    */

    //    What are smart pointers?

    // -> Smart pointers automatically "deallocates" the memory assigned to the pointer
    // whenever the destructor is called. Therefore, user does not need to worry about
    // Memory leaks and stuff.
}