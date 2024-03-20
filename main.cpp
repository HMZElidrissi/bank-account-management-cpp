#include <iostream>
#include "SavingsAccount.h"
#include "SavingsAccount.cpp"
#include "DepositAccount.h"
#include "DepositAccount.cpp"

using namespace std;

int main() {
    int max_number_of_operations;
    int accountNumber;
    float initialBalance;
    float rate;
    int number_of_years;
    int account_type, operation_type;
    Account *tab[20], *max_account;
    for (int i = 0; i < 20; i++) {
        cout << endl << "Enter the account N " << i + 1 << ":";
        do {
            cout << endl << "Do you want a deposit account (type 1) or a savings account (type 2) : ";
            cin >> account_type;
        } while (account_type != 1 && account_type != 2);

        if (account_type == 1) {
            cout << endl << "Enter the account number :";
            cin >> accountNumber;
            cout << endl << "Enter the initial balance :";
            cin >> initialBalance;
            cout << endl << "Enter the maximum number of operations :";
            cin >> max_number_of_operations;
            tab[i] = new DepositAccount(accountNumber, initialBalance, max_number_of_operations);

            for (int j = 0; j < max_number_of_operations; j++) {
                cout << endl << "If you want to withdraw an amount (type 1), otherwise type 2 (recharge account)? ";
                cin >> operation_type;
                DepositAccount *depositAccount;
                depositAccount = (DepositAccount*) tab[i];
                cout << endl << "Enter the amount :";
                cin >> initialBalance;
                if (operation_type == 1) (*depositAccount) -= initialBalance;
                else (*depositAccount) += initialBalance;

                cout << endl << "Do you want another operation : (1 yes/2 no)";
                cin >> operation_type;
                if (operation_type == 2) break;
            }
        } else {
            cout << endl << "Enter the account number :";
            cin >> accountNumber;
            cout << endl << "Enter the initial balance :";
            cin >> initialBalance;
            cout << endl << "Enter the rate:";
            cin >> rate;
            cout << endl << "Enter the number of years :";
            cin >> number_of_years;
            tab[i] = new SavingsAccount(accountNumber, initialBalance, rate, number_of_years);
        }
        cout << endl << "The Balance is: " << tab[i]->calculateBalance();
        cout << endl << "Do you want to add another account : (1 yes/2 no)";
        cin >> operation_type;
        if (operation_type == 2) break;
    }

    return 0;
}
