/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:07:33 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/04 23:09:49 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cctype>
#include <string>
#include <iomanip>


class PhoneBook
{
	private:
		Contact		contacts[8];
		int			contactNum;
		void		headline();
		int			number_control(std::string input);
		bool		hasNonAscii(std::string str);
		std::string	shorten(std::string str);

	public:
		PhoneBook();
		~PhoneBook();
		
		void	addUser();
		void	search();
};


#endif