#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# define MAX_CONTACT 8
#include "contact.hpp"

class Phonebook
{
private:
    Contact _contacts[8];
    int    _index;

public:
    Phonebook();
    ~Phonebook();
    void    add_contact();
    void    search_contact();
    void    ft_display_contact() const;
    void    help_menu();
};

#endif