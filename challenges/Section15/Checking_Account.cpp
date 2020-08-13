#include <iostream>
#include <string>
#include "Account.h"
#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance, double fee)
    :Account(name, balance), fee {fee}
{}

bool Checking_Account::withdraw(double amount){
    if(balance - amount - fee <= 0){
        return false;
    } else {
        balance -= (amount + fee);
        return true;
    }
}

std::ostream &operator<<(std::ostream &os, const Checking_Account &account){
    os << "[Checking Account: " << account.name << ": " << account.balance << ": " << account.fee << "]";
    return os;
}