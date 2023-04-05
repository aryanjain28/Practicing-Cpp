#include <iostream>

using namespace std;

int square(int);

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

    // Eg. 2
    int sum = a + b;

    // here sum -> lvalue and expression, a + b -> rvalue
    // we can get the memory address of sum using
    // &sum. But we cannot get the memory address
    // of &(a+b) -> this is temporary and throws error;

    int *pointer = &sum; // no error

    // Error: expression must be an lvalue or a function designator
    // int *pointer = &(a + b) // error

    // this throw error. We cannot take the address of
    // function - square()
    // int *pointer2 = &square(a);

    // this is valid.
    int *pointer3 = &a;

    return 0;
}

int square(int x)
{
    return x * x;
}