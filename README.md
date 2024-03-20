## Bank Account Management System in C++

This project implements a set of C++ classes to model different types of bank accounts, including:

* **Account:** The parent class representing a generic bank account with basic functionalities.
* **Savings Account:** A child class inheriting from `Compte` that may include features specific to savings accounts, such as interest calculations.
* **Checking Account:** Another child class inheriting from `Compte` that may represent checking accounts with unique functionalities.

**Features:**

* Deposit and withdraw funds from accounts.
* Display account balance (potentially with additional information in child classes).

**Future Development:**

* Implement additional functionalities like account transfers, interest calculations (for savings accounts), and transaction history.
* Explore error handling for invalid transactions or insufficient funds.
* Export account information to a file.

**Dependencies:**

* This project requires a C++ compiler that supports C++11 features (like inheritance and polymorphism). Most modern C++ compilers fulfill this requirement.
