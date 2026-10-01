#pragma once
#include<iostream>
using namespace std;
#include<string>
class Bank{

    protected:
      int AccountNumber;
      string AccountHolderName;
      double Balance;
    public:
    Bank(){};
     Bank(int AN,string HN ,double B){
        AccountNumber=AN;
        AccountHolderName=HN;
        Balance=B;
    }
    virtual ~Bank() {}
     void set_AccountNumber( int AN){
           AccountNumber=AN;
     }
      int  get_AccountNumber( )const{
         return  AccountNumber; 
     }
     void set_AccountHolderName( string HN){
        AccountHolderName=HN;
     }
      string get_AccountHolderName()const{
       return AccountHolderName;
     }
     void set_Balance(double B){
        Balance=B;
     }
     double get_Balance()const{
        return Balance;
     }
     void deposit(double w){
      Balance+=w;
         
     }
     virtual void Withdraw(double w)=0;
     virtual void display()=0;
    };
