/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:54:03 by kali              #+#    #+#             */
/*   Updated: 2022/03/29 15:07:11 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

int	Account::getNbAccounts( void )   { return (t._nbAccounts); }

int	Account::getTotalAmount( void )  { return (t._totalAmount); }

int	Account::getNbDeposits( void )   { return (t._totalNbDeposits); }

int	Account::getNbWithdrawals( void ) { return (t._totalNbWithdrawals); }

void	Account::displayAccountsInfos( void )
{
    std::cout << "accounts:" << getNbAccounts() << ";";
    std::cout << "total:" << getTotalAmount() << ";";
    std::cout << "deposits:" << getNbDeposits() << ";";
    std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account( int initial_deposit )  { this->_nbDeposits = initial_deposit; }

Account::~Account( void )
{
    this->_accountIndex = 0;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;

    this->_nbAccounts = 0;
    this->_totalAmount = 0;
    this->_totalNbDeposits = 0;
    this->_totalNbWithdrawals = 0;
}

void	Account::makeDeposit( int deposit )  { this->_nbDeposits += deposit; }
bool	Account::makeWithdrawal( int withdrawal )
{
    this->_nbWithdrawals = withdrawal;
    return (this->_nbWithdrawals);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount == (int)(this->getTotalAmount() - this->getNbWithdrawals()));
}

void	Account::displayStatus( void ) const
{
    // TODO

  /*  std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    // "p_amount" ??
    if ()
        std::cout << "created\n"
    else if ()
    {
        std::cout << "deposits:" << this->_nbDeposits << ";";
        std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    else if ()
        std::cout << "withdrawals:refused\n";*/
}