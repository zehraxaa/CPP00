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