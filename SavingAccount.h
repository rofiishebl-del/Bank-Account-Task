#include"BankManagmentAccout.h"
class SavingAccount : public Bank{
    private:
      double Interest_Rate;
      double Minimum_Balance;
    public:
    SavingAccount(){};
      SavingAccount(int AN,string HN ,double B,double IR,double MB):Bank(AN,HN,B){
        Interest_Rate=IR;
        Minimum_Balance=MB;
}
void set_Interest_Rate(double IR){
        Interest_Rate=IR;
    }
    double get_Interest_Rate()const{
        return Interest_Rate;
    }
    void set_Minimum_Balance(double MB){
        Minimum_Balance=MB;
}
 double get_Minimum_Balance()const{
      return  Minimum_Balance;
}
void applyInterest() {
    Balance += Balance * Interest_Rate;
}
// Overridden Functions
   void Withdraw(double w){
    
        if(Balance-w<Minimum_Balance )cout << "Error: Insufficient funds. Cannot exceed the minimum balance limit of " << Minimum_Balance << ".\n";
        else {Balance-=w;cout<<"Withdrawal successful! New balance: "<<Balance<<"\n";}
    }
    void display(){
      cout<<"--- Account Details ---\n";
        cout<<"Account Type: Savings Account\n";
        cout<<"AccountNumber = "<<AccountNumber<<"\n";
        cout<<"AccountHolderName = "<<AccountHolderName<<"\n";
        cout<<"Balance = "<<Balance<<"\n";
        cout<<"Interest_Rate = "<<Interest_Rate*100<<"%\n";
        cout<<"Minimum_Balance = "<<Minimum_Balance<<"\n";
    }



};