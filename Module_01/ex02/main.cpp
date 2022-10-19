#include <iostream>
#include <string.h>

int main(void)
{
    std::string s = "HI THIS IS BRAIN";

    std::string *stringPTR = &s;
    std::string &stringREF = s;

    std::cout << &s << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << "----------------" << std:: endl;
    std::cout << s << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}