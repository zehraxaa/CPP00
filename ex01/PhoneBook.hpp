#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <stdlib.h>

class PhoneBook
{
	private:
		Contact contacts[8];
		int		contactNum;
		void	headLine();
		int		number_control(std::string input);
		bool hasNonAscii(std::string str);

	public:
		PhoneBook();
		~PhoneBook();
		
		void	addUser();
		void	search();
		void	display();
		void	exit();
};


#endif