#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include <string>

class Account {
    public:
        double balance;
        std::string name;

        void deposit(double amount);
        void withdraw(double amount);
        Account(); //Constructor
        ~Account(); //Destructor
};

#endif