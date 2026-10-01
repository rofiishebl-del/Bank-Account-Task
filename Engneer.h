//#include"Employee.h"
#include"sales.h"
class Engneer: public Employee{
    private:
    string spiciality;
    int Experience;
    int overtime_hours;
    float overtime_hours_rate;
    public:
    Engneer(string n,int id,double sa,string sp,int ex,int oh,float ohr):Employee(n,id,sa){
        spiciality=sp;
        Experience=ex;
        overtime_hours=oh;
        overtime_hours_rate=ohr;

    }
    double Get_TotalSallry(){
        return sallry+(overtime_hours*overtime_hours_rate);
    }
    void print(){
        Employee::print();
        cout<<"spiciality : "<<spiciality<<"\n"<<"Experience : "<<Experience<<"\n"<<"overtime_hours : "<<overtime_hours<<"\n"<<"overtime_hours_rate : "<<overtime_hours_rate<<"\n";
    }
};