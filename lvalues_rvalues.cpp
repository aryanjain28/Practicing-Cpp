#include <iostream>

using namespace std;

int main()
{
    // L-value:
    // 1. We can take the address of the expression.
    // 2. This object lasts longer.

    // R-value:
    // 1. We cannot take the address of the expression.
    // 2. This object is temporary.

    int a = 15; // here a - Lvalue and 15 - rValue
    int b = 25; // here b - Lvalue and 25 - rValue

    // we can get the memory of a and b
    // using &a and &b, but we cannot get the
    // address of 15 and 25.
    // Also, a and b last longer, whereas 15 and
    // 25 are temporary.
}