#ifndef CONVERISON_HPP
#define CONVERSION_HPP

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <climits>
#include <iomanip>
#include <cerrno>

class Conversion
{
private:
    int         _iVal;
    float       _fVal;
    double      _dVal;
    std::string _cVal;

public:
    Conversion();
    Conversion(const Conversion& other);
    ~Conversion();
    Conversion&  operator= (const Conversion& other);

    static void convert(const std::string& literal);
};