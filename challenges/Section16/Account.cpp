#include "Account.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const I_Printable &obj){
    os.precision(2);
    std::cout << std::fixed;
    obj.print(os);
    return os;
}

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;
}

void Account::print(std::ostream &os) const{
    os << "[Account: " << this->name << ": " << this->balance << "]";
}
