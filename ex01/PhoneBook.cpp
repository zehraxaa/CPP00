#include "PhoneBook.hpp"
#include <cstdlib>
#include <ostream>
#include <string>
#include <iomanip>
#include <stdlib.h>

std::string	shorten(std::string str);

PhoneBook::PhoneBook() {
	contactNum = 0;
	std::cout<<"📞 Hello? Welcome to My Awesome Phonebook!!"<<std::endl;
	std::cout<<"***Enter a command (ADD, SEARCH, EXIT)***"<<std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout<<"Hung up the phone ☎️ 📵"<<std::endl;
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
		if (!std::cin.eof() && input != "")
			newc.setFirstName(input);
	}
	input = "";
//last name
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter last name: ";
		std::getline(std::cin, input);
		if (!std::cin.eof() && input != "")
			newc.setLastName(input);
	}
	input = "";
//nickname
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter nickname: ";
		std::getline(std::cin, input);
		if (!std::cin.eof() && input != "")
			newc.setNickname(input);
	}
	input = "";
//phone number
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter phone number: ";
		std::getline(std::cin, input);
		if (!std::cin.eof() && input != "")
			newc.setPhoneNum(input);
	}
	input = "";
//darkest secret
	while (!std::cin.eof() && input == "")
	{
		std::cout<<"Enter darkest secret: ";
		std::getline(std::cin, input);
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
	int	head = 0;
	int	i = 0;

	if (head == 0)
	{
		headLine();
		head = 1;
	}

	while (i < contactNum)
	{
		std::cout<<"|"<<std::setw(10)<<i+1<<"|";
		std::cout<<std::setw(10)<<shorten(contacts[i].getFirstName())<<"|";
		std::cout<<std::setw(10)<<shorten(contacts[i].getLastName())<<"|";
		std::cout<<std::setw(10)<<shorten(contacts[i].getNickname())<<"|"<<std::endl;
		std::cout<<" -------------------------------------------"<<std::endl;
		i++;
	}

	while ()
	std::cout<<"Select a row to display: ";
	std::cin>>index;
	if (std::cin.eof())
		return ;
	if (contacts[index].getFirstName()=="")
		std::cout<<"Index does not exist!!! Try again"<<std::endl;

	//informations
	std::cout<<"Name: "<<contacts[index-1].getFirstName()<<std::endl;
	std::cout<<"Last Name: "<<contacts[index-1].getLastName()<<std::endl;
	std::cout<<"Nickname: "<<contacts[index-1].getNickname()<<std::endl;
	std::cout<<"Phone Number: "<<contacts[index-1].getPhoneNum()<<std::endl;
	std::cout<<"Darkest Secret: "<<contacts[index-1].getSecret()<<std::endl;
}

void	headLine()
{
	std::cout<<" ___________________________________________"<<std::endl;
	std::cout<<"|     Index|First Name| Last Name|  Nickname|"<<std::endl;
	std::cout<<"|----------+----------+----------+----------|"<<std::endl;

}

std::string	shorten(std::string str){
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}