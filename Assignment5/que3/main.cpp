#include<iostream>
#include"employee.h"
#include"employee.cpp"
#include"menuemployee.cpp"
#include"menumanager.cpp"
#include"manager.h"
#include"manager.cpp"
#include"menusalesman.cpp"
#include"salesman.h"
#include"salesman.cpp"
#include"menusales_manager.cpp"
#include"salesmanager.h"
#include"salesmanager.cpp"

using namespace std;

int main()
{   
    salesmanager smgr;
      int choice;
   do
   {
        cout<<"\n\n\n------------------Option Menu------------------\n";
        cout<<"\n\t 1.  Enter Detail Of Employee ";
        cout<<"\n\t 2.  Display Details of Employee";
        // cout<<"\n\t 3.  Employee ";
        // cout<<"\n\t 4.  Manager";
        // cout<<"\n\t 5.  Salesman ";
        // cout<<"\n\t 6.  Manager";

           
        cout<<"\n\t 0.  Exit";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

     switch (choice)
     {  
        case 1 :
            
            smgr.accept();
            break;
        
        case 2 :
            
            smgr.display();
            break;

        // case 3:
        //     menuemployee();
        //     break;

        // case 4 :
        //     menumanager();
        //     break;

        // case 5 :
        //     menusalesman();
        //     break;
    
        // case 6 :
        //     menusales_manager();
        //     break;

        case 0 :
            cout<<"Exiting.......";
            break;

        default:
            cout<<"Wrong Input.....";
            break;
    }
    } while (choice!=0);
   
    return 0;
}