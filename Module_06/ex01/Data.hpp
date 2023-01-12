#ifndef DATA_HPP
# define DATA_HPP

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

struct Data
{
    std::string s1;
    int         n;
    std::string s2;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif