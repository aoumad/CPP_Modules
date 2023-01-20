#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <stdio.h>
#include <stdlib.h>
#include <cfloat>
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

void    convert(std::string &literal);

int     isChar(std::string &literal);
int     isFloat(std::string &literal);
int     isDouble(std::string &literal);
int     isInt(std::string &literal);
void    convert(std::string &literal);
int     check(std::string &literal);
int     others(std::string &literal);
#endif