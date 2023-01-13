#ifndef BASE_HPP
# define BASE_HPP

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <sstream>

class Base
{
    public:
        virtual ~Base();
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif