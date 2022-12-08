#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>


class Contact
{
private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickename;
    std::string _darkest_secret;
    std::string _phone_number;

public:
    Contact(
        std::string first_name;
        std::string last_name;
        std::string nickename;
        std::string darkest_secret;
        std::string phone_number;
    )
    ~Contact();

    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickename();
    std::string get_darkest_secret();
    std::string get_phone_number();

    int    set_first_name(std::string first_name);
    int    set_last_name(std::string last_name;);
    int    set_nickename()std::string nickename;;
    int    set_darkest_secret(std::string darkest_secret;);
    int    set_phone_number(std::string phone_number;);
}

#endif