#include "contact.hpp"

// GETERS

std::string Contact::get_first_name()
{
    return (this->_first_name);
}

std::string Contact::get_last_name()
{
    return (this->_last_name);
}

std::string Contact::get_nickename()
{
    return (this->_nickename);
}

std::string Contact::get_darkest_secret()
{
    return (this->_darkest_secret);
}

std::string Contact::get_phone_number()
{
    return (this->_phone_number);
}

// SETTERS

void    Contact::set_first_name(std::string first_name)
{
    this->_first_name = first_name;
}

void    Contact::set_last_name(std::string last_name)
{
    this->_last_name = last_name;
}

void    Contact::set_nickename(std::string nickename)
{
    this->_nickename = nickname;
}

void    Contact::set_darkest_secret(std::string darkest_secret)
{
    this->_darkest_secret = darkest_secret;
}

void    Contact::set_phone_number(std::string phone_number)
{
    this->_phone_number = phone_number;
}