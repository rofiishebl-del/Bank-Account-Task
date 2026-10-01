#include<iostream>
#include<string>
using namespace std;
//ال class مش abstract
class Employee{
    protected: //كده بخلى لل derived class اكسس على الatributes بتاعة الbase class لو خلتيها private h h;ss
    string name;
    int Emp_id;
    double sallry;
    public:
    Employee():name("unknow"),Emp_id(0),sallry(0.0){ 

    }
    Employee(string n,int id,double sa):name(n),Emp_id(id),sallry(sa){

    }
    virtual  double  Get_TotalSallry()=0;//pure virtual function لازم يتعملها override

    virtual void print(){//مش لازم يتعملهاoverride
        cout<<"name : "<<name<<"\n"<<"Emp_id : "<<Emp_id<<"\n"<<"sallry : "<<sallry<<"\n";
    }
};