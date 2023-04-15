#include <iostream>

using namespace std;

int add10(int x)
{
    return x + 10;
}

int main()
{
    // What is L-val and R-val?
    // l value are variables or entities in C++ that
    // can have memory associated with it.
    // Whereas r-value are entities that do not have
    // memory associated with it.
    // For eg.

    int a = 5;

    // here a is a l-value. There is some memory included
    // for the variable a. Whereas, '5', there is no memory.
    // Its just a constant. This object lasts longer.
    // Or have a longer lifespan.

    // Furthermore, we can get that memory using &

    cout << "Memory: " << &a << endl;
    cout << "Value: " << a << endl;

    // Such variables are called l-values.

    // R-values, these are entites and objects, that
    // doesn't have memory associated with it.
    // There lifespan is shorter too.

    // For eg. '5' above is temporary.
    // These are called r-values.

    // One more example

    int x = 60;
    int y = 40;
    int sum = x + y;

    // In this case the 'sum' is an l-value, and the expression,
    // "x + y" is a r-value.
    // We can get the memory of sum using &sum. But we cannot
    // get the memory of the expression "&(x + y)".

    cout << "&sum: " << &sum << endl;
    // cout << "&(x + y): " << &(x + y) << endl;

    // Furthermore, we cannot get the reference to a
    // function, for eg. the below is wrong.
    int eleven = add10(20);

    return 1;
}