#include "phoneBook.hpp"

Phonebook::Phonebook()
{
    this->_index = 0;
    this->_contact_amount = 0;
    for (int i = 0; i < 8; i++)
		this->_contacts[i] = new Contact;
    std::cout << "PhoneBook constructor called!" << std::endl;
}

Phonebook::~Phonebook()
{
    for (int i = 0; i < 8; i++)
        delete this->_contacts[i];
    std::cout << "PhoneBook destructor called!" << std::endl;
}

void Phonebook::add_contact()
{
    // while (std::cin.good() && std::cin.eof())
    // {
        std::string first_name;
        std::cout << "First name> ";
        getline(std::cin, first_name);
        if (first_name.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
        this->_contacts[_index % 8]->set_first_name(first_name);
    // }

    // while (std::cin.good() && std::cin.eof())
    // {
        std::string last_name;
        std::cout << "Last name> " ;
        getline(std::cin, last_name);
        if (last_name.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
        this->_contacts[_index % 8]->set_last_name(last_name);
    // }
    
    // while (this->_contacts[_index % 8].nickename.empty() && std::cin.good() && std::cin.eof())
    // 
        std::string nickename;
        std::cout << "Nickname> ";
        getline(std::cin, nickename);
        if (nickename.empty())
            std::cout << "INVALID INPUT: please enter non empty name!!" << std::endl;
        this->_contacts[_index % 8]->set_nickename(nickename);
    // }
    
    // while (this->_contacts[_index % 8].phone_number.empty() && std::cin.good() && std::cin.eof())
    // {
        std::string phone_number;
        std::cout << "Phone number> ";
        getline(std::cin, phone_number);
        if (phone_number.empty())
            std::cout << "INVALID INPUT: please enter non empty number!!" << std::endl;
        this->_contacts[_index % 8]->set_phone_number(phone_number);
    // }

    // while (obj.darkest_secret.empty() && std::cin.good() && std::cin.eof())
    // {
        std::string darkest_secret;
        std::cout << "Darkest secret: ";
        getline(std::cin, darkest_secret);
        if (darkest_secret.empty())
            std::cout << "INVALID INPUT: please enter non empty string!!" << std::endl;
        this->_contacts[_index % 8]->set_darkest_secret(darkest_secret);
    // }

    // this->_contacts[_index % 8] = obj;
    this->_index++;

    std::cout << "The contact has been added successfully" << std::endl;
}

void    Phonebook::search_contact()
{
    ft_display_contact();
    std::cout << "Enter the contact\'s index: " << std::endl;
    std::cout << "> ";
    std::cin >> _index;
    // if (std::cin.fail() || (index < this->_index))
    if (std::cin.fail())
        std::cout << "Invalid input!!" << std::endl;
    else
    {
        std::cout << "First name: " << this->_contacts[_index]->get_first_name() << std::endl;
        std::cout << "Last name: " << this->_contacts[_index]->get_last_name() << std::endl;
        std::cout << "nickename: " << this->_contacts[_index]->get_nickename() << std::endl;
        std::cout << "Phone number: " << this->_contacts[_index]->get_phone_number() << std::endl;
        std::cout << "Darkest secret: " << this->_contacts[_index]->get_darkest_secret() << std::endl;
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

    for (int i = 0; i < 8; i++)
    {
        std::cout << '|' << std::setw(10) << i;
        std::cout << '|' << std::setw(10) << _contacts[i]->get_first_name();
        std::cout << '|' << std::setw(10) << _contacts[i]->get_last_name();
        std::cout << '|' << std::setw(10) << _contacts[i]->get_nickename();
        std::cout << '|' << std::endl;
    }
}

void        Phonebook::help_menu()
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

    Phonebook.help_menu();
    while (1)
    {
        std::cout << "> ";
        getline(std::cin, s);
        if ((s.compare("ADD")) == 0)
            Phonebook.add_contact();
        else if ((s.compare("SEARCH")) == 0)
            Phonebook.search_contact();
        else if ((s.compare("EXIT")) == 0)
            break;
        else
            std::cout << "Command not found, please read the menu above!!" << std::endl;
    }
}