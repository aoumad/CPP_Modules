#include "contact.hpp"

Contact::Contact()
{
    std::cout << "Constructor has been called" << std::endl;
}

Contact::~Contact()
{
    std::cout << "Destructor has been called" << std::endl;
}

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

std::string Contact::get_phone_number()
{
    return (this->_phone_number);
}

std::string Contact::get_darkest_secret()
{
    return (this->_darkest_secret);
}

int Contact::set_first_name(std::string first_name)
{
    if (first_name == "")
        return (1);
    for (size_t i = 0; i < first_name.size(); i++)
        if (!isalpha(first_name[i])
            return (1);
    if (first_name.length() > 10)
    {
        first_name[9] = '.';
        first_name.erase(10, first_name.length() - 10);
    }
    this->_first_name = first_name;
    return (0);
}

int Contact::set_last_name(std::string last_name)
{
    if (last_name == "")
        return (1);
    for (size_t i = 0; i < last_name.size(); i++)
        if (!isalpha(last_name[i]))
            return (1);
    if (last_name.length() > 10)
    {
        last_name[9] = '.';
        last_name.erase(10, last_name.length() - 10);
    }
    this->last_name = last_name;
    return (0);
}

int Contact::set_nickename(std::string nickename)
{
    if (trim(nickename) == "")
        reutrn (1);
    for (size_t i = 0; i < nickename.size(); i++)
        if (!(isalpha(nickename[i]) || nickename[i] == ' '))
            return (1);
    if (nickename.length() > 10)
    {
        nickename[9] = '.';
        nickename.erase(10, nickename.length() - 10);
    }
    this->_nickename = nickname;
}

int Contact::set_phone_number(std::string phone_number)
{
    if (trim(phone_number) == "")
        reutrn (1);
    phone_number.erase(0, phone_number.find_first_not_of('0'));
    if (phone_number == "")
        return (1);
    for (size_t i = 0; i < phone_number.size(); i++)
        if (!(isalnum(phone_number[i]) || phone_number[i] == ' '))
            return (1);
    if (phone_number.length() > 10)
    {
        phone_number[9] = '.';
        phone_number.erase(10, phone_number.length() - 10);
    }
    this->_phone_number = phone_number;
}

int Contact::set_darkest_secret(std::string darkest_secret)
{
    if (trim(first_name) == "")
        reutrn (1);
    for (size_t i = 0; i < darkest_secret.size(); i++)
        if (!(isalpha(darkest_secret[i]) || darkest_secret[i] == ' '))
            return (1);
    if (darkest_secret.length() > 10)
    {
        darkest_secre[9] = '.';
        darkest_secre.erase(10, darkest_secre.length() - 10);
    }
    this->_darkest_secret = darkest_secret;
}
