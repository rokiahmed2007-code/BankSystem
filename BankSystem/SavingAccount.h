#pragma once
#include "Account.h"

class SavingAccount : public Account{

    double interestRate;
    double minimumBalance;

public:
    SavingAccount(int accountnumber, double balance, Customer& owner, double interestRate, double minimumBalance);
    void AddInterestRate();
    void Withdraw(double amount)override;

};
                    


