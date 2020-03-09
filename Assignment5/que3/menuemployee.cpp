// #include<iostream>
// #include"employee.h"
// using namespace std;

// void menuemployee()
// { 
//     int choice;
//     employee e;
//     employee e1(0,0.00);
//         do
//     {
//         cout<<"\n\n\n------------------Option Menu------------------\n";
//         cout<<"\n\t 1.  Enter Employee";
//         cout<<"\n\t 2.  Display Employee";
//         cout<<"\n\t 3.  Set ID";
//         cout<<"\n\t 4.  Set Salary";
//         cout<<"\n\t 7.  Get ID";
//         cout<<"\n\t 8.  Get Salary";
       
        
           
//         cout<<"\n\t 0.  Exit Employee Menu";
//         cout<<"\n_________________________________";
//         cout<<"\n\t Enter Choice : ";
//         cin>>choice;

//         switch(choice)
//         {
// //-----------------ENTER EMPLOYEE--------------------------
//         case 1 :
//         {
//            e.accept();
//             break;
//         }
// //---------------------DISPLAY EMPLOYEE-----------------------------
//         case 2 :
//         {
//           e.display();
//           break;
//         }

// //-----------------SET ID----------------------------------------
//         case 3:
//         {   
//             int id;
//             cout<<"\n\tEnter ID : ";  
//             cin>>id;          
//             e.set_id(id);
//             break;
//         }
// //--------------------------SET SALARY--------------------------------
//         case 4 :
//         {
//             float sal;
//             cout<<"\n\tEnter Salary : ";  
//             cin>>sal;           
//             e.set_salary(sal);
//             break;
//         }
       
// //-------------------------GET ID-------------------------------------
//         case 5 :
//         {
//             int id;
//             id=e.get_id();
//             cout<<"\n\tEmployee ID : "<<id;
//             break;
//         }

// //------------------GET SALARY-----------------------------
//         case 6 :
//         {
//             float sal;
//             sal=e.get_salary();  
//             cout<<"\n\tSalary : "<<sal;   
//             break;
//         }



//         case 0 :
//             cout<<"Exiting Employee Menu.......";
//             break;

//         default:
//             cout<<"Wrong Input.....";
//             break;
//         }
//     } while (choice!=0);
// }