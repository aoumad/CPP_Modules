#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main(void)
{
    Base *p = generate();
    identify(p);
    identify(*p);
    return (0);
}