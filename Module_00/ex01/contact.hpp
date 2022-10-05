#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
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
    Contact()
    {};
    ~Contact()
    {};
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickename();
    std::string get_darkest_secret();
    std::string get_phone_number();

    void        set_first_name(std::string first_name);
    void        set_last_name(std::string last_name);
    void        set_nickename(std::string nickename);
    void        set_darkest_secret(std::string darkest_secret);
    void        set_phone_number(std::string phone_number);
};

#endif