#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"
#include "InsufficientFundException.h"

using namespace std;

int main() {
    // test your code here
    try{
        Checking_Account moe_account{"Moe", -120.0};
    } catch(IllegalBalanceException &ex){
        std::cerr << ex.what() << std::endl;
    }

    try {
        Savings_Account larry_account{"Larry", 100.0, 4.0};
        larry_account.withdraw(400.0);
    } catch(InsufficientFundException &ex){
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

