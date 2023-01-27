#include "Span.hpp"

Span::Span(unsigned int n)
{
    _n = n;
    _v.reserve(n);
}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span::~Span()
{
}

Span &Span::operator=(const Span &copy)
{
    if (this != &copy)
    {
        _v = copy._v;
        _n = copy._n;
    }
    return (*this);
}

void Span::addNumber(int n)
{
    if (_v.size() < _n)
        _v.push_back(n);
    else
        throw std::exception();
}

int Span::shortestSpan()
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (unsigned int i = 1; i < v.size() - 1; i++)
    {
        if (v[i + 1] - v[i] < min)
            min = v[i + 1] - v[i];
    }
    return (min);
}

int Span::longestSpan()
{
    if (_v.size() < 2)
        throw std::exception();
    std::vector<int> v = _v;
    std::sort(v.begin(), v.end());
    return (v[v.size() - 1] - v[0]);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    for (std::vector<int>::iterator it = begin; it != end; it++)
    {
        addNumber(*it);
    }
}
