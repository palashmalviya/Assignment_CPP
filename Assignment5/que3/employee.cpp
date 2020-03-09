#include<iostream>
#include"employee.h"
using namespace std;

    employee::employee()
    {
        this->id=0;
        this->sal=0.0;
    }
    employee::employee(int id,float sal)
    {
        this->id=id;
        this->sal=sal;
    }
    
    int employee::get_id()
    {
        return this->id;
    }
    void employee::set_id(int id)
    {
        this->id=id;
    }
    float employee::get_salary()
    {
        return this->sal;
    }
    void employee::set_salary(float salary)
    {
        this->sal=sal;
    }
    void employee::display()
    {
        cout<<"\n\tEmployee Details";
        cout<<"\n\t----------------------------";
        cout<<"\n\tEmployee ID : "<<this->id;
        cout<<"\n\tEmployee Salary : "<<this->sal;
    
    }
    void employee::accept()
    {
        cout<<"\n\tEnter Employee Details";
        cout<<"\n\t----------------------------";
        cout<<"\n\tEnter Employee ID : ";
        cin>>this->id;
        cout<<"\n\tEnter Employee Salary : ";
        cin>>this->sal;
        
    }


