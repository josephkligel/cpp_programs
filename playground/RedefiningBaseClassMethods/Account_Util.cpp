#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account> &accounts){
    std::cout << "================= Accounts ==============" << std::endl;
    for(const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Account> &accounts, double amount){
    std::cout << "============= Depositing to Accounts =================" << std::endl;
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << std::endl;
        else
        {
            std::cout << "Failed deposit of " << amount << std::endl;
        }
        
    }
}

void withdraw(std::vector<Account> &accounts, double amount){
    std::cout << "================== Withdrawing from Accounts" << std::endl;
    for(auto &acc: accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdraw of " << amount << std::endl;
        else
        {
            std::cout << "Failed withdraw of " << amount << std::endl;
        }
        
    }
}

void display(const std::vector<Savings_Account> &accounts){
    std::cout << "================= Savings Accounts ==============" << std::endl;
    for(const auto &acc: accounts)
        std::cout << acc << std::endl;
}

void deposit(std::vector<Savings_Account> &accounts, double amount){
    std::cout << "============= Depositing to Savings Accounts =================" << std::endl;
    for(auto &acc: accounts){
        if(acc.deposit(amount))
            std::cout << "Deposited " << amount << std::endl;
        else
        {
            std::cout << "Failed deposit of " << amount << std::endl;
        }
        
    }
}

void withdraw(std::vector<Savings_Account> &accounts, double amount){
    std::cout << "================== Withdrawing from Savings Accounts =================" << std::endl;
    for(auto &acc: accounts){
        if(acc.withdraw(amount))
            std::cout << "Withdraw of " << amount << std::endl;
        else
        {
            std::cout << "Failed withdraw of " << amount << std::endl;
        }
        
    }
}