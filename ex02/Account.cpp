/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaydogdu <aaydogdu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 23:42:01 by aaydogdu          #+#    #+#             */
/*   Updated: 2026/01/07 23:30:55 by aaydogdu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex
			<<";amount:"<<_amount
			<<";created";
}

Account::~Account()
{
	std::cout<<"index:"<<_accountIndex
			<<";amount:"<<_amount
			<<";closed";
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout<<"accounts:"<<getNbAccounts()
		<<";total:"<<getTotalAmount()
		<<";deposits:"<<getNbDeposits()
		<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex
			<<";p_amount:"<<_amount
			<<";deposit"<<deposit;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout<<";amount"<<_amount
			<<";nb_deposits:"<<_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex
			<<";amount"<<_amount
			<<";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout<<"refused"<<std::endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	std::cout<<withdrawal<<";amount"<<_amount
			<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	return true;
}

int	Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex
			<<";amount:"<<getTotalAmount()
			<<";deposits:"<<getNbDeposits()
			<<";withdrawals:"<<getNbWithdrawals()<<std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(NULL);
	std::tm* now =std::localtime(&t);

	std::cout<<"["<<(now->tm_year + 1900)
				<<std::setw(2) << std::setfill('0' )<< (now->tm_mon + 1)
				<<std::setw(2) << std::setfill('0') << now->tm_mday << "_"
				<<std::setw(2) << std::setfill('0') << now->tm_hour
				<<std::setw(2) << std::setfill('0') << now->tm_min
				<<std::setw(2) <<std::setfill('0') << now->tm_sec << "] ";
}
