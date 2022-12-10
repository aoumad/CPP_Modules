#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>
#include <string.h>

class Harl
{
private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
public:
    Harl();
    ~Harl();
    void complain( std::string level );
};

typedef void (Harl::*t_func) ( void );

#endif
