#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	private:
		Contact contacts[8];
		int	contactNum;

	public:
		PhoneBook();
		~PhoneBook();
		
		void	addUser();
		void	search();
		void	display();
		void	exit();
};
	void	headLine();

#endif