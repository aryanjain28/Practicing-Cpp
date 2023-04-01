#include <iostream>
#include <memory>

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

   /*

      Types of smart pointers.

      There are 3 types of smart pointers.
      1. Unique Pointers.
      2. Shared Pointers.
      3. Weak Pointers.

   */

   /*

          1. Unique Pointers, as the name suggests, are unique. Basically it means that the value inside these type of
             pointers cannot be shared. A unique pointer points to one address of one object and no other pointer can point
             to that address.

   */

   unique_ptr<int> uniq_pointer1 = make_unique<int>(2500);

   cout << uniq_pointer1.get() << endl;
   cout << *uniq_pointer1 << endl;

   // this will move the ownership to pointer2
   auto uniq_pointer2 = move(uniq_pointer1);

   cout << uniq_pointer1.get() << endl; // deallocated.
   // cout << *uniq_pointer1 << endl;      // thorws error.

   cout << uniq_pointer2.get() << endl;
   cout << *uniq_pointer2 << endl; // 2500

   /*

      2. Shared Pointers, are smart pointers like unique pointers. But unlike unique pointers
      they can be shared among smiliar objects. This save from data inconsistency.
      For example if the data is changed, the value for all the pointers will be changed.

      More formally, the ownership of the pointer can be shared.
      If one owner dies, (deallotes) there are still others.

   */

   cout << "\n\nShared Pointers: " << endl;

   auto shr_pointer1 = make_shared<int>(5680);
   cout << "Addr of shr_pointer_1: " << shr_pointer1.get() << endl;
   cout << "Value of shr_pointer_1: " << *shr_pointer1 << endl;
   cout << "I. Number of owners : " << shr_pointer1.use_count() << endl
        << endl;

   auto shr_pointer2 = shr_pointer1;

   cout << "Addr of shr_pointer_2: " << shr_pointer2.get() << endl;
   cout << "Value of shr_pointer_2: " << *shr_pointer2 << endl;
   cout << "II. Number of owners : " << shr_pointer1.use_count() << endl;
   cout << "II. Number of owners : " << shr_pointer2.use_count() << endl
        << endl;

   shr_pointer1.reset(); // basically this means that we are removing this pointer

   cout << "III. Number of owners (shr_pointer1) : " << shr_pointer1.use_count() << endl;
   cout << "III. Number of owners (shr_pointer2): " << shr_pointer2.use_count() << endl;

   cout << shr_pointer1.get() << endl; // 0
   // cout << *shr_pointer1 << endl;      // throws error

   shr_pointer2.reset();

   /*

      3. Weak Pointers:

      Weak pointers are a type of smart pointers. But unlike shared and unique poniters,
      that can store the memory address, weak pointers act more as a
      "observer" pointers for shared pointers.
      Meaning, they just tell the "state" of the shared pointers.
      There are some methods in weak pointers that are very useful.

      weak pointers are initiated using the make_shared() method.

   */

   cout << "\n\nWeak Pointers: " << endl;

   int x = 295378;
   auto shared_pointer = make_shared<int>(x);

   // defining weak_pointer for the above shared pointer.
   weak_ptr<int> wk_pointer_1 = shared_pointer;

   cout << "I. Addr of shared_pointer: " << shared_pointer.get() << endl;
   cout << "I. Value of shared_pointer: " << *shared_pointer << endl;
   cout << "I. Shared pointer is expired? :" << wk_pointer_1.expired() << endl; // tells if the shared_pointer is expired.

   // wk_pointer_1.reset();                                                   // no more observing; no change in shared pointer
   cout << "II. Addr of shared_pointer: " << shared_pointer.get() << endl; // 0
   cout << "II. Value of shared_pointer: " << *shared_pointer << endl;     // 0
   cout << "II. wk_pointer_1.use_count(): " << wk_pointer_1.use_count() << endl;
   cout << "II. shared_pointer.use_count(): " << shared_pointer.use_count() << endl;

   // resetting
   shared_pointer.reset();
   cout << "III. Addr of shared_pointer: " << shared_pointer.get() << endl; // 0
   // cout << "Value of shared_pointer: " << *shared_pointer << endl; // throws error
   cout << "III. Shared pointer is expired? :" << wk_pointer_1.expired() << endl; // tells if the shared_pointer is expired.
   cout << "III. wk_pointer_1.use_count(): " << wk_pointer_1.use_count() << endl;
   cout << "III. shared_pointer.use_count(): " << shared_pointer.use_count() << endl;
}