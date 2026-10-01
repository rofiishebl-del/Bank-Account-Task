#include "BankAccount.h"
int BankAccount::count=0;
BankAccount::BankAccount():AccountNumber(0),AccountHolderName(""),Balance(0.0)
{
    count++;
}

void BankAccount::Deposit(int dnum)
{
    Balance+=dnum;
}

void BankAccount::Deposit(double dnum)
{
    Balance+=dnum;
}

void BankAccount::Withdraw(int wnum)
{
    if(wnum<=Balance)Balance-=wnum;
}

void BankAccount::print() const
{
    cout << "Account Number: " << AccountNumber << "\n";
    cout << "Account Holder: " << AccountHolderName << "\n";
    cout << "Balance: " << Balance << "\n";
}

BankAccount BankAccount::operator+(const BankAccount &b1) const
{
    BankAccount result;
    result.Balance = Balance + b1.Balance;
    return result;
}

bool BankAccount::operator==(const BankAccount &b1) const
{
    return (AccountNumber == b1.AccountNumber && AccountHolderName == b1.AccountHolderName && Balance == b1.Balance);
}

int BankAccount::Total_Number()
{
    return count;
}

bool BankAccount::Transfer(BankAccount &b1, int mon)
{
    if (mon <= Balance) {
        Balance -= mon;
        b1.Balance += mon;
        return true;
    }
    cout << "Balance is less than money\n";
    return false;
}

BankAccount::~BankAccount()
{ 
    count--;
}

BankAccount::BankAccount(int num, string name, int money):AccountNumber(num),AccountHolderName(name),Balance(money)
{
    count++;
}

BankAccount::BankAccount(int num, string name):AccountNumber(num),AccountHolderName(name),Balance(0)
{
    count++;
}

void BankAccount::set_balance(double b)
{
    b=b;
}

double BankAccount::get_balance()const
{
    return Balance;
}

void BankAccount::set_AccountNumber(int a)
{ 
    AccountNumber=a;
}

int BankAccount::get_AccountNumber()const
{
    return AccountNumber;
}

void BankAccount::set_AccountHolderName(string h)
{
    AccountHolderName=h;
}

string BankAccount::get_AccountHolderName()const
{
    return AccountHolderName;
}
