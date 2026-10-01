Bank Management System (C++):

A modular C++ Console Application built to manage bank accounts using Object-Oriented Programming (OOP) concepts.

Features:
- **Account Types**: Savings Account (with minimum balance checks) and Checking Account (with overdraft limit validation).
- **Core Operations**: Account Creation, Deposit, Withdrawal, and Display Account Details.
- **Robust Design**: Header guard protection (`#pragma once`), pure virtual functions, and method overriding.

OOP Concepts Applied:
- **Encapsulation**: Protected and private attributes managed via getters and setters.
- **Inheritance**: Derived classes (`SavingAccount`, `CheckingAccount`) extending base class (`Bank`).
- **Polymorphism**: Abstract class with pure virtual functions (`Withdraw`, `display`).

##  How to Compile & Run
```bash
g++ firstOopPro.cpp -o BankSystem
./BankSystem