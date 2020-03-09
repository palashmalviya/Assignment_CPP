#include"employee.h"
#include"person.h"
#include"iostream"
#include"cstring"
#include"date.h"
using namespace std;



employee::employee()
{ 
    date dmy;
    this->set_name("DEFAULT");
    this->set_addr("DEFAULT");
    this->set_birth_date(dmy);
    this->id=0;
    this->sal=0.0;
    this->dept[40]=NULL;
    // strcpy(this->dept,"NULL");
    this->joining.set_day(0);
    this->joining.set_month(0);
    this->joining.set_year(0);

}
employee::employee(char* name,char* addr,date birth_date,int id,float sal,char* dept,date joining)
{
    this->set_name(name);
    this->set_addr(addr);
    this->set_birth_date(birth_date);
    this->id=id;
    this->sal=sal;
    strcpy(this->dept,dept);
    this->joining=joining;
    

}
//---------------------------------GET ID--------------------------------------
    
    int employee::get_id()
    {
       return this->id;
    }

//--------------------------GET SALARY---------------------------------------------
    
    float employee::get_sal()
    {
        return this->sal;
    }

//---------------------GET DEPARTMENT------------------------------------------
   
    char* employee::get_dept()
    {
     return this->dept;   
    }
//-----------------------SET ID-------------------------------------  
    
    void employee::set_id(int id)
    {
        
        this->id=id;
    }

//------------------------SET SALARY-------------------------------------
    
    void employee::set_sal(float sal)
    {
        this->sal=sal;
    }

//------------------------------SET DEPARTMENT----------------------
    
    void employee::set_dept(char* dept)
    {
         strcpy(this->dept,dept);
    }
//------------------------------------DATE--------------------------------
    date employee::get_joining_date()
    {
        this->joining.display();
    }


    void employee::set_joining_date(date)
    {
        this->joining.accept();
    }


    void employee::display()
    {   char *name,*addr;
        date dmy; 
        name=get_name();
        addr=get_addr();
        dmy=get_birth_date();
        cout<<"\n\n\tEmployees Details ";
        cout<<"\n--------------------------------------";
        cout<<"\n\tEmployee Name : "<<name;
        cout<<"\n\tEmployee Address : "<<addr;
        cout<<"\n\tEmployee BirthDate ";dmy.display();
        cout<<"\n\tEmployee ID : "<<this->id;
        cout<<"\n\tEmployee Sal : "<<this->sal;
        cout<<"\n\tEmployee Deaprtment : "<<this->dept;
        cout<<"\n\tJoining  ";this->joining.display();

    }

    void employee::accept()
    {
        char *name=new char[30],*addr=new char[100];
        date dmy; 
        char *dept=new char[30];
        cout<<"\n\n\tEnter Employee Details ";
        cout<<"\n--------------------------------------";
        cout<<"\nEnter Employee Name : ";
        cin>>name;
        set_name(name);
        cout<<"\nEnter Employee Address : ";
        cin>>addr;
        set_addr(addr);
        cout<<"\nEnter Employee BirthDay : ";
        dmy.accept();
        cout<<"\nEnter Employee ID : ";
        cin>>this->id;
        cout<<"\nEnter Employee Sal : ";
        cin>>this->sal;
        cout<<"\nEnter Employee Deaprtment : ";
        cin>>dept;
        strcpy(this->dept,dept);
        cout<<"\nEnter Joining ";  
        this->joining.accept(); 
    }