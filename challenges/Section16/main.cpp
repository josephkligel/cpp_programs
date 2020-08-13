#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {

    // Account joe;
    Checking_Account c;
    cout << c << endl;

    Savings_Account s {"Frank", 5000.0, 2.6};
    cout << s << endl;
    s.deposit(10000);
    cout << s << endl;
    s.withdraw(10000);
    cout << s << endl;

    Trust_Account t {"Trustworthy", 10000.0, 14};
    cout << t << endl;
    t.withdraw(1000);
    cout << t << endl;
    t.withdraw(1000.0);
    cout << t << endl;
    t.withdraw(1600.0);
    cout << t << endl;
    t.withdraw(2000.0);
    cout << t << endl;

    // Account *ptr = new Trust_Account {"Leo", 10000, 2.6};
    // cout << *ptr << endl;

    std::vector<Account *> accounts {&s, &t};
    display(accounts);
    deposit(accounts, 2000.0);
    withdraw(accounts, 4000.0);
   
    
    return 0;
}

