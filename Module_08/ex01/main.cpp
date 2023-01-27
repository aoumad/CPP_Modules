#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(1);
        sp.addNumber(9);
        sp.addNumber(11);

        // using addRange memeber function
        std::vector<int> v;
        v.push_back(6);
        v.push_back(3);
        v.push_back(1);
        v.push_back(9);
        v.push_back(11);
        sp.addRange(v.begin(), v.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "exception found " << e.what() << '\n';
    }
    return 0;
}