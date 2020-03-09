#include<iostream>
#include"salesman.h"
#include"employee.h"
using namespace std;


    salesman::salesman()
    {
      this->comm=0.0;
    }

    salesman::salesman(int id,float sal,float comm):employee(id,sal)
    {
        this->comm=comm;        
    }

    
    float salesman::get_comm()
    {
        return this->comm;
    }

    void salesman::set_comm(float comm)
    {
        this->comm=comm;
    }
    void salesman::display()
    {
        cout<<"\n\tsalesman Details";
        cout<<"\n\t----------------------------";
        cout<<"\n\tcomm: "<<this->comm;
        this->employee::display();
    }
    void salesman::accept()
    {
        cout<<"\n\tEnter salesman Details";
        cout<<"\n\t----------------------------";
        cout<<"\n\tEnter comm: ";
        cin>>this->comm;
        this->employee::accept();
    }
    void salesman::display_salesman()
    {
        cout<<"\n\tCommission : "<<this->comm;
        
    }
    void salesman::accept_salesman()
    {
        cout<<"\n\tEnter comm: ";
        cin>>this->comm;

    }