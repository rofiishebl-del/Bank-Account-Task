#include"BankManagmentAccout.h"
class CheckingAccount : public Bank{
    private:
      double Overdraft_Limit;
    public:
    CheckingAccount(){};
      CheckingAccount(int AN,string HN ,double B,double OL):Bank(AN,HN,B){
        Overdraft_Limit=OL;
      }
      void set_Overdraft_Limit(double OL){
        Overdraft_Limit=OL;
      }
      double get_Overdraft_Limit()const{
        return Overdraft_Limit;
      }
      // Overridden Functions
        void Withdraw(double w){
            
            if(w>Overdraft_Limit){cout << "Error: Transaction limit exceeded! Maximum allowed per withdrawal is " << Overdraft_Limit<< ".\n";}
            else if (w > Balance) {cout << "Error: Insufficient balance! Current balance is " << Balance << ".\n";}
            else {Balance-=w;cout<<"Withdrawal successful! New balance: "<<Balance<<"\n";}
        }
        void display(){
            cout<<"--- Account Details ---\n";
        cout<<"Account Type: Checking Account\n";
        cout<<"AccountNumber = "<<AccountNumber<<"\n";
        cout<<"AccountHolderName = "<<AccountHolderName<<"\n";
        cout<<"Balance = "<<Balance<<"\n";
       cout<<"Overdraft_Limit = "<<Overdraft_Limit<<"\n";
    }
       

};