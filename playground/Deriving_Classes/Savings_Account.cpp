#include <iostream>
#include "Saving_Account.h"
using namespace std;

Savings_Account::Savings_Account()
    : int_rate{3}
{}

Savings_Account::~Savings_Account(){}

void Savings_Account::deposit(double amount){
    cout << "Account deposit called with " << amount << endl;

}

void Savings_Account::withdraw(double amount){
    cout << "Account withdraw called with " << amount << endl;

}