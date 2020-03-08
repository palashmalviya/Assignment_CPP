#include"employee.h"
#include"iostream"
#include"cstring"
#include"date.h"
using namespace std;



employee::employee()
{
    this->id=0;
    this->sal=0.0;
    this->dept[40]=NULL;
    // strcpy(this->dept,"NULL");
    this->joining.set_day(0);
    this->joining.set_month(0);
    this->joining.set_year(0);

}
employee::employee(int id,float sal,char* dept,date joining)
{
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
    {
        cout<<"\n\n\tEmployees Details ";
        cout<<"\n--------------------------------------";
        cout<<"\nEmployee ID : "<<this->id;
        cout<<"\nEmployee Sal : "<<this->sal;
        cout<<"\nEmployee Deaprtment : "<<this->dept;
        cout<<"\nJoining  ";this->joining.display();

    }

    void employee::accept()
    {
        char *dept=new char[30];
        cout<<"\n\n\tEnter Employee Details ";
        cout<<"\n--------------------------------------";
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