#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string.h>
#include <iostream>
#include <fstream>

class Replace
{
public:
    Replace();
    ~Replace();

    std::string ft_replace(std::string content, std::string s1, std::string s2);
};

#endif