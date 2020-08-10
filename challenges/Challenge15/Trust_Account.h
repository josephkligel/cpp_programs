#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H
#include "Savings_Account.h"
#include <string>

class Trust_Account: public Savings_Account {
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
    private:
        static constexpr const char *def_name {"Unnamed Account"};
        static constexpr double def_balance {0.0};
        static constexpr double def_int_rate {0.0};
        static constexpr int def_w_count {0};
    protected:
        int w_count;
    public:
        Trust_Account(std::string name=def_name, double balance=def_balance, double int_rate=def_int_rate, int w_count=def_w_count);

        bool deposit(double amount);
        bool withdraw(double amount);

};

#endif