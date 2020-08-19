#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <iostream>
#include <string>

class Account{
    private:
        std::string name;
        double balance;
    public:
        Account(std::string name, double balance);
        ~Account() = default;

        bool deposit(double amount);
        bool withdraw(double amount);

        void print(std::ostream &os) const;
};

#endif