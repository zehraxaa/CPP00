#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string darkestSecret;
	std::string phoneNum;

	public:
	Contact();
	~Contact();

	std::string getFirstName() const;
	std::string getLastName()const;
	std::string getNickname()const;
	std::string getSecret()const;
	std::string getPhoneNum() const;

	void setFirstName(std::string value);
	void setLastName(std::string value);
	void setNickname(std::string value);
	void setSecret(std::string value);
	void setPhoneNum(std::string value);
};

#endif