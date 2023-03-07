#include <iostream>
#include <iomanip>

#define DECEMBER 12;
#define BLANK "White";

using namespace std;

enum type
{
    SUM = 1,
    SUB,
    MUL,
    DIV,
    REM
};

// function declaration
int sum(int, int);
void modifiers(void);
void storageClasses(void);
int operators(type);
int max(int, int);

int main()
{

    // modifiers();
    // storageClasses();
    // operators(SUM);
    int x_, y_;
    x_ = 10;
    y_ = 11;
    // cout << "Hello World!";
    cout << "MAX of " << x_ << " and " << y_ << " is: " << max(x_, y_) << endl;
    return 1;

    cout << "Hello World!\nz";
    cout << "This is the 2 line";

    int a;
    int b;

    cout << "Enter num 1: ";
    // cin >> a;

    cout << "\n Enter num 2:";
    // cin >> b;

    cout << "\nSUM: " << a + b;

    bool isTrue = true;
    bool isFalse = false;
    isFalse = !true;
    char c = 'c';

    cout << "\nSize of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << endl;

    cout << "Size of short int: " << sizeof(short int) << " bytes" << endl;
    cout << "Size of long int: " << sizeof(long int) << " bytes" << endl;

    // Enums
    enum mEnum
    {
        red,
        green = 23,
        blue
    } e;

    cout << "\n\n";
    cout << "ENUM: red-value " << red << endl;
    cout << "ENUM: green-value " << green << endl;
    cout << "ENUM: blue-value " << blue << endl;

    cout << red;

    enum weekdays
    {
        Sun = 11,
        Mon,
        Tue,
        Wed,
        Thur,
        Fri,
        Sat
    };

    cout << endl;
    bool isSunday;

    double mon = Mon;

    cout << "VALUE: " << mon << endl;

    weekdays today = Mon;
    bool todayIsSunday = today == Sun;

    if (todayIsSunday)
    {
        cout << "Yes, today is a Sunday.";
    }
    else
    {
        cout << "No, today is not a Sunday, its  " << today;
    }

    cout << endl
         << endl;

    float f = 1.12345678987;
    double d = 1.12345678987;

    cout << setprecision(7);
    cout << "Float: " << f << "\nDouble: " << d << endl;

    cout << setprecision(12);
    cout << "Float: " << f << "\nDouble: " << d << endl;

    // L-values and R-values

    // constants;

    // cout << "December is " << DECEMBER << "th month of the year.";
    // cout << "If blank, show " << BLANK; // << "  color.";

    // printf("December is %dth month of the year.\n", DECEMBER);
    // // printf("If field is blank, show %s color.", BLANK);

    int one = 1;
    char four[] = "twoPlusTwo";

    cout << "One: " << one << endl;

    one = 2;

    cout << "One: " << one << endl;

    const int two = 2;
    // two = 3;
    cout << "Sum of two numbers: " << sum(34, 45) << endl;

    modifiers();

    return 1;
}

int max(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int operators(type check)
{
    int a = 12;
    int b = 6;

    // cout << a / b << endl;
    // cout << a * b << endl;
    // cout << ++a << endl;
    // cout << a % b << endl;

    switch (check)
    {
    case 1:
        cout << "Sum is : " << a + b;
        break;
    case 2:
        cout << "Sub is: " << a - b;
        break;
    case 3:
        cout << "Mul is: " << a * b;
        break;
    default:
        cout << "Something went wrong!";
    }

    srand(time(0));
    int random = rand();
    cout << "\n\nRandom: " << random;
    cout << "\nThis is " << (random % 2 == 0 ? "unacceptable" : "unacceptable") << ", bro";

    return random;
}

int sum(int a, int b)
{
    return a + b;
};

void storageClasses()
{
    // auto
    // 1. default
    // 2. can only be used in a function
    int a = 12;
    int b;

    // register
    // 1. Stores the variable in the register instead of RAM
    // 2. MAY store, not guranteed.
    // register int r = 12;

    // static
    // 1. do not change after function call is complete.
    // 2. Act as a global variable, inside function;
    static int s = 12;

    // extern
    // 1. used to share the variable or a function between two files.
}

void modifiers()
{
    // Modifiers
    short signed int i;
    short unsigned int j;

    j = 5000;
    i = j;
    cout << i << " " << j << endl;

    short signed int a;
    short unsigned int b;

    a = 11234;
    b = 11234;

    cout << a << " " << b << endl;

    const int constVal = 12;

    cout << constVal << endl;

    volatile int volatileVal = 14;

    cout << volatileVal << endl;

    volatileVal = 42;

    cout << volatileVal << endl;
}
