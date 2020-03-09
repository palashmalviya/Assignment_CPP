
#ifndef MANAGER_H_
#define MANAGER_H_

#include "employee.h"

class manager : virtual public employee
{
private:
    float bonus;
public:
    
    manager();
    manager(int id,float sal,float bonus);
    float get_bonus();
    void set_bonus(float bonus);
    void display();
    void accept();
protected:
    void display_manager();
    void accept_manager();
    
};





#endif