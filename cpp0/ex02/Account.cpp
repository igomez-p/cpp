/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igomez-p <igomez-p@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:54:03 by kali              #+#    #+#             */
/*   Updated: 2022/03/28 18:04:33 by igomez-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "account.hpp"

static int	Account::getNbAccounts( void )   { return (this->_nbAccounts); }

static int	Account::getTotalAmount( void )  { return (this->_totalAmount); }

static int	Account::getNbDeposits( void )   { return (this->_totalNbDeposits); }

static int	Account::getNbWithdrawals( void ) { return (this->_totalNbWithdrawals); }

static void	Account::displayAccountsInfos( void )
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
}

void	Account::makeDeposit( int deposit )  { this->_nbDeposits = deposit; }
bool	Account::makeWithdrawal( int withdrawal )
{
    this->_nbWithdrawals = withdrawal;
    return (this->_nbWithdrawals);
}

int		Account::checkAmount( void ) const { return (this->_amount == getTotalAmount()); }

void	Account::displayStatus( void ) const
{
    // TODO

    std::cout << "index:" << this->_accountIndex << ";";
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
        std::cout << "withdrawals:refused\n";
}