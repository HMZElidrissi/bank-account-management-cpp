//
// Created by hamza on 3/20/24.
//

#include "Account.h"

ostream& operator<<(ostream& os,const Account& c) {
    os<<endl<<"Account Number : ";
    os<<c.accountNumber;
    os<<endl<<"Initial Balance : ";
    os<<c.initialBalance;
    return os;
}

void displayBalance(Account *c) {
    cout << "The balance is: " << c->calculateBalance() << endl;
}