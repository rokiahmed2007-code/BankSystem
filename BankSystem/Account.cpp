#include "Account.h"
#include <iostream>

using namespace std;

Account::Account(int accountnumber, double balance, Customer& owner) {
	this->accountnumber = accountnumber;
	this->balance = balance;
	this->owner = &owner;

}
int Account::getAccountNumber() { return accountnumber; }
double Account::getBalance() { return balance; }
void Account::Deposit(double amount) { if (amount > 0) balance += amount; }
void Account::DisplayAccountInfo() {
	cout << " Account Information \n";
	cout << "Account Number :" << accountnumber << endl;
	cout << "Balance :" << balance << endl;
}
