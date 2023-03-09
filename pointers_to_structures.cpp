#include <iostream>

using namespace std;

enum gender
{
    m = 1,
    f,
    u
};

struct PersonalDetails
{
    string fName = "";
    string lName = "";
    int age = -1;
    gender gender = u;
    int bank_bal;
    int *bank_bal_pointer = NULL;
};

void display(PersonalDetails *pointer);
void update(PersonalDetails personalDetails);
void updateUsingPointer(PersonalDetails *personalDetails);

int main()
{

    PersonalDetails p;
    p.fName = "Aryan";
    p.lName = "Jain";
    p.age = 24;
    p.gender = m;
    p.bank_bal = 1000;
    p.bank_bal_pointer = &p.bank_bal;

    // display(&p);

    cout << "Name before: " << p.fName << endl;
    // update(p); // wont change
    updateUsingPointer(&p);
    cout << "Name after: " << p.fName << endl;

    cout << "Bank bal before: " << p.bank_bal << endl;
    update(p); // using pointer member
    cout << "Bank bal after: " << p.bank_bal << endl;

    return 1;
}

void display(PersonalDetails *pointer)
{
    cout << "First Name: " << (*pointer).fName << endl;
    cout << "Last Name: " << pointer->lName << endl;
}

void update(PersonalDetails personalDetails)
{
    personalDetails.fName = "Name change";
    // personalDetails.bank_bal = 2000;
    *(personalDetails.bank_bal_pointer) = 2000;
}

void updateUsingPointer(PersonalDetails *personalDetails)
{
    personalDetails->fName = "Aryan Jain";
}