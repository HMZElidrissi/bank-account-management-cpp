//
// Created by hamza on 3/20/24.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(int accountNumber, float initialBalance, float interestRate, int nb_years) : Account(accountNumber, initialBalance) {
    this->interestRate = interestRate;
    this->nb_years = nb_years;
}

float SavingsAccount::calculateBalance() {
    float balance = initialBalance;
    for (int i = 0; i < nb_years; i++) {
        balance += balance * interestRate;
    }
    return balance;
}
