#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        std::string str = std::string(argv[i]);
        for (size_t l = 0; l < str.size(); l++)
            std::cout << (char)std::toupper(str[l]); // toupper returns an (int)
    }
    std::cout << std::endl;
    return (0);
}
