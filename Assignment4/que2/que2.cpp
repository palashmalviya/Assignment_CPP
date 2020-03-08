#include<iostream>
#include"que2.h"
#include"que2_defi.cpp"
using namespace std;

int main()
{
    int choice;
    address a;
    address a1("YASHWIN","PHASE2","Pune",456666);  
    cout<<"\n\tDefault Address By Parameterized Constructor";
    a1.display();
    

    do
    {
        cout<<"\n\n\n------------------Option Menu------------------\n";
        cout<<"\n\t 1.  Enter Address";
        cout<<"\n\t 2.  Display Address";
        cout<<"\n\t 3.  Set Building";
        cout<<"\n\t 4.  Set Street";
        cout<<"\n\t 5.  Set City";
        cout<<"\n\t 6.  Set Pin";
        cout<<"\n\t 7.  Get Building";
        cout<<"\n\t 8.  Get Street";
        cout<<"\n\t 9.  Get City";
        cout<<"\n\t 10. Get Pin";
        
           
        cout<<"\n\t 0.  Exit";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
//-----------------ENTER ADDRESS--------------------------
        case 1 :
        {
           a.accept();
            break;
        }
//---------------------DISPLAY ADDRESS-----------------------------
        case 2 :
        {
          a.display();
          break;
        }

//-----------------SET BUILDING----------------------------------------
        case 3:
        {   
            char ch[30];
            cout<<"\n\tEnter Building : ";  
            cin>>ch;          
            a.set_building(ch);
            break;
        }
//--------------------------SET STREET--------------------------------
        case 4 :
        {
            char ch[30];
            cout<<"\n\tEnter Street : ";  
            cin>>ch;           
            a.set_street(ch);
            break;
        }
//----------------------------SET CITY-----------------------------
        case 5 :
        {
            char ch[20];
            cout<<"\n\tEnter City : ";  
            cin>>ch;             
            a.set_ciyt(ch);
            break;
        }
//------------------SET PIN----------------------

        case 6 :
        {
            int ch;
            cout<<"\n\tEnter Pin : ";    
            cin>>ch;        
            a.set_pin(ch);  
            break;
        }
       
//-------------------------GET BUILDING-------------------------------------
        case 7 :
        {
            char *ch;      
            ch=a.get_building();
            cout<<"Building : "<<ch;
            break;
        }

//------------------GET STREET-----------------------------
        case 8 :
        {
            char *ch;
            ch=a.get_street();  
            cout<<"Street : "<<ch;   
            break;
        }

//-----------------------GET CITY------------------------------------
         case 9 :
        {
            char *ch;
           ch=a.get_city();    
           cout<<"Building : "<<ch;
            break;
        }
//----------------------------GET PIN-----------------------------------------------------
        case 10:
        {   int ch;
            ch=a.get_pin();
            cout<<"Pin : "<<ch;
            break;
        }


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
