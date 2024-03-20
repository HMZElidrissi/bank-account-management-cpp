//
// Created by hamza on 3/20/24.
//

#ifndef BANK_ACCOUNT_MANAGEMENT_CPP_SAVINGSACCOUNT_H
#define BANK_ACCOUNT_MANAGEMENT_CPP_SAVINGSACCOUNT_H
#include "Account.h"


class SavingsAccount: public Account {
    float interestRate;
    int nb_years;
    public:
        SavingsAccount(int, float, float, int);
        float calculateBalance();
        friend void editBalance(Account *c);
};


#endif //BANK_ACCOUNT_MANAGEMENT_CPP_SAVINGSACCOUNT_H
