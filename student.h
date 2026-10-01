#include<iostream>
#include"string"
using namespace std;
class student{
    private:
    string name;
    string depart;
    string reseach;
    public:
    student():name("unknow"),depart("unknow"),reseach("unknow"){};
    student(string n,string d,string r):name(n),depart(d),reseach(r){};
    void setname(string n){
        name=n;
    }
    string getname(){
        return name;
    }
    void setdepart(string d){
        depart=d;
    }
    string getdepart(){
        return depart;
    }
    void setreseach(string r){
        reseach=r;
    }
    string getreseach(){
        return reseach;
    }
    void display(){
        cout<<"name = "<<name<<"\n";
        cout<<"Department = "<<depart<<"\n";
        cout<<"reseach = "<<reseach<<"\n";
    }

};