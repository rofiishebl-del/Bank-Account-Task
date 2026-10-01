#pragma once
#include<iostream>
using namespace std;
#include<string>
class BankAccount{
    private:
    int AccountNumber;
    string AccountHolderName;
    double Balance;
    static int count;
    public:
    BankAccount();
    BankAccount(int num ,string name ,int money );
    BankAccount(int num ,string name  );
    void set_balance(double b);
    double get_balance()const;
    void set_AccountNumber(int a);
    int get_AccountNumber()const;
    void set_AccountHolderName(string h);
    string get_AccountHolderName()const;
   void Deposit(int dnum);
   void Deposit(double dnum);
   void Withdraw(int wnum);
   void print()const;
    BankAccount operator +(const BankAccount &b1)const;
   bool operator ==(const BankAccount &b1)const;
   static int Total_Number();
  bool Transfer (BankAccount &b1,int mon);
  ~BankAccount ();
    };