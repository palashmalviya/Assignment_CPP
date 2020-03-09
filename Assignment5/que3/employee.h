
#ifndef SALES_MANAGER_H_
#define SALES_MANAGER_H_

class employee
{
private:
    int id;
    float sal;
public:
    
    employee();
    employee(int id,float sal);
    int get_id();
    void set_id(int id);
    float get_salary();
    void set_salary(float salary);
    void display();
    void accept();
};



#endif