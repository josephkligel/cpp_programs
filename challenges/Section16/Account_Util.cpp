#include <iostream>
#include <vector>
#include "Account_Util.h"

void display(const std::vector<Account *> &accounts){
    std::cout << "\n=== Accounts ======================" << std::endl;
    for(const auto ptr: accounts){
        std::cout << *ptr << std::endl;
    }
}

void deposit(std::vector<Account *> &accounts, double amount){
    std::cout << "\n=== Depositing to Accounts =============================" << std::endl;
    for(auto ptr: accounts){
        if(ptr->deposit(amount))
            std::cout << "Deposited " << amount << " to " << *ptr << std::endl;
        else
        {
            std::cout << "Failed Deposit of " << amount << " to " << *ptr << std::endl;
        }
        
    }
}

void withdraw(std::vector<Account *> &accounts, double amount){
    std::cout << "=== Withdrawing from Accounts ========================" << std::endl;
    for(auto ptr: accounts){
        if(ptr->withdraw(amount))
            std::cout << "Withdraw of " << amount << " from " << *ptr << std::endl;
        else
            std::cout << "Failed withdraw of " << amount << " from " << *ptr << std::endl;
    }
}
