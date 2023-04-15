#include <iostream>

using namespace std;

int main()
{
    // SMART POINTERS

    // Why smart pointers?

    // Drawbacks of regular-pointer:
    // Therefore, pointers are allotated memory, but this
    // memory is never freed!! This causes over assumption
    // of the memory.
    // Other languages like JAVA has their in built
    // garbage collector, that handles this 'deallocation' of
    // memory. And the programmer doesn't have to worry about
    // the memory leak. But C++ doesn't have that.
    // This leads to following problems.

    // 1. Memory leak: repeated allocation, never freed.
    // 2. Data inconsistency: When data is stored in the memory
    // but it is not updated in a consistent manner.

    // C++ 11 launched the concept of "smart pointers" to
    // tackle this issue.

    // What are smart pointers?

    // 1. Smart pointers are a wrapper around the regular pointers.
    // 2. They even work as regular pointers.
    // 3. They point towards the memory address.
    // 4. The value is retrieved using *.
    // 5. However there is a big difference
    // between smart and regular pointers. And that is, smart
    // pointers deallocate and free the memory once the object is
    // destroyed. This is similar to 'garbage collector' in
    // other languages.

    // There are 3 different types of smart pointers.
    // 1. Unique pointers.
    // 2. Shared pointers.
    // 3. Weak pointers.

    // UNIQUE POINERS.
    // Unique pointers, as the name suggests are unique.
    // Meaning, only one 'unique pointer' can point to a
    // variable's address. If we try to assign a different
    // pointer to point the same variable. It gives error.
    // We can move the ownership of one unique-pointer to another,
    // using the move() method. However, the first pointer will be
    // deallocated.

    // SHARED POINTERS.
    // Shared pointers, are the smart pointer that are basically
    // opposite of the unique pointers. Meaning, multiple shared
    // pointers can point towards the same memory address.
    // This really helps in maintaining the data consistency.
    // They are essentially same as the regular pointers, however
    // with auto memory deallocation.
    // Shared pointers basically have owners to the memory addres.
    // If one owner dies, there are still other shared pointers,
    // that point to the same memory address.
    // There are methods like use_count() that gives the current
    // number of owners.

    // WEAK POINTERS.
    // Weak pointers, are smart pointers that are built as observer
    // pointers for shared pointers. Meaning, they cannot be used to
    // assign memory addresses like 'pointers'. They are assigned
    // shared-pointers to observe.
    // They are used just to get status of the shared-pointers.

    // For eg. there are methods like -
    // 1. expired(): that tells if the shared-pointer is deallocated.
    // 2. lock(): that provides a temporary pointer to work with.
    // 3. use_count(): that gives the current number of owners.

    return 1;
}