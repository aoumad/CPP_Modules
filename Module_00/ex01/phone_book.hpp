#ifndef PHONE_BOOK_HPP
# define PHONE_BOOKS_HPP

# define MAX_CONTACT 8
#include "contact.hpp"

class Phonebook
{
    private:
        Contact _contacts[8];
    int    _index;
    int    _contact_amount;
    int

public:
    Phonebook();
    ~Phonebook();
    void    add_contact();
    void    search_contact();
    void    display_contact();
    void    help_menu();
};