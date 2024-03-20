//
// Created by hamza on 3/20/24.
//

#include "DepositAccount.h"

DepositAccount::DepositAccount(int accountNumber, float initialBalance, int nb_max) : Account(accountNumber, initialBalance) {
    this->nb_max = nb_max;
    this->oper = new float[nb_max];
    this->nb_cour = 0;
}

DepositAccount& DepositAccount::operator+=(float amount) {
    if (nb_cour < nb_max) {
        oper[nb_cour] = amount;
        nb_cour++;
    }
    return *this;
}

DepositAccount& DepositAccount::operator-=(float amount) {
    if (nb_cour < nb_max) {
        oper[nb_cour] = -amount;
        nb_cour++;
    }
    return *this;
}

float& DepositAccount::operator[](int index) {
    return oper[index];
}

DepositAccount::~DepositAccount() {
    delete[] oper;
}

float DepositAccount::calculateBalance() {
    float balance = initialBalance;
    for (int i = 0; i < nb_cour; i++) {
        balance += oper[i];
    }
    return balance;
}
