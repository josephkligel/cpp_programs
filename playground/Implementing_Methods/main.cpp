#include <iostream>
#include "Account.h"
using namespace std;

int main(){
	Account frank_account;
	frank_account.set_name("Frank's account");
	frank_account.set_balance(1000.00);

	if(frank_account.deposit(200.00)){
		cout << "Deposit OK" << endl;
	} else {
		cout << "Deposit not allowed" << endl;
	}

	if(frank_account.withdraw(500.00))
		cout << "Withdraw OK" << endl;
	else
	{
		cout << "Not sufficient funds" << endl;
	}

	if(frank_account.withdraw(1500.00))
		cout << "Withdraw OK" << endl;
	else
	{
		cout << "Not sufficient funds" << endl;
	}

	return 0;
}