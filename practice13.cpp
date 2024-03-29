#include <iostream>
#include <string>

using namespace std;

const int MAX_FRIENDS = 20;

struct Person
{
    string name;
    int age;
    Person *bestFriend;
    Person *friends[MAX_FRIENDS];
    Person getBestFriend();
    void addFriend(Person &newFriend);
    void viewFriends();
    int noOfFriends = 0;
};

void Person::addFriend(Person &newFriend)
{
    friends[noOfFriends] = &newFriend;
    noOfFriends += 1;
}

Person Person::getBestFriend()
{
    return *bestFriend;
}

void Person::viewFriends()
{
    cout << name << "'s friends: " << endl;
    for (int i = 0; i < noOfFriends; i++)
    {
        cout << (*friends[i]).name << endl;
    }
}

int main()
{
    // pointers are variables the store memory
    // addresses instead of value.

    Person p1;
    Person p2;
    Person p3;

    p1.name = "John";
    p1.age = 20;
    p1.bestFriend = &p2;

    p2.name = "Adam";
    p2.age = 18;
    p2.bestFriend = &p3;

    p3.name = "Alex";
    p3.age = 18;
    p3.bestFriend = &p1;

    cout << p1.name << " and " << p1.getBestFriend().name << " are best friends." << endl;
    cout << p2.name << " and " << p2.getBestFriend().name << " are best friends." << endl;
    cout << p3.name << " and " << p3.getBestFriend().name << " are best friends." << endl;

    cout << endl
         << endl;

    p1.viewFriends();

    p1.addFriend(p2);
    p1.addFriend(p3);

    p1.viewFriends();
}
