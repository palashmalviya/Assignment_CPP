#include<iostream>
#include"salesmanager.h"
#include"salesman.h"
#include"employee.h"
#include"manager.h"


salesmanager::salesmanager()
{

}


salesmanager::salesmanager(int id,float sal,float bonus,float comm)
{
    
    
}

void salesmanager::display()
{
this->employee::display();
this->manager::display_manager();
this->salesman::display_salesman();

}

void salesmanager::accept()
{
    this->employee::accept();
    this->manager::accept_manager();
    this->salesman::accept_salesman();
}

