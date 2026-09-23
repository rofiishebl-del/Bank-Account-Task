#include "BankAccount.h"

BankAccount::BankAccount():AccountNumber(0),AccountHolderName(""),Balance(0.0)
{
}

void BankAccount::Deposit(int dnum)
{
    Balance+=dnum;
}

void BankAccount::Withdraw(int wnum)
{
    if(wnum<=Balance)Balance-=wnum;
}

void BankAccount::print()
{
    cout<<"Account number : "<<AccountNumber<<"\n";
    cout<<"Account holder name : "<<AccountHolderName<<"\n";
    cout<<"Balance : "<<Balance<<"\n";
}

BankAccount::BankAccount(int num, string name, int money):AccountNumber(num),AccountHolderName(name),Balance(money)
{
}

BankAccount::BankAccount(int num, string name):AccountNumber(num),AccountHolderName(name),Balance(0)
{
}
