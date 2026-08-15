#include "CurrentAccount.h"
#include <iostream>

using namespace std;

CurrentAccount::CurrentAccount(int accountnumber, double balance, Customer& owner, double overdraftLimit) :Account(accountnumber, balance, owner) {
	this->overdraftLimit = overdraftLimit;
}

void CurrentAccount::Withdraw(double amount) {
	if (amount > 0 && balance - amount >= overdraftLimit) {
		balance -= amount;

	}
	else
	{
		cout << "Withdrawal denide.\n";
	}
}
