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
        std::cout << "unable to cast : large input" << std::endl;
    }
    return (0);
}

// `*` && string : sdklfjsdklee;ldkf || 56456456456.sdsds