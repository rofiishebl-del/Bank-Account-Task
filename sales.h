#include"Employee.h"
class sales :public Employee {
    private:
    float Gross_Sales;
    float Commission_Rate;
    public:
    sales(string n,int id,double sa,float gs,float cr):Employee(n,id,sa){
        Gross_Sales=gs;
        Commission_Rate=cr;
        
    }//لازم يتعملها override
   double Get_TotalSallry(){
    return sallry+(Gross_Sales*Commission_Rate);

   }
   void print(){
    Employee::print();
    cout<<"Gross_Sales : "<<Gross_Sales<<"\n"<<"Commission_Rate : "<<Commission_Rate<<"\n";

   }
};
