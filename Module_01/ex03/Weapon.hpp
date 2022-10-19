#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    ~Weapon();

    const std::string&  getType();
    void                setType(std::string s);
};

#endif