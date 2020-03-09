
#ifndef employee_H_
#define employee_H_
#include"date.h"
#include"person.h"



class employee : public person
{
private:
    int id;
    float sal;
    char dept[24];
    date joining;
public:
    employee();
    employee(char*,char* ,date ,int ,float,char*,date);
    int get_id();
    void set_id(int);
    float get_sal();
    void set_sal(float);
    char* get_dept();
    void set_dept(char*);
    date get_joining_date();
    void set_joining_date(date);
    void display();
    void accept();
};


#endif