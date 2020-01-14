#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->_nbContact = 0;
	return;
}

void	PhoneBook::addContact(void)
{
	if (this->_nbContact < 8)
		this->_nbContact += this->_contacts[this->_nbContact].fillContact();
	else
		std::cout << "8 contacts MAX." << std::endl;
}

void	PhoneBook::displayContactList(void) const
{
	std::cout << std::setw(10) << "Index" << "|"
	<< std::setw(10) << "First name" << "|"
	<< std::setw(10) << "Last name" << "|"
	<< std::setw(10) << "Nickname" << std::endl;
	for (unsigned i = 0; i < this->_nbContact; i++)
		this->_contacts[i].displayContactSummary(i);
}

void	PhoneBook::searchContact(void) const
{
	std::string index;
	int i;

	if (this->_nbContact > 0)
	{
		this->displayContactList();
		std::cout << "Select an index : [" << 0 << "-" << this->_nbContact - 1 << "]" << std::endl;
		std::getline(std::cin, index);
		try
		{
			i = std::stoi(index);
			if (i < 0 || i > this->_nbContact - 1)
				throw std::invalid_argument("");
			this->_contacts[i].displayContactInfos();
		}
		catch (...)
		{
			std::cout << "\nInvalid index\n" << std::endl;
		}
	}
	else
		std::cout << "No contact in your PhoneBook" << std::endl;
}
