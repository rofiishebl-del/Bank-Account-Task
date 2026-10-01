#include <bits/stdc++.h>
// #include "CheckingAccount.h"
// #include "SavingAccount.h"
//#include"BankAccount.cpp"
#include "BankAccount.cpp"
using namespace std;

int main() {
    
    //==
 BankAccount b1(120,"ali",6000);
BankAccount b2(120,"ali",6000);
if(b1==b2)cout<<"SAME\n";
else cout<<"Different\n";
//+
BankAccount b3=b1+b2;
cout<<b3.get_balance()<<"\n";
//copy
BankAccount b4(b1);  //! copied
b4.print();
//transfer
b1.Transfer(b2,2000);
cout<<b1.get_balance()<<"\n";
cout<<b2.get_balance()<<"\n";
//count
cout<<b1.Total_Number();






    return 0;
}