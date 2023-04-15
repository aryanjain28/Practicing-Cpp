#include <iostream>

using namespace std;

int inc10(int &&x);
int &&getLargest(int &a, int &b);

// int &&inc20(int &&x)
// {
//     return move(x + 20);
// }

int main()
{
    // we know that r-values are entities / objects that
    // doesn't have memory associated with it. They are this,
    // temporary constant type things.
    // For eg.

    int a = 10;

    // '10' here, is a r-value.
    // 1. Its short-life.
    // 2. There's no memory associated with it.

    // Like we get -lvaue reference using &,
    // we can get r-value reference using '&&'

    // for eg.

    // int &x = 10; // WRONG!!!!!!!
    int &&x = 10; // this is correct!

    // x 10 is still an r-value. But
    // x is now a reference to 10, a r-value!!!
    // Internally the compiler creates a temp variable
    // for 10 and assigns the reference of temp to x.

    // But why? Its exactly similar to
    // int x = 10;

    // The reason is optimization!
    // We don't have to worry about copying the
    // object. We just pass the reference and
    // use it. (moving)
    // The other biggest usecase is 'move-semantics'
    // which is another topic!

    // can we pass this to a function?
    // yes; take a look at inc10 function below

    // ### inc10(a); // throws error; a => l-value
    // ### inc10(x); // throws error; x => l-value

    inc10(10);     // no error
    inc10(a + 10); // no error

    // int &&y = inc20(20);
    // cout << y << endl;

    // returning r-value reference from a function.
    int p = 9;
    int q = 10;
    int &&result = getLargest(p, q);

    cout << "The largest value is: " << result << endl;
}

// Now this function has become a function
// that will ONLY accept r-value references.
// Meaning it will only accept temporary objects.
int inc10(int &&x)
{
    return x * 10;
}

int &&getLargest(int &a, int &b)
{
    return a > b ? move(a) : move(b);
}