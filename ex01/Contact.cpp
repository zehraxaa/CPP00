/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:06:59 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/04 23:07:00 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{ }

Contact::~Contact()
{ }

std::string	Contact::getFirstName() const {
	return (this->firstName);
}
std::string Contact::getLastName() const {
	return (this->lastName);
}
std::string Contact::getNickname() const {
	return (this->nickname);
}
std::string Contact::getSecret() const {
	return (this->darkestSecret);
}
std::string Contact::getPhoneNum() const {
	return (this->phoneNum);
}

void	Contact::setFirstName(std::string fn) {
	this->firstName = fn;
}
void	Contact::setLastName(std::string ln) {
	this->lastName = ln;
}
void	Contact::setNickname(std::string n)
{
	this->nickname = n;
}
void	Contact::setSecret(std::string s)
{
	this->darkestSecret = s;
}
void	Contact::setPhoneNum(std::string p)
{
	this->phoneNum = p;
}