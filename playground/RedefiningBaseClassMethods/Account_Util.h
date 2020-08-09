#ifndef _ACCOUNT_UTIL_H
#define _ACCOUNT_UTIL_H
#include <vector>
#include "Account.h"
#include "Savings_Account.h"

void display(const std::vector<Account> &accounts);
void deposit(std::vector<Account> &account, double amount);
void withdraw(std::vector<Account> &accounts, double amount);

void display(const std::vector<Savings_Account> &sav_accounts);
void deposit(std::vector<Savings_Account> &sav_accounts, double amount);
void withdraw(std::vector<Savings_Account> &sav_accounts, double amount);

#endif