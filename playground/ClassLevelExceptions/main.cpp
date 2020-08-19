#include <iostream>
#include <memory>
#include "Account.h"
// #include "Checking_Account.h"
// #include "Savings_Account.h"
// #include "Trust_Account.h"
#include "Account.h"
#include "IllegalBalanceException.h"

using namespace std;

int main(){
    try{
        std::unique_ptr<Account> moes_account = std::make_unique<Account>("Moe", 10.0);
        std::cout << "moe's account" << std::endl;
    } catch(const IllegalBalanceException &ex){
        std::cerr << "Couldn't create account - negative balance" << std::endl;
    }

    std::cout << "Program completed successfully" << std::endl;

    Account acc {"Example", 120.0};
    acc.print(std::cout);
    std::cout << endl;
    return 0;
}