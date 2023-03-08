#include <iostream>

int main()
{
    char name[100];
    std::cout << "Enter name: ";

    // getline is used to get the complete line,
    // else it breaks at a space.
    std::cin.getline(name, sizeof(name) / sizeof(char));
    std::cout << "You name is: " << name << std::endl;

    std::cerr << "Unable to read." << std::endl;
    return 1;
}