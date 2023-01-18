#include "Conversion.hpp"

int main(int argc, char **argv)
{
    try
    {
        if (argc == 1)
        {
            std::cout << "Error: no parameters\n" << "Usage: <program> <literal>" << std::endl;
            return 1;
        }
        std::string arg(argv[1]);
        convert(arg);
    }
    catch (...)
    {
        std::cout << "" << std::endl;
    }
    // int n = static_cast<int>(12e2);
    // std::cout << n << std::endl;
    return (0);
}