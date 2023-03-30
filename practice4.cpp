#include <iostream>

using namespace std;

int main()
{
    /**
            Smart Pointers.
     */

    /*

        Issues with "normal" pointers - >
        Normal pointers have issues like Memory Leaks, Wild Pointers, Data inconsistency.

        Memory Leaks -> This occurs when pointers are repeatedly allocated memory but this memory
                        is never freed. This leads to over-consumption of memory and eventually results
                        in a system crash.

        Wild Pointers-> This occurs when pointers are declared but they are never initialized.

        Data Inconsistency-> When the data is stored in memory but is not updated in a consistent manner.

    */

    /*
            What are smart pointers?

            Smart pointers are a wrapper class above the normal pointers. They seem to work in a similar way as
            normal pointers, syntactically. However, unlike normal pointers, smart pointers can deallocate
            and free the memory once the object is destroyed.

            Other languages like Java have their garbage collector and it deallocates the memory automatically
            and the programmer doesn't need to worry about this. However C++ came up with its own implementaion.


    */
}