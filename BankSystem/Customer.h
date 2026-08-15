#pragma once
#include <iostream>
#include<vector>
#include"SavingAccount.h"
#include"CurrentAccount.h"

using namespace std;

class Customer
{
private:
	int customerID;
	string name;
	string phonenumber;
	string email;
	vector<SavingAccount> savingaccounts;
	vector<CurrentAccount> currentaccounts;


public:
	 Customer(int customerID, string name, string phonenumber, string email);
	 int getCustomerID();
	 string getName();
	 string getPhoneNumber();
	 string getEmail();

	 void setName(string name);
	 void setPhoneNumber(string phonenumber);
	 void setEmail(string email);
	 void DisplayInfo();

	 void AddSavingAccount(SavingAccount& account);
	 void AddCurrentAccount(CurrentAccount& account);
};

