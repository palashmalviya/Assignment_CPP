// Write a class to find volume of a Cylinder by using following members.(volume of Cylinder=3.14 * radius * radius *height) ( use modular approach) 
// Class having following member functions:
// Cylinder()
// Cylinder(double radius, double height)
// getVolume()
// printVolume()

// Initialize members using constructor member initializer list.

#include<iostream>
#include"headerq1.h"
#include"sourceq1.cpp"

using namespace std;


int main()
{  
  cout<<"\n\n";
  int choice;
  cylinder cy;
  
      do
    {
        cout<<"\n\n\n------------------Option Menu------------------";
        cout<<"\n\t 1.  Display Parameterless Constructor cylinder() Volume";
        cout<<"\n\t 2.  Display Parameterized Constructor cylinder(1,1) Volume";
        cout<<"\n\t 3.  Enter Radius and Height";
        cout<<"\n\t 4.  Display Volume of Manual Value";
     
        cout<<"\n\t 0.  Exit";

        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1 :
            ::cylinder();
            break;

        case 2 :

            ::cylinder(1.0,1.0); 
            break;

        case 3 :
            cy.getvolume();
            break;

        case 4 :
            cy.printvolume();
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
