#include<iostream>
#include "Bank.h"
#include"Customer.h"
using namespace std;

int main() {

	Bank bank;
	Customer customer(1, "roqaya", "011202020", "roqaya@gmail.com");
	Customer& bankcustomer = bank.AddCustomer(customer);
	bank.CreateSavingAccount(5000, bankcustomer, 10, 1000);
	bank.CreateCurrentAccount(3000, bankcustomer, 2000);
	bankcustomer.DisplayInfo();

	return 0;
}