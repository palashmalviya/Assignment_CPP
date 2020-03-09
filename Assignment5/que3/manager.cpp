#include<iostream>
#include"manager.h"
#include"employee.h"
using namespace std;


    manager::manager()
    {
      this->bonus=0.0;
    }

    manager::manager(int id,float sal,float bonus):employee(id,sal)
    {
        this->bonus=bonus;        
    }

    
    float manager::get_bonus()
    {
        return this->bonus;
    }

    void manager::set_bonus(float bonus)
    {
        this->bonus=bonus;
    }
    void manager::display()
    {
        cout<<"\n\tManager Details";
        cout<<"\n\t----------------------------";
        cout<<"\n\tBonus: "<<this->bonus;
        this->employee::display();
    }
    void manager::accept()
    {
        cout<<"\n\tEnter Manager Details";
        cout<<"\n\t----------------------------";
        cout<<"\n\tEnter Bonus: ";
        cin>>this->bonus;
        this->employee::accept();
    }
    void manager::display_manager()
    {
        cout<<"\n\tBonus: "<<this->bonus;
    }
    void manager::accept_manager()
    {
        cout<<"\n\tEnter Bonus: ";
        cin>>this->bonus;
    }