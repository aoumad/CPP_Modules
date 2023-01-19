#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
    // nothing to do
}

Base *make_a()
{
    return new A();
}

Base *make_b()
{
    return new B();
}

Base *make_c()
{
    return new C();
}

Base *generate(void)
{
    Base *(*f[3])() = {make_a, make_c, make_b};
    srand(time(0));
    return f[rand() % 3]();
}

void    identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::exception &e)
    {
        try
        {
            B &b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "B" << std::endl;
        }
        catch (std::exception &e)
        {
            try
            {
                C &c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "C" << std::endl;
            }
            catch (std::exception &e)
            {
                std::cout << "Unknown" << std::endl;
            }
        }
    }
}

/* 
The function identify takes a reference of type Base& as an argument, which is a reference to an object of the base class Base. The purpose of this function is to identify the type of the object that the reference p is referring to, and then print the type of the object to the console.

The function uses a series of try-catch blocks to check the type of the object that the reference p is referring to. In each try block, the function uses the dynamic_cast operator to cast the reference p to a reference of a specific derived class (A&, B&, or C&).

The dynamic_cast operator is used to perform a type-safe and safe down-casting of polymorphic classes. It checks at runtime if the object being casted is actually of the target type and throws an exception std::bad_cast if the cast is not valid.

The first try block uses dynamic_cast<A&>(p) to check if the object that p is referring to is of type A. If the cast is successful, it means that the object is of type A, and the program will print "A" to the console. If the cast is not successful, an exception std::bad_cast will be thrown and catch block will catch it.

The catch block will catch the exception and the second try block will be executed, in this try block, the function uses dynamic_cast<B&>(p) to check if the object that p is referring to is of type B. If the cast is successful, it means that the object is of type B, and the program will print "B" to the console. If the cast is not successful, an exception std::bad_cast will be thrown and catch block will catch it.

The second catch block will catch the exception and the third try block will be executed, in this try block, the function uses dynamic_cast<C&>(p) to check if the object that p is referring to is of type C. If the cast is successful, it means that the object is of type C, and the program will print "C" to the console. If the cast is not successful, an exception std::bad_cast will be thrown and catch block will catch it.

The last catch block will catch the exception and it will print "Unknown" to the console.

In summary, this function takes a reference to a base class and check if this reference is referring to an object of derived classes (A, B, C) using dynamic_cast. If the reference is referring to an object of one of this classes, it prints the class name otherwise it prints "Unknown". Instead of using if-else statement, this code uses try-catch statement to check the type of the object that the reference p is referring to and if the cast is not successful an exception will be thrown and the catch block will catch it.
*/