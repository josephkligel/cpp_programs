#include <iostream>

class Account{
    public:
        virtual void withdraw(double amount){std::cout << "Account: Withdraw of " << amount << std::endl;}
};

class Trust: public Account{
    public:
        virtual void withdraw(double amount){std::cout << "Trust: Withdraw of " << amount << std::endl;}
};

void do_withdraw(Account &account, double amount){
    account.withdraw(amount);
}



int main(){
    Account a {};
    Account &ref = a;

    ref.withdraw(1000);

    Trust t {};
    Account &ref1 = t;

    ref1.withdraw(2000);

    do_withdraw(a, 3000);
    do_withdraw(t, 4000);
    return 0;
}