#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include "phonebook.hpp"

class Contact
{
	public:
		bool	fillContact();
		void	displayContactInfos(void) const;
		void	displayContactSummary(unsigned index) const;

	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _login;
		std::string _postalAddress;
		std::string _emailAddress;
		std::string _phoneNumber;
		std::string _birthday;
		std::string _date;
		std::string _favoriteMeal;
		std::string _underwearColor;
		std::string _darkestSecret;
};
#endif
