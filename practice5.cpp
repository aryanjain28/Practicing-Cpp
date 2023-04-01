#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int a = 258497;
    auto sh_pointer_1 = make_shared<int>(a);
    cout << "Number of pointers that are sharing sh_pointer_1: " << sh_pointer_1.use_count() << endl;

    auto sh_pointer_2 = sh_pointer_1;

    cout << "Number of pointers that are sharing sh_pointer_1: " << sh_pointer_1.use_count() << endl;
    cout << "Number of pointers that are sharing sh_pointer_2: " << sh_pointer_2.use_count() << endl;

    cout << "Owner before: " << sh_pointer_1.owner_before(sh_pointer_2) << endl;

    return 1;
}