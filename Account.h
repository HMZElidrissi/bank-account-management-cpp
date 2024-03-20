//
// Created by hamza on 3/20/24.
//
#include <iostream>
using namespace std;

#ifndef BANK_ACCOUNT_MANAGEMENT_CPP_ACCOUNT_H
#define BANK_ACCOUNT_MANAGEMENT_CPP_ACCOUNT_H


class Account {
    protected:
        int accountNumber;
        float initialBalance;
    public:
        Account(int accountNumber, float initialBalance) {
            this->accountNumber = accountNumber;
            this->initialBalance = initialBalance;
        }
        friend ostream& operator<<(ostream &,const Account&);
        virtual float calculateBalance() = 0;
        friend void displayBalance(Account *c);
};

void moy_tab(Account **tab,int n){
    float moy=0;
    for(int i=0;i<n;i++){
        moy+=tab[i]->calculateBalance();
    }
    moy/=n;
    cout<<"The average balance is: "<<moy<<endl;
}

void max_tab(Account **tab,int n){
    float max=tab[0]->calculateBalance();
    for(int i=1;i<n;i++){
        if(tab[i]->calculateBalance()>max){
            max=tab[i]->calculateBalance();
        }
    }
    cout<<"The maximum balance is: "<<max<<endl;
}


#endif //BANK_ACCOUNT_MANAGEMENT_CPP_ACCOUNT_H
