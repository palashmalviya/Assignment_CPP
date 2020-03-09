#include<iostream>
#include<cstring>
#include"employee.h"
#include"person.h"
#include"person.cpp"
#include"employee.cpp"
#include"date.h"
#include"date.cpp"
#include"menu1.cpp"
#include"menu2.cpp"

using namespace std;

int main()
{     
   int choice;
   
   

   do
   {
        cout<<"\n\n\n------------------Option Menu------------------\n";
        cout<<"\n\t 1.  Employee ";
        cout<<"\n\t 2.  Person";
           
        cout<<"\n\t 0.  Exit";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

     switch (choice)
     {  
        case 1 :
            menu1();
            break;

        case 2 :
            menu2();
            break;
    
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

