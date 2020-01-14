#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook
{
	public:
		PhoneBook(void);

		void	addContact(void);
		void	searchContact(void) const;
		void	displayContactList(void) const;
		void	displayContact(unsigned char) const;

	private:
		Contact _contacts[8];
		unsigned char _nbContact;
};
#endif
