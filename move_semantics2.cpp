#include <iostream>

void moving(std::string &&str)
{
}

int main()
{
    std::string str1 = "long string here";
    std::string str2 = str1;

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str1: " << str2 << std::endl;

    // str2 = move(str1);
    str2 = (std::string &&) str1; // we are just typecasting things!

    // "basically we "move" of "steal" resources from
    // one object to another"

    std::cout << "str1: " << str1 << std::endl;
    std::cout << "str1: " << str2 << std::endl;

    return 1;
}