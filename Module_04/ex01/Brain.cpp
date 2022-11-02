#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    *this = other;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain&  Brain::operator= (const Brain& other)
{
    if (*this != other)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = other._ideas[i];
    }
    std::cout << "Brain copy operator called" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Destructor called" << std::endl;
}