#include "PhoneBook.hpp"
#include <string>

void	headLine();

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

	headLine();

	std::cout<<"Select a row to display: ";
	std::cin>>index;

	//informations
	std::cout<<"Name: "<<contacts[index].getFirstName()<<std::endl;
	std::cout<<"Last Name: "<<contacts[index].getLastName()<<std::endl;
	std::cout<<"Nickname: "<<contacts[index].getNickname()<<std::endl;
	std::cout<<"Phone Number: "<<contacts[index].getPhoneNum()<<std::endl;
	std::cout<<"Darkest Secret: "<<contacts[index].getSecret()<<std::endl;
}

void	headLine()
{
	std::cout<<" ___________________________________________"<<std::endl;
	std::cout<<"|     Index|First Name| Last Name| Phone Num|"<<std::endl;
	std::cout<<"| ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯|"<<std::endl;

}