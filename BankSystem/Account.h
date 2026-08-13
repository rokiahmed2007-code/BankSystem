#pragma once
#include <iostream>
class Customer;

using namespace std;

class Account {

private:
	int accountnumber;
	double balance;
	Customer* owner;

public:
	Account(int accountnumber, double balance, Customer &owner);
	void Deposit(double amount);
	virtual void Withdraw(double amount) = 0;
	int getAccountNumber();
	double getBalance();
	void DisplayAccountInfo();


};