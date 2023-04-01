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

    return 1;
}