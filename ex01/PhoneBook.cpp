/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 22:56:52 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/04 23:02:22 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	contactNum = 0;
	std::cout<<"📞 Hello? Welcome to My Awesome Phonebook!!"<<std::endl;
	std::cout<<"***Enter a command (ADD, SEARCH, EXIT)***"<<std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout<<"The phone hung up ☎️ 📵"<<std::endl;
}

void	PhoneBook::addUser()
{
	Contact newc;
	std::string	input;

//name
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter name: ";
		std::getline(std::cin, input);
		if (hasNonAscii(input)) {
			std::cout << "Please use English characters only!" << std::endl;
			input = "";
		}
		if (!std::cin.eof() && input != "")
			newc.setFirstName(input);
	}
	input = "";
//last name
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter last name: ";
		std::getline(std::cin, input);
		if (hasNonAscii(input)) {
			std::cout << "Please use English characters only!" << std::endl;
			input = "";
		}
		if (!std::cin.eof() && input != "")
			newc.setLastName(input);
	}
	input = "";
//nickname
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter nickname: ";
		std::getline(std::cin, input);
		if (hasNonAscii(input)) {
			std::cout << "Please use English characters only!" << std::endl;
			input = "";
		}
		if (!std::cin.eof() && input != "")
			newc.setNickname(input);
	}
	input = "";
//phone number
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter phone number: ";
		std::getline(std::cin, input);
		if (!std::cin.eof() && input != "" && number_control(input))
			newc.setPhoneNum(input);
		else if (!number_control(input))
		{
			std::cout<<"Please enter digits (0-9)"<<std::endl;
			input = "";
		}
	}
	input = "";
//darkest secret
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter darkest secret: ";
		std::getline(std::cin, input);
		if (hasNonAscii(input)) {
			std::cout << "Please use English characters only!" << std::endl;
			input = "";
		}
		if (!std::cin.eof() && input != "")
			newc.setSecret(input);
	}
	input = "";

	contacts[contactNum % 8] = newc;
	contactNum++;
}

void	PhoneBook::search()
{
	int	index;
	std::string input;
	int	i = 0;

	if (contactNum == 0)
	{
		std::cout<<"No contact has been found."<<std::endl;
		return;
	}

	headline();

	while (i < contactNum && i < 8)
	{
		std::cout<<"|"<<std::setw(10)<<i+1<<"|";
		std::cout<<std::setw(10)<<shorten(contacts[i].getFirstName())<<"|";
		std::cout<<std::setw(10)<<shorten(contacts[i].getLastName())<<"|";
		std::cout<<std::setw(10)<<shorten(contacts[i].getNickname())<<"|"<<std::endl;
		std::cout<<" --------------------------------------------"<<std::endl;
		i++;
	}

	while (true)
	{
		std::cout<<"Select a row to display: ";
		std::cin >> index;

		if (std::cin.eof())
			return;

		if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			std::cout<<"Invalid input! Please enter a number."<<std::endl;
			continue;
		}
		if (index < 1 || index > contactNum || index > 8)
		{
			std::cout<< "Index out of range. Try again"<<std::endl;
			continue;
		}
		std::cin.ignore(10000, '\n');
		break;
	}
	
	//informations
	std::cout<<"Name: "<<contacts[index-1].getFirstName()<<std::endl;
	std::cout<<"Last Name: "<<contacts[index-1].getLastName()<<std::endl;
	std::cout<<"Nickname: "<<contacts[index-1].getNickname()<<std::endl;
	std::cout<<"Phone Number: "<<contacts[index-1].getPhoneNum()<<std::endl;
	std::cout<<"Darkest Secret: "<<contacts[index-1].getSecret()<<std::endl;
}

int	PhoneBook::number_control(std::string input)
{
	size_t i = 0;

	while (i < input.length())
	{
		if (!isdigit(input[i]))
			return (0);
		i++;
	}
	return (1);
}

bool	PhoneBook::hasNonAscii(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		if (static_cast<unsigned char>(str[i]) > 127)
			return true;
	}
	return false;
}

void	PhoneBook::headline()
{
	std::cout<<" ___________________________________________"<<std::endl;
	std::cout<<"|     Index|First Name| Last Name|  Nickname|"<<std::endl;
	std::cout<<"|----------+----------+----------+----------|"<<std::endl;
}

std::string	PhoneBook::shorten(std::string str)
{
	if (str.length() > 10)
	{
		std::string new_str;
		for (int i = 0; i < 9; i++)
		{
			new_str += str[i];
		}
		new_str += ".";
		return new_str;
	}
	return str;
}
