/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:07:13 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/04 23:07:23 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook contact = PhoneBook();
	std::string str;

	while(true)
	{
		std::cout<<"> ";
		std::getline(std::cin, str);

		if (str == "ADD")
			contact.addUser();
		else if (str == "SEARCH")
			contact.search();
		else if (str == "EXIT")
			break;
		if (std::cin.eof())
		{
			std::cout<<std::endl;
			return(0);
		}
	}
	return 0;
}
