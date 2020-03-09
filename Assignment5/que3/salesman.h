
#ifndef SALESMAN_H_
#define SALESMAN_H_

#include "employee.h"

class salesman : virtual public employee
{
private:
    float comm;
public:
    
    salesman();
    salesman(int id,float sal,float comm);
    float get_comm();
    void set_comm(float comm);
    void display();
    void accept();
protected:
    void display_salesman();
    void accept_salesman();
    
};





#endif