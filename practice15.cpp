#include <iostream>

using namespace std;

class Employee
{
public:
    Employee(string, int);
    string nickname;

private:
    string name;
    int salary;
    friend void print(Employee);
};

Employee::Employee(string name, int salary)
{
    this->name = name;
    this->salary = salary;
}

void print(Employee employee)
{
    cout << "Name: " << employee.name << endl;
    cout << "Salary: " << employee.salary << endl;
}

// Member variables are inaccessible for "non-friend" functions.
// void printDetails(Employee employee)
// {
//     cout << "Name: " << employee.name << endl;
//     cout << "Salary: " << employee.salary << endl;
// }

int main()
{
    Employee employee("Aryan", 99999999);
    print(employee);
    return 1;
}