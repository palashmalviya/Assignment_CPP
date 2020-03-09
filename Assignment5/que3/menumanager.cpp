// #include<iostream>
// #include"manager.h"
// using namespace std;

// void menumanager()
// { 
//     int choice;
//     manager m;
//     //manager m1(0,0.00,0.0);
//         do
//     {
//         cout<<"\n\n\n------------------Option Menu------------------\n";
//         cout<<"\n\t 1.  Enter Manager";
//         cout<<"\n\t 2.  Display Manager";
//         cout<<"\n\t 3.  Set Bonus";
//         cout<<"\n\t 4.  Get Bonus";
//         cout<<"\n\t 5.  Display Manager";
//         cout<<"\n\t 6.  Accept Manager";
       
        
           
//         cout<<"\n\t 0.  Exit Employee Menu";
//         cout<<"\n_________________________________";
//         cout<<"\n\t Enter Choice : ";
//         cin>>choice;

//         switch(choice)
//         {
// //-----------------ENTER MANAGER--------------------------
//         case 1 :
//         {
//            m.accept();
//             break;
//         }
// //---------------------DISPLAY MANAGER-----------------------------
//         case 2 :
//         {
//           m.display();
//           break;
//         }

// //-----------------SET BONUS----------------------------------------
//         case 3:
//         {   
//             float bonus;
//             cout<<"\n\tEnter Bonus : ";  
//             cin>>bonus;          
//             m.set_bonus(bonus);
//             break;
//         }
// //--------------------------GET BONUS--------------------------------
//         case 4 :
//         {
//             float bonus;
//             bonus=m.get_bonus();
//             cout<<"\n\tSalary : "<<bonus;   
//             break;
//         }
       
// //-------------------------GET ID-------------------------------------
//         case 6 :
//         {
//             //
//         }

// //------------------GET SALARY-----------------------------
//         case 7 :
//         {
//             //
//         }



//         case 0 :
//             cout<<"Exiting Manager Menu.......";
//             break;

//         default:
//             cout<<"Wrong Input.....";
//             break;
//         }
//     } while (choice!=0);
// }