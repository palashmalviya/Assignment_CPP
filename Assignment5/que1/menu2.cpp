#include<iostream>
#include"person.h"




void menu2()
{
    person p;
    int choice;
        do
    {
        cout<<"\n\n\n------------------Option Menu------------------\n";
        cout<<"\n\t 1.  Enter Person";
        cout<<"\n\t 2.  Display Person";
        cout<<"\n\t 3.  Set Name";
        cout<<"\n\t 4.  Set Address";
        cout<<"\n\t 5.  Set BirthDay";
        cout<<"\n\t 6.  Get Name";
        cout<<"\n\t 7.  Get Address";
        cout<<"\n\t 8.  Get BirthDate";
           
           
        cout<<"\n\t 0.  Exit To Person";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
//-----------------ENTER PERSON--------------------------
        case 1 :
        {
           p.accept();
            break;
        }
//---------------------DISPLAY PERSON-----------------------------
        case 2 :
        {
          p.display();
          break;
        }

//-----------------SET NAME----------------------------------------
        case 3:
        {   
            char name[40];
            cout<<"\n\tEnter Name : ";  
            cin>>name;   
            p.set_name(name);
            break;
        }
//--------------------------SET ADDRESS--------------------------------
        case 4 :
        {
            char addr[100];
            cout<<"\n\tEnter Address : ";  
            cin>>addr;           
            p.set_addr(addr);
            break;
        }
//----------------------------SET BIRTHDAY-----------------------------
        case 5 :
        {
            int day,month,year;
            cout<<"\n\tEnter Birthdate : ";    
            cin>>day; 
            cin>>month;
            cin>>year;       
            date d1(day,month,year);
            p.set_birth_date(d1);
            break;
        }
//------------------GET NAME----------------------

        case 6 :
        {
            char *name;
            name=p.get_name();
            cout<<"\n\tName : "<<name;
            break;
        }
       
//-------------------------GET ADDRESS-------------------------------------
        case 7 :
        {
            char *addr;      
            addr=p.get_addr();
            cout<<"\n\tAddress : "<<addr;
            break;
        }

//------------------GET BIRTHDATE-----------------------------
        case 8 :
        {
            date d2;
            d2=p.get_birth_date();
            cout<<"\n\tBirthDate : ";d2.display();
            break;
        }

        case 0 :
            cout<<"Exiting Person Menu.......";
            break;

        default:
            cout<<"Wrong Input.....";
            break;
        }
    } while (choice!=0);
}