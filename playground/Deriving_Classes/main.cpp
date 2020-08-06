#include <iostream>
#include "Account.h"
#include "Saving_Account.h"
using namespace std;

int main(){
    cout << "\n================= Account =================" << endl;
    Account acc;
    acc.deposit(2000.00);
    acc.withdraw(500.00);
    cout << endl;

    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.00);
    p_acc->withdraw(500.00);
    delete *p_acc;
    cout << endl;

    cout << "\n================= Savings Account =================" << endl;
    Savings_Account sav_acc;
    sav_acc.deposit(2000.00);
    sav_acc.withdraw(500.00);
    cout << endl;

    Savings_Account *p_sav {nullptr};
    p_sav = new Savings_Account();
    p_sav->deposit(1000.00);
    p_sav->withdraw(500.00);
    delete p_sav;
    cout << endl;

    return 0;
}