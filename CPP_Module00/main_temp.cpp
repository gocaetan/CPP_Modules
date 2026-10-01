#include "Contact.hpp"
#include <iostream>

int main()
{
    Contact contact;

    contact.setContact(
        "Goncalo",
        "Proenca",
        "gocaetan",
        "912345678",
        "My darkest secret"
    );

    std::cout << "First name: " << contact.GetFirstName() << std::endl;
    std::cout << "Last name: " << contact.GetLastName() << std::endl;
    std::cout << "Nickname: " << contact.GetNick() << std::endl;

    return (0);
}
