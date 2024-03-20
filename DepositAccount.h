//
// Created by hamza on 3/20/24.
//

#ifndef BANK_ACCOUNT_MANAGEMENT_CPP_DepositAccount_H
#define BANK_ACCOUNT_MANAGEMENT_CPP_DepositAccount_H
#include "Account.h"


class DepositAccount: public Account{
    float *oper;
    int nb_max;
    int nb_cour;
    public:
        DepositAccount(int, float, int);
        DepositAccount& operator += (float);
        DepositAccount& operator -= (float);
        float& operator[](int);
        ~DepositAccount();
        float calculateBalance();
        friend void editBalance(Account *c);
};


#endif //BANK_ACCOUNT_MANAGEMENT_CPP_DepositAccount_H
