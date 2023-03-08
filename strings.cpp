#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0', 'W', 'o'};
    cout << greeting << endl;

    char hWorld[100] = "Hello World!";
    cout << hWorld << endl;

    cout << "Size of hWorld: " << sizeof(hWorld) << endl;

    char copy[1];
    strcpy(copy, hWorld);

    cout << "Copied: " << copy << endl;

    char firstName[100] = "Aryan";
    char lastName[100] = "Jain";
    strcat(firstName, lastName);

    cout << "Joined: " << firstName << endl;

    char longLine[] = "This is a sentence of many characters.";
    cout << "The sentence has " << strlen(longLine) << " number of characters." << endl;
    cout << "The size of sentence is: " << sizeof(longLine) << endl;

    char str1[] = "ABC";
    char str2[] = "XYZ";
    char str3[] = "abc";

    cout << strcmp(str1, str2) << endl;
    cout << strcmp(str1, str3) << endl;
    cout << strcasecmp(str1, str3) << endl;

    // operations using the string class.
    string fName = "Aryan";
    string lName = "Jain";
    string fullName = fName + " " + lName;

    cout << "First: " << fName << endl;
    cout << "Last: " << lName << endl;
    cout << "Full: " << fullName << endl;

    cout << "Size of fName: " << fName.size() << endl;

    string str = "Computer Science";

    cout << "e in str: " << str.find('C') << endl;
    str.append(" is fun.");

    cout << str << endl;

    return 1;
}