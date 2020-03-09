#include<iostream>
#include"employee.h"
#include"person.h"

using namespace std;




void menu1()
{ 
    
    employee e;
   date d(1,1,0001);
   date d1(2,2,0002);
   employee("DEFAULT","DEFAULT",d1,1,1.0,"DEFAULT",d);
   

    int choice;
        do
    {
        cout<<"\n\n\n------------------Option Menu------------------\n";
        cout<<"\n\t 1.  Enter Employee";
        cout<<"\n\t 2.  Display Employee";
        cout<<"\n\t 3.  Set ID";
        cout<<"\n\t 4.  Set Salary";
        cout<<"\n\t 5.  Set Department";
        cout<<"\n\t 6.  Set Joining Date";
        cout<<"\n\t 7.  Get ID";
        cout<<"\n\t 8.  Get Salary";
        cout<<"\n\t 9.  Get Department";
        cout<<"\n\t 10. Get Joining Date";
        
           
        cout<<"\n\t 0.  Exit Employee Menu";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
//-----------------ENTER EMPLOYEE--------------------------
        case 1 :
        {
           e.accept();
            break;
        }
//---------------------DISPLAY EMPLOYEE-----------------------------
        case 2 :
        {
          e.display();
          break;
        }

//-----------------SET ID----------------------------------------
        case 3:
        {   
            int id;
            cout<<"\n\tEnter ID : ";  
            cin>>id;          
            e.set_id(id);
            break;
        }
//--------------------------SET SALARY--------------------------------
        case 4 :
        {
            float sal;
            cout<<"\n\tEnter Salary : ";  
            cin>>sal;           
            e.set_sal(sal);
            break;
        }
//----------------------------SET DEPARTMENT-----------------------------
        case 5 :
        {
            char dept[20];
            cout<<"\n\tEnter Department : ";  
            cin>>dept;             
            e.set_dept(dept);
            break;
        }
//------------------SET JOINING DATE----------------------

        case 6 :
        {              
            date d1;
            e.set_joining_date(d1);
            break;
        }
       
//-------------------------GET ID-------------------------------------
        case 7 :
        {
            int id;
            id=e.get_id();
            cout<<"\n\tEmployee ID : "<<id;
            break;
        }

//------------------GET SALARY-----------------------------
        case 8 :
        {
            float sal;
            sal=e.get_sal();  
            cout<<"\n\tSalary : "<<sal;   
            break;
        }

//-----------------------GET DEPARTMENT------------------------------------
         case 9 :
        {
            char *dept;
           dept=e.get_dept();    
           cout<<"\n\tDepartment : "<<dept;
            break;
        }
//----------------------------GET BIRTHDAY-----------------------------------------------------
        case 10:
        {   date d2;
            cout<<"\n\tDate of Joining : ";e.get_joining_date();
            break;
        }


        case 0 :
            cout<<"Exiting Employee Menu.......";
            break;

        default:
            cout<<"Wrong Input.....";
            break;
        }
    } while (choice!=0);
}