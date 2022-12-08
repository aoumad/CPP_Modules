#include "phoneBook.hpp"

Phonebook::Phonebook()
{
    this->_index = 0;
    this->_contact_amount = 0;
    for (int i = 0; i < MAX_CONTACT; i++)
        this->_contacts[i] = new Contact;
}

Phonebook::~Phonebook()
{
    for (int i = 0; i < MAX_CONTACT; i++)
        delete this->_contacts[i];
}

void Phonebook::add_contact()
{
    Contact obj = Contact();

    while (obj.first_name.empty() && std::cin.good() && std::cin.eof())
    {
        std::cout << "First name: ";
        getline(std::cin, first_name);
        obj.set_first_name(first_name);
        if (obj.first_name.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
    }

    while (obj.last_name.empty() && std::cin.good() && std::cin.eof())
    {
        std::cout << "Last name: " ;
        getline(std::cin, last_name);
        obj.set_last_name(last_name);
        if (obj.last_name.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
    }
    
    while (obj.nickename.empty() && std::cin.good() && std::cin.eof())
    {
        std::cout << "Nickname: ";
        getline(std::cin, nickename);
        obj.set_nickename(nickename);
        if (obj.nickename.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
    }
    
    while (obj.phone_number.empty() && std::cin.good() && std::cin.eof())
    {
        std::cout << "Phone number: ";
        getline(std::cin, phone_number);
        obj.set_phone_number(phone_number);
        if (obj.phone_number.empty())
            std::cout << "INVALID INPUT: please enter non empty number!!" << std::endl;
    }

    while (obj.darkest_secret.empty() && std::cin.good() && std::cin.eof())
    {
        std::cout << "Darkest secret: ";
        getline(std::cin, darkest_secret);
        obj.set_darkest_secret(darkest_secret);
        if (obj.darkest_secret.empty())
            std::cout << "INVALID INPUT: please enter non empty string!!" << std::endl;
    }

    this->_contact[_index % 8] = obj;
    this->_index++;

    std::cout << "The contact has been added successfully" << std::endl;
}

void    Phonebook::search_contact()
{
    display_contact();
    std::cout << "Enter the contact\'s index: " << std::endl;
    std::cout << "> ";
    std::cin >> _index;
    if (std::cin.fail() || (index < this->_index))
        std::cout << "Invalid input!!" << std::endl;
    else
    {
        std::cout << "First name: " << this->_contacts[_index].get_first_name() << std::endl;
        std::cout << "Last name: " << this->_contacts[_index].get_last_name() << std::endl;
        std::cout << "nickename: " << this->_contacts[_index].get_nickename() << std::endl;
        std::cout << "Phone number: " << this->_contacts[_index].get_phone_number() << std::endl;
        std::cout << "Darkest secret: " << this->_contacts[_index].get_darkest_secret() << std::endl;
    }
    std::cin.clear();
    std::cin.ignore(1000, '\n');
}

void    Phonebook::ft_display_contact() const
{
    std::cout   << "|--------------Contact Display--------------|\n"
                << "|-------------------------------------------|\n"
	            << "|     Index|First Name| Last Name|  Nickname|\n"
	            << "|-------------------------------------------|\n";

    for (int i = 0; i < MAX_CONTACT; i++)
    {
        std::cout << '|' << std::setw(10) << i;
        std::cout << '|' << std::setw(10) << _contacts[i].get_first_name();
        std::cout << '|' << std::setw(10) << _contact[i].get_last_name();
        std::cout << '|' << std::setw(10) << _contact[i].get_nickename();
        std::cout << '|' << std::endl;
    }
}

void    help_menu()
{
    std::cout << "|---------Welcome to the awesome Phonebook ☎📔---------|" << std::endl;
    std::cout << "|                        1-ADD                          |" << std::endl;
    std::cout << "|                        2-SEARCH                       |" << std::endl;
    std::cout << "|                        3-EXIT                         |" << std::endl;
    std::cout << "|-------------------------------------------------------|" << std::endl;
}

int main(void)
{
    Phonebook Phonebook;
    std::string s;

    help_menu();
    while (1)
    {
        std::cout << "> ";
        getline(std::cin, s);
        if (strcmp((const char *)s, "ADD"))
            Phonebook.add_contact();
        else if (strcmp((const char *)s, "SEARCH"))
            Phonebook.search_contact();
        else if (strcmp((const char *)s, "EXIT"))
            break;
        else
            std::cout << "Command not found, please read the menu above!!" << std::endl;
    }
}