 #include<iostream>
 #include<cstring>
#include"que2.h"
using namespace std;

    address::address(){
        this->building[30]=NULL;
        this->street[30]=NULL;
        this->city[20]=NULL;        
        this->pin=NULL;
    }
    address::address(char* building,char* street,char* city,int pin){
       

       strcpy(this->building,building);
       strcpy(this->street,street);
       strcpy(this->city,city);
       this->pin=pin;
    }
//------------------------------------ACCEPT--------------------------------------
   void address::accept()
   { 
       char *building= new char[30],*street= new char[30],*city= new char[20];
       cout<<"\n\n\tEnter Address";
       cout<<"\n-----------------------------------------";
       cout<<"\n\tEnter Building Name : ";
       cin>>building;
       strcpy(this->building,building);

       cout<<"\n\tEnter Street : ";
       cin>>street;
       strcpy(this->street,street);

       cout<<"\n\tEnter City : ";
       cin>>city;
       strcpy(this->city,city);

       

       cout<<"\n\tEnter Pin : ";
       cin>>this->pin;
   }
//----------------------------------DISPLAY-------------------------------------------------

    void address::display()
    {
        cout<<"\n\nAddress : "<<this->building<<", "<<this->street<<", "<<this->city<<", "<<this->pin;
    }
    char* address::get_building()
    {
        return building;
    }
    char* address::get_street()
    {
        return street;
    }
    char* address::get_city()
    {
        return city;
    }
    int address::get_pin()
    {
        return pin;
    }
    void address::set_building(char* builing)
    {
        strcpy(this->building,building);
    }
    void address::set_street(char* street)
    {
        strcpy(this->street,street);
    }
    void address::set_ciyt(char* city)
    {
        strcpy(this->city,city);
    }
    void address::set_pin(int pin)
    {
        this->pin=pin;
    }