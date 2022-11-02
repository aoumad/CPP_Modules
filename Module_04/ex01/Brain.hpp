#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
private:
    std::string _ideas[100];
public:
    Brain();
    Brain(cosnt Brain& other);
    Brain& operator = (const Brain& other);
    ~Brain();
};

#endif