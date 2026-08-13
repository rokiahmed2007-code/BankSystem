#include "Customer.h"
#include<iostream>

using namespace std;

Customer::Customer(int customerID = 0, string name = "unknown name", string phonenumber = "unknown phone num.", string email = "unknown Email") {
	this->customerID = customerID;
	this->name = name;
	this->phonenumber = phonenumber;
	this->email = email;

}

int Customer::getCustomerID() { return customerID; }
string Customer::getName() { return name; }
string Customer::getPhoneNumber() { return phonenumber; }
string Customer::getEmail() { return email; }

void Customer::setName(string name) { this->name = name; }
void Customer::setPhoneNumber(string phonenumber) { this->phonenumber = phonenumber; }
void Customer::setEmail(string email) { this->email = email; }

void Customer::DisplayInfo() {
	cout << " Customer Information \n";
	cout << "Name :" << name << endl;
	cout << "ID :" << customerID << endl;
	cout << "Phone Number :" << phonenumber << endl;
	cout << "E-mail :" << email << endl;
}
