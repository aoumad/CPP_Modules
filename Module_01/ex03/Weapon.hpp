#ifndef WEAPON_HPP
#define WEAPON_HPP

#include<iostream>
#include<string.h>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string s);
    ~Weapon();

    const std::string&  getType();
    void                setType(std::string s);
};

#endif