#include <iostream>
#include <memory>

using namespace std;

class MyClass
{
public:
    MyClass()
    {
        std::cout << "Constructir invoked." << endl;
    }
    ~MyClass()
    {
        std::cout << "Destructor invoked." << endl;
    }
};

int main()
{
    // 1. UNIQUE POINTER
    // unique_ptr<int> uniq_pointer1 = make_unique<int>(25);
    // unique_ptr<int> uniq_pointer2 = move(uniq_pointer1);
    // cout << uniq_pointer1 << endl;
    // cout << *uniq_pointer1 << endl;
    // cout << *uniq_pointer2 << endl;

    // MyClass obj = MyClass();
    // {
    //     unique_ptr<MyClass> pointer = make_unique<MyClass>();
    // }
    // cout << pointer << endl;

    // 2. SHARED POINTER
    // shared_ptr<int> shPointer1 = make_shared<int>(25);
    // cout << "# of owners of shPointer1: " << shPointer1.use_count() << endl;

    // shared_ptr<int> pointer2 = shPointer1;
    // cout << "# of owners of shPointer1: " << shPointer1.use_count() << endl;
    // cout << "# of owners of pointer2: " << pointer2.use_count() << endl;

    // shared_ptr<int> pointer3 = move(shPointer1);
    // cout << "# of owners of shPointer1: " << shPointer1.use_count() << endl;
    // cout << "# of owners of pointer3: " << pointer2.use_count() << endl;

    // shared_ptr<int> pointer_1 = make_shared<int>(41);
    // cout << "No of. owners: " << pointer_1.use_count() << endl;
    // {
    //     shared_ptr<int> pointer_2 = pointer_1;
    //     cout << "No of. owners: " << pointer_1.use_count() << endl;
    // }
    // cout << "No of. owners: " << pointer_1.use_count() << endl;

    // 3. WEAK POINTER
    // weak_ptr<int> wpointer1;
    // unique_ptr<int> uPointer = make_unique<int>(100);
    // // wpointer1 = uPointer;

    // {
    //     // shared_ptr<int> shpointer1 = make_shared<int>(25);
    //     auto shpointer1 = make_shared<int>(25);
    //     wpointer1 = shpointer1;
    // }

    // // cout << "Value: " << *shpointer1 << endl;
    // std::cout << wpointer1.expired() << endl;
    // std::cout << wpointer1.lock() << endl; // returns a temporary shared pointer

    weak_ptr<int> wPointer;

    auto shPointer1 = make_shared<int>(1200);
    auto shPointer2 = shPointer1;
    auto shPointer3 = shPointer1;
    auto shPointer4 = shPointer1;

    wPointer = shPointer1;

    std::cout << "No. of owners: " << shPointer1.use_count() << endl;
    std::cout << "No. of owners: " << shPointer2.use_count() << endl;
    std::cout << "No. of owners: " << shPointer3.use_count() << endl;
    std::cout << "No. of owners: " << shPointer4.use_count() << endl;

    shPointer1.reset();
    if (auto tempPointer = wPointer.lock())
    {
        std::cout << "The value: " << *tempPointer << endl;
    }
    else
    {
        std::cout << "No objects.";
    }

    shPointer2.reset();
    if (auto tempPointer = wPointer.lock())
    {
        std::cout << "The value: " << *tempPointer << endl;
    }
    else
    {
        std::cout << "No objects.";
    }

    shPointer3.reset(new int(10));
    if (auto tempPointer = wPointer.lock())
    {
        std::cout << "The value: " << *tempPointer << endl;
    }
    else
    {
        std::cout << "No objects.";
    }

    shPointer4.reset();
    if (auto tempPointer = wPointer.lock())
    {
        std::cout << "The value: " << *tempPointer << endl;
    }
    else
    {
        std::cout << "No objects." << endl;
    }

    std::cout << "No. of owners: " << shPointer1.use_count() << endl;
    std::cout << "No. of owners: " << shPointer2.use_count() << endl;
    std::cout << "No. of owners: " << shPointer3.use_count() << endl;
    std::cout << "No. of owners: " << shPointer4.use_count() << endl;
}
