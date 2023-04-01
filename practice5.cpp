#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int a = 258497;
    auto sh_pointer_1 = make_shared<int>(a);
    cout << "Number of owners: " << sh_pointer_1.use_count() << endl;

    auto sh_pointer_2 = sh_pointer_1;

    cout << "Number of owners: " << sh_pointer_1.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_2.use_count() << endl;

    cout << "Owner before: " << sh_pointer_1.owner_before(sh_pointer_2) << endl;

    cout << "sh_pointer_1 :" << *sh_pointer_1 << endl;
    cout << "sh_pointer_2 :" << *sh_pointer_2 << endl;

    auto sh_pointer_3 = sh_pointer_1;
    auto sh_pointer_4 = sh_pointer_1;
    auto sh_pointer_5 = sh_pointer_1;

    cout << "Number of owners: " << sh_pointer_1.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_2.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_3.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_4.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_5.use_count() << endl;

    cout << "----------------------------" << endl;

    sh_pointer_1.reset();

    cout << "Number of owners: " << sh_pointer_1.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_2.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_3.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_4.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_5.use_count() << endl;

    cout << "----------------------------" << endl;

    sh_pointer_1.reset(); // does nothing
    sh_pointer_3.reset();
    sh_pointer_4.reset();

    cout << "Number of owners: " << sh_pointer_1.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_2.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_3.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_4.use_count() << endl;
    cout << "Number of owners: " << sh_pointer_5.use_count() << endl;

    return 1;
}