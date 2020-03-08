

#ifndef PERSON_H_
#define PERSON_H_

#include "date.h"

class person {
private:
	char name[40];
    char addr[100];
	date birth_date;
public:
	person();
	person(char *name,char *addr,date& birth);
	char* get_name();
	void set_name(char *name);
    char* get_addr();
    void set_addr(char *addr);
	date get_birth_date();
	void set_birth_date(date& birth);
    void accept();
	void display();
};

#endif 