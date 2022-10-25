#include "replace.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
    {
        std::string s = argv[1];
        std::string content;
        std::ifstream ifs = ifstream(s, ios_base::in);
        std::ofstream ofs;
        if (ifs.fail())
        {
            std::cerr("run time error while reading!!");
            return (1);
        }
        std::getline(ifs, content, '\0');
        ifs.close();
        content = ft_replace(content, argv[2], argv[3]);
        ofs.open(name + ".replace");
        ofs << content;
        ofs.close();
    }
    else
    {
        std::cerr << "The inputs you have entered are structurally wrong!!" << std::endl;
        return (1);
    }
    return (0);
}