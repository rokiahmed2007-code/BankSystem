#pragma once
#include <iostream>

using namespace std;

class Customer
{
private:
	int customerID;
	string name;
	string phonenumber;
	string email;

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

};

