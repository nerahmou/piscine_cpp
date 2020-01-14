#include "PhoneBook.class.hpp"

void	usage(void)
{
	std::cout << "Available Commands: (ADD | SEARCH | EXIT)\n" << std::endl;
}

int main(void)
{
	std::string command = "";
	PhoneBook phoneBook;

	usage();
	while (std::getline(std::cin, command))
	{
		if (command.compare("ADD") == 0)
			phoneBook.addContact();
		else if (command.compare("SEARCH") == 0)
			phoneBook.searchContact();
		else if (command.compare("EXIT") == 0)
			return 0;
		else
			usage();
	}
	std::cout << "Exited with a Ctrl-D (BAAADDD)" << std::endl;
	return 1;
}
