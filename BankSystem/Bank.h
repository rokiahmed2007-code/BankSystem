#pragma once
#include<vector>
#include"Customer.h"
using namespace std;

class Bank
{
private:
	vector<Customer> customers;
	int nextAccountNumber;
public:
	Bank();
	Customer& AddCustomer(const Customer& customer);
	void CreateSavingAccount(double balance, Customer& owner, double interestRate, double minimumBalance);
	void CreateCurrentAccount(double balance, Customer& owner, double overdraftLimit);
};

