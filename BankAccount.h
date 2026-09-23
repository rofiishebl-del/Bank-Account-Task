#include<iostream>
using namespace std;
#include<string>

class BankAccount{
    private:
    int AccountNumber;
    string AccountHolderName;
    double Balance;
    public:
    BankAccount();
    BankAccount(int num ,string name ,int money );
    BankAccount(int num ,string name  );
   void Deposit(int dnum);
   void Withdraw(int wnum);
   void print();

    





};