#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto un_pointer_1 = make_unique<int>(516);

    cout << "un_pointer_1: " << un_pointer_1.get() << endl;
    cout << "*un_pointer_1: " << *un_pointer_1 << endl;

    // auto un_pointer_2 = un_pointer_1;
    auto un_pointer_2 = move(un_pointer_1);

    cout << "un_pointer_1: " << un_pointer_1.get() << endl;
    // cout << "*un_pointer_1: " << *un_pointer_1 << endl;

    cout << "un_pointer_2: " << un_pointer_2.get() << endl;
    cout << "*un_pointer_2: " << *un_pointer_2 << endl;

    shared_ptr<int> sh_pointer_1 = make_shared<int>(325789);

    cout << "sh_pointer_1: " << sh_pointer_1.get() << endl;
    cout << "*sh_pointer_1: " << *sh_pointer_1 << endl;

    cout << "sh_pointer_1.unique(): " << sh_pointer_1.unique() << endl; // true

    // WOW!! Until a shared_pointer has one owner we can move the,
    // ownership of unique pointer to the shared pointer.
    sh_pointer_1 = move(un_pointer_2);

    auto sh_pointer_2 = sh_pointer_1;

    cout << "sh_pointer_2: " << sh_pointer_2.get() << endl;
    cout << "*sh_pointer_2: " << *sh_pointer_2 << endl;

    cout << "sh_pointer_1.use_count(): " << sh_pointer_1.use_count() << endl;
    cout << "sh_pointer_1.unique(): " << sh_pointer_1.unique() << endl; // false

    cout << endl
         << endl;

    weak_ptr<int> wk_pointer = sh_pointer_1;

    cout << "wk_pointer.expired(): " << wk_pointer.expired() << endl;     // false
    cout << "wk_pointer.use_count(): " << wk_pointer.use_count() << endl; // 2

    sh_pointer_1.reset();
    cout << "wk_pointer.expired(): " << wk_pointer.expired() << endl;     // false
    cout << "wk_pointer.use_count(): " << wk_pointer.use_count() << endl; // 1

    sh_pointer_2.reset();
    cout << "wk_pointer.expired(): " << wk_pointer.expired() << endl;     // true
    cout << "wk_pointer.use_count(): " << wk_pointer.use_count() << endl; // 0

    // shared_pointer.expired() -> provides status of that shared pointer.
    // weak_pointer.expired() -> provides status of that all the shared pointer.

    return 1;
}