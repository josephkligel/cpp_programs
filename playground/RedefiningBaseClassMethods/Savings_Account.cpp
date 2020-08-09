#include "Savings_Account.h"
#include "Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    :Account(name, balance), int_rate {int_rate} {

    }

bool Savings_Account::deposit(double amount){
    amount += (amount * int_rate)/100;
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account){
    os << "Savings Account: " << account.balance << ", " << account.balance << ", " << account.int_rate << std::endl; 
    return os;
}