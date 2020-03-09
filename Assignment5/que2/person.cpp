
#include <iostream>
#include <cstring>
#include "person.h"
using namespace std;


person::person() 
{
	strcpy(this->name," NULL");
    strcpy(this->addr,"NULL");
    this->birth_date.set_day(0);
    this->birth_date.set_month(0);
    this->birth_date.set_year(0);
}

person::person(char *name,char *addr, date& birth_date) 
{
	strcpy(this->name, name);
    strcpy(this->addr,addr);
	this->birth_date = birth_date;
}
//---------------------------------ACCEPT ALL PERSON-------------------------------------
void person::accept() 
{
	cout << "\n\tEnter Name : ";
	cin >>this->name;
	cout<<"\n\tEnter Address : ";
    cin>>this->addr;
    cout<<"\n\tEnter Date OF Birth";
	this->birth_date.accept();
}
//-----------------------------------DISPLAY ALL PERSON---------------------------------------

void person::display() 
{
	cout<<"\n\tName : " << this->name;
    cout<<"\n\tAddress : "<<this->addr;
	cout<<"\n\tBirthDay : ";
	this->birth_date.display();
}

//----------------------------SET NAME------------------------------
void person::set_name(char *name) 
{
	strcpy(this->name, name);
}

//---------------------------GET NAME-----------------------------------
char* person::get_name() 
{
	return this->name;
}

//--------------------------SET ADDRESS-----------------------------------
void person::set_addr(char *addr)
{
    strcpy(this->addr,addr);
}

//------------------------GET ADDRESS-----------------------------------
char* person::get_addr()
{
    return this->addr;
}
//------------------------SET BIRTHDAY----------------------------------

void person::set_birth_date(date& birth_date) 
{
	this->birth_date = birth_date;
}
//---------------------------GET BIRTHDAY--------------------------------

date person::get_birth_date() 
{
	return this->birth_date;
}

