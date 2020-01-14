#include "Contact.class.hpp"

bool	Contact::fillContact()
{
	std::cout << "Please input the following:" << std::endl << "First name:" << std::endl;
	std::getline(std::cin, this->_firstName);
	std::cout << "Last name:" << std::endl;
	std::getline(std::cin, this->_lastName);
	std::cout << "Nickname:" << std::endl;
	std::getline(std::cin, this->_nickName);
	std::cout << "Login:" << std::endl;
	std::getline(std::cin, this->_login);
	std::cout << "Postal address:" << std::endl;
	std::getline(std::cin, this->_postalAddress);
	std::cout << "Email address:" << std::endl;
	std::getline(std::cin, this->_emailAddress);
	std::cout << "Phone number:" << std::endl;
	std::getline(std::cin, this->_phoneNumber);
	std::cout << "Birthday:" << std::endl;
	std::getline(std::cin, this->_birthday);
	std::cout << "Favorite meal:" << std::endl;
	std::getline(std::cin, this->_favoriteMeal);
	std::cout << "Underwear color:" << std::endl;
	std::getline(std::cin, this->_underwearColor);
	std::cout << "Darkest secret:" << std::endl;
	std::getline(std::cin, this->_darkestSecret);
	std::cout << "\nContact Added !\n" << std::endl;
	return (1);
};

std::string truncateField(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 10).replace(9, 1, ".");
	return (str);
}


void	Contact::displayContactSummary(unsigned index) const
{
	std::cout << std::setw(10);
	std::cout << index << "|";
	std::cout << std::setw(10);
	std::cout << truncateField(this->_firstName) << "|";
	std::cout << std::setw(10);
	std::cout << truncateField(this->_lastName) << "|";
	std::cout << std::setw(10);
	std::cout << truncateField(this->_nickName);
	std::cout << std::endl;
}

void	Contact::displayContactInfos(void) const
{
	std::cout << "\nFirst name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal address: " << this->_postalAddress << std::endl;
	std::cout << "Email address: " << this->_emailAddress << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Birthday: " << this->_birthday << std::endl;
	std::cout << "Favorite meal: " << this->_favoriteMeal << std::endl;
	std::cout << "Underwear color: " << this->_underwearColor << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
