#include "SavingAccount.h"
#include <iostream>

using namespace std;

SavingAccount::SavingAccount(int accountnumber, double balance, Customer& owner, double interestRate, double minimumBalance) :Account(accountnumber, balance, owner) {
	this->interestRate = interestRate;
	this->minimumBalance = minimumBalance;
}

void SavingAccount::AddInterestRate() {
	double interest = getBalance() * interestRate / 100;

	Deposit(interest);
}
void SavingAccount::Withdraw(double amount) {
	if (amount > 0 && balance - amount >= minimumBalance) {
		balance -= amount;
	}
	else
	{
		cout << "Withdrawal denide.\n";
	}
}
