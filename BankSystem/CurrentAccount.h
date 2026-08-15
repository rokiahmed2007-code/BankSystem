#pragma once
#include "Account.h"
class CurrentAccount : public Account
{
private:
	double overdraftLimit;
public:
	CurrentAccount(int accountnumber, double balance, Customer& owner, double overdraftLimit);
	virtual void Withdraw(double amount)override;

};

