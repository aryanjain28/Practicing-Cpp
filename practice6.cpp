#include <iostream>
#include <memory>

using namespace std;

/*

    WEAK POINTERS

*/

int main()
{
    int a = 7530;
    auto sh_ptr_1 = make_shared<int>(a);
    auto sh_ptr_2 = sh_ptr_1;
    auto sh_ptr_3 = sh_ptr_1;
    auto sh_ptr_4 = sh_ptr_1;
    auto sh_ptr_5 = sh_ptr_1;

    cout << "I. *sh_ptr_1: " << *sh_ptr_1 << endl;
    cout << "I. *sh_ptr_2: " << *sh_ptr_2 << endl;
    cout << "I. *sh_ptr_3: " << *sh_ptr_3 << endl;
    cout << "I. *sh_ptr_4: " << *sh_ptr_4 << endl;
    cout << "I. *sh_ptr_5: " << *sh_ptr_5 << endl;

    cout << "--------------------------------" << endl
         << endl;

    weak_ptr<int> wk_pointer = sh_ptr_1;

    cout << "Number of owners: " << wk_pointer.use_count() << endl;

    sh_ptr_1.reset();
    sh_ptr_2.reset();

    cout << "Number of owners: " << wk_pointer.use_count() << endl;

    cout << "(sh_ptr_4 > sh_ptr_5): " << (sh_ptr_4 > sh_ptr_5) << endl;
    cout << "(sh_ptr_4 < sh_ptr_5): " << (sh_ptr_4 < sh_ptr_5) << endl;
    cout << wk_pointer.owner_before(sh_ptr_3) << endl;

    cout << "--------------------------------" << endl
         << endl;

    return 1;
}