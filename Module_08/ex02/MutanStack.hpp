#ifndef MUTANSTACK_HPP
# define MUTANSTACK_HPP

# include <stack>
# include <list>
# include <deque>
#include <iostream>
#include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const & src) : std::stack<T>(src) {}
        virtual ~MutantStack() {}

        typedef typename std::deque<T>::iterator iterator;
        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }

};

#endif