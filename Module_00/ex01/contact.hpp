#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>


class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickename;
    std::string _darkest_secret;
    std::string _phone_number;

public:
    Contact();
    ~Contact();

    std::string get_first_name() const;
    std::string get_last_name() const;
    std::string get_nickename() const;
    std::string get_darkest_secret() const;
    std::string get_phone_number() const;

    int    set_first_name(std::string first_name);
    int    set_last_name(std::string last_name);
    int    set_nickename(std::string nickename);
    int    set_darkest_secret(std::string darkest_secret);
    int    set_phone_number(std::string phone_number);
};

#endif