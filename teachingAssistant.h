#include"Employee.h"
#include"student.h"
class teachingAssistant :  public student , public employee{
   public:
   teachingAssistant(){};
teachingAssistant(string n,string g,double sa,string w,string d,string r):employee(n,g,sa),student(w,d,r){

}
void display(){
    employee::display();
    student::display();
}




};