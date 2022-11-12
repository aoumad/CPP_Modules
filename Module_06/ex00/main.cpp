#include "Conversion.hpp"

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "Error: no parameters\n" << "Usage: <program> <literal>" << std::endl;
		return 1;
    }

    Conversion::convert(argv[1]);
    return (0);
}