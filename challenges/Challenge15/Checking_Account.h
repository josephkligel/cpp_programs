#ifndef _CHECKING_ACCOUNT_H
#define _CHECKING_ACCOUNT_H
#include "Account.h"
#include <string>

class Checking_Account: public Account{
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    private:
        static constexpr const char *def_name {"Unnamed Account"};
        static constexpr double def_balance {0.0};
        static constexpr double def_fee {1.5};
    protected:
        double fee;
    public:
        Checking_Account(std::string name=def_name, double balance=def_balance, double fee=def_fee);
        // Using built-in destructor, copy, and move constructors

        // Inherited deposit method
        bool withdraw(double amount);
        // Inherited get_balance method

};

#endif