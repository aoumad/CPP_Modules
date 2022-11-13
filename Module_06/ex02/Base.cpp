#include "Base.hpp"

Base*   generate(void)
{
    std::srand(time(NULL));

    int r1 = rand() % 3;

    switch(r1)
    {
        case 0:
			std::cout << "new A class" << std::endl;
			return new A;
		case 1:
			std::cout << "new B class" << std::endl;
			return new B;
		case 2:
			std::cout << "new C class" << std::endl;
			return new C;
	}
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cerr << "Unrecognized actual type!" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& r1 = dynamic_cast(A&)(p);
        std::cout << "A" << std::endl;
        (void)r1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        B& r2 = dynamic_cast(B&)(p);
        std::cout << "B" << std::endl;
        (void)r2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        C& r3 = dynamic_cast(C&)(p);
        std::cout << "C" << std::endl;
        (void)r3;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
