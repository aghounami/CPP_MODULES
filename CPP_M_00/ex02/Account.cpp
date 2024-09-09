/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aghounam <aghounam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 12:10:15 by aghounam          #+#    #+#             */
/*   Updated: 2024/08/14 14:42:33 by aghounam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

void Account::_displayTimestamp() {
    time_t res;
    time(&res);
    tm* local = localtime(&res); 

    std::cout   <<  std::setfill('0')  <<  "[" << local->tm_year + 1900 
                <<  std::setw(2) <<  local->tm_mon + 1
                << std::setw(2) << local->tm_mday << "_"
                << std::setw(2) << local->tm_hour
                << std::setw(2) << local->tm_min
                << std::setw(2) << local->tm_sec << "] ";
}

Account::~Account( void ){
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit( int deposit ){
    Account::_displayTimestamp();
    this->_amount = _amount + deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    this->_nbDeposits++;
    std::cout<< "index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" 
        << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;

}

bool Account::makeWithdrawal( int withdrawal ){
    Account::_displayTimestamp();
    if (_amount >= withdrawal)
    {
        this->_amount = _amount - withdrawal;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        this->_nbWithdrawals++;
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal 
            << ";withdrawal:" << withdrawal << ";amount:" << _amount 
                << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    }
    else
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount 
        << ";withdrawal:refused"<< std::endl;
    return 0;
}

void Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" 
        << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos( void ){
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" 
        << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::checkAmount( void ) const {
    return _amount;
}

int Account::getNbAccounts( void ){
    return _nbAccounts;
}

int Account::getTotalAmount( void ){
    return _totalAmount;
}

int Account::getNbDeposits( void ){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ){
    return _totalNbWithdrawals;
}
