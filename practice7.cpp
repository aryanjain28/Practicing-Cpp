#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto sh_ptr_1 = make_shared<int>(12);
    auto sh_ptr_2 = sh_ptr_1;
    auto sh_ptr_3 = sh_ptr_1;

    cout << boolalpha
         << "(sh_ptr_2 < sh_ptr_3): " << (sh_ptr_2 < sh_ptr_3) << "\n"
         << "(sh_ptr_3 < sh_ptr_2): " << (sh_ptr_3 < sh_ptr_2) << "\n";

    weak_ptr<int> wk_pointer = sh_ptr_1;
    cout << "Owners: " << wk_pointer.use_count() << endl;

    cout << "Expired: " << boolalpha << wk_pointer.expired() << endl;

    sh_ptr_1.reset();
    sh_ptr_2.reset();
    sh_ptr_3.reset();

    cout << "Expired: " << boolalpha << wk_pointer.expired() << endl;

    shared_ptr<int> sh_pointer_6 = make_shared<int>(15);
    shared_ptr sh_pointer_7 = sh_pointer_6;
    shared_ptr sh_pointer_8 = sh_pointer_6;

    weak_ptr wk_ptr_6 = sh_pointer_6;
    weak_ptr wk_ptr_7 = sh_pointer_7;
    weak_ptr wk_ptr_8 = sh_pointer_8;

    cout << "wk_ptr_6.expired(): " << wk_ptr_6.expired() << endl;
    cout << "wk_ptr_7.expired(): " << wk_ptr_7.expired() << endl;
    cout << "wk_ptr_8.expired(): " << wk_ptr_8.expired() << endl;

    cout << "\n";
    sh_pointer_6.reset();

    cout << "wk_ptr_6.expired(): " << wk_ptr_6.expired() << endl;
    cout << "wk_ptr_7.expired(): " << wk_ptr_7.expired() << endl;
    cout << "wk_ptr_8.expired(): " << wk_ptr_8.expired() << endl;

    cout << endl
         << endl;

    shared_ptr<int> sh_ptr_11 = make_shared<int>(11);
    shared_ptr<int> sh_ptr_12 = make_shared<int>(12);

    weak_ptr wk_ptr_11 = sh_ptr_11;
    weak_ptr wk_ptr_12 = sh_ptr_12;

    cout << "*sh_ptr_11: " << *sh_ptr_11 << endl;
    cout << "*sh_ptr_12: " << *sh_ptr_12 << endl;

    cout << "wk_ptr_11.expired(): " << wk_ptr_11.expired() << endl;
    cout << "wk_ptr_12.expired(): " << wk_ptr_12.expired() << endl;

    cout << "*wk_ptr_11.lock(): " << *wk_ptr_11.lock() << endl;
    cout << "*wk_ptr_12.lock(): " << *wk_ptr_12.lock() << endl;

    sh_ptr_11.swap(sh_ptr_12);
    cout << endl;

    cout << "*sh_ptr_11: " << *sh_ptr_11 << endl;
    cout << "*sh_ptr_12: " << *sh_ptr_12 << endl;

    cout << "wk_ptr_11.expired(): " << wk_ptr_11.expired() << endl;
    cout << "wk_ptr_12.expired(): " << wk_ptr_12.expired() << endl;

    cout << "*wk_ptr_11.lock(): " << *wk_ptr_11.lock() << endl;
    cout << "*wk_ptr_12.lock(): " << *wk_ptr_12.lock() << endl;

    cout << endl;

    return 1;
}