#include "replace.hpp"

Replace::Replace()
{
    std::cout << "The constuctor has been called" << std::endl;
}

Replace::~Replace()
{
    std::cout << "The destructor has been called" << std::endl;
}

std::string Replace::ft_replace(std::string content, std::string s1, std::string s2)
{
    if (s1.empty())
        return (content);
    // Find position of string s1
    size_t  index = content.find(s1);
    // Check if position is -1 or not
    while(index != std::string::npos)
    {
        content.erase(index, s1.size());
        content.insert(index, s2);
        index = content.find(s1);
    }
    return (content);
}