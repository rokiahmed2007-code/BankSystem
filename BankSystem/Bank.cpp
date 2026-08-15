#include "Bank.h"
#include "SavingAccount.h"
#include "CurrentAccount.h"
#include<vector>

using namespace std;

Bank::Bank():nextAccountNumber(1001){}

Customer& Bank::AddCustomer(const Customer& customer) {

	customers.push_back(customer);

	return customers.back(); 
}

void Bank::CreateSavingAccount(double balance, Customer& owner, double interestRate, double minimumBalance) {

	SavingAccount account(nextAccountNumber, balance, owner, interestRate, minimumBalance); 

	owner.AddSavingAccount(account);

	nextAccountNumber++;
}

void Bank::CreateCurrentAccount(double balance, Customer& owner, double overdraftLimit) {

	CurrentAccount account(nextAccountNumber, balance, owner, overdraftLimit);

	owner.AddCurrentAccount(account);

	nextAccountNumber++;
}



