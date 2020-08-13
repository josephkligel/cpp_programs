#include <iostream>
#include <string>
#include "Trust_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double int_rate, int w_count)
    :Savings_Account{name, balance, int_rate}, w_count {w_count} {}

bool Trust_Account::deposit(double amount){
    if(Savings_Account::deposit(amount)){
        if(amount >= 5000.0) balance += 50.0;
        return true;
    } else return false;
}

bool Trust_Account::withdraw(double amount){
    ++w_count;
    if ((balance - amount) >= 0 && amount/balance < 0.2 && w_count < 4) {
        balance -= amount;
        return true;
    } else return false;
}

std::ostream &operator<<(std::ostream &os, const Trust_Account &account){
    os << "[Trust Account: " << account.name << ": " << account.balance << ": " << account.w_count << "]";
    return os;
}