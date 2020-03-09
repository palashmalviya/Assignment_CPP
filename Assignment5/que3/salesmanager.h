
#ifndef SALESMANAGER_H_
#define SALESMANAGER_H_

#include "manager.h"
#include"salesman.h"

class salesmanager : virtual public manager,virtual public salesman
{
public:
    
    salesmanager();
    salesmanager(int,float,float,float);
    void display();
    void accept();
    
};

#endif