#include "contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_first_name() const
{
    return (this->_first_name);
}

std::string Contact::get_last_name() const
{
    return (this->_last_name);
}

std::string Contact::get_nickename() const
{
    return (this->_nickename);
}

std::string Contact::get_phone_number() const
{
    return (this->_phone_number);
}

std::string Contact::get_darkest_secret() const
{
    return (this->_darkest_secret);
}

int Contact::set_first_name(std::string first_name)
{
    if (first_name == "")
        return (1);
    for (size_t i = 0; i < first_name.size(); i++)
        if (!isalpha(first_name[i]))
        {
            if (isspace(first_name[i]))
                continue;
            else
                return (1);
        }
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
        {
            if (isspace(last_name[i]))
                continue;
            else
                return (1);
        }
    if (last_name.length() > 10)
    {
        last_name[9] = '.';
        last_name.erase(10, last_name.length() - 10);
    }
    this->_last_name = last_name;
    return (0);
}

int Contact::set_nickename(std::string nickename)
{
    if (nickename == "")
        return (1);
    for (size_t i = 0; i < nickename.size(); i++)
        if (!isalpha(nickename[i]))
        {
            if (isspace(nickename[i]))
                continue;
            else
                return (1);
        }
    if (nickename.length() > 10)
    {
        nickename[9] = '.';
        nickename.erase(10, nickename.length() - 10);
    }
    this->_nickename = nickename;
    return (0);
}

int Contact::set_phone_number(std::string phone_number)
{
    if (phone_number == "")
        return (1);

    for (size_t i = 0; i < phone_number.size(); i++)
        if (!isdigit(phone_number[i]))
            return (1);
    if (phone_number.length() > 10)
    {
        phone_number[9] = '.';
        phone_number.erase(10, phone_number.length() - 10);
    }
    this->_phone_number = phone_number;
    return (0);
}

int Contact::set_darkest_secret(std::string darkest_secret)
{
    if (darkest_secret == "")
        return (1);
    if (darkest_secret.length() > 10)
    {
        darkest_secret[9] = '.';
        darkest_secret.erase(10, darkest_secret.length() - 10);
    }
    this->_darkest_secret = darkest_secret;
    return (0);
}
