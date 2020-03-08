#include<iostream>
#include"que1.h"
#include"que1_defi.cpp"
using namespace std;

int main()
{   
    int choice,i;
    account a(12, account_type::CURRENT);
    account *acc=new account[5];
    

    a.display();

    do
    {
        cout<<"\n\n\n------------------Option Menu------------------\n";
        cout<<"\n\t 1.  Enter All Accounts Details";
        cout<<"\n\t 2.  Display All Accounts Details";
        cout<<"\n\t 3.  Set ID";
        cout<<"\n\t 4.  Set Account Type";
        cout<<"\n\t 5.  Get ID";
        cout<<"\n\t 6.  Get Account Type";
        cout<<"\n\t 7.  Get Balance";
        cout<<"\n\t 8.  Deposit Money";
        cout<<"\n\t 9.  Withdraw Money";
        
           
        cout<<"\n\t 0.  Exit";
        cout<<"\n_________________________________";
        cout<<"\n\t Enter Choice : ";
        cin>>choice;

        switch(choice)
        {
//-----------------ENTER ALL DETAILS--------------------------
        case 1 :
        {
            for(i=0;i<2;i++)
            {
                cout<<"\n\n\tEnter Details of "<<i+1<<" -";
                try
                {
                    acc[i].accept();
                }
                catch(const char* ex)
                {
                    cerr << ex <<" \n\t Please Do Correct Details";
                }               
                
                cout<<"\n\n\t\t Account Added Sucessfully";
            }
            break;
        }
//---------------------DISPLAY ALL DETAILS-----------------------------
        case 2 :
        {
          for(i=0;i<2;i++)
            {
                cout<<"\n\n---------------------------------------------";
                cout<<"\n\tAccounts Details of "<<i+1<<" -";
                           acc[i].display();
            
            }
            break;
        }

//-----------------SET ID----------------------
        case 3 :{
            int oid,nid,id,flag;
            cout<<"\n\tEnter Old ID : ";
            cin>>oid; 
            flag=0;
            for(i=0;i<2;i++)
            {   id=acc[i].get_id();
                if(oid==id)
                {
                    cout<<"\n\tEnter New ID : ";
                    cin>>nid; 
                    acc[i].set_id(nid);
                    flag=1;

                }
            }
              if(flag==1)
                {
                    cout<<"\n\tId Set Sucessfully!";
                }
                else
                {
                    cout<<"\n\tID NOT FOUND..";
                }
            break;
        }
//--------------------------GET ID--------------------------------
        case 4 :
        {
            int id=0;
            cout<<"\n\n\t Account ID";
            cout<<"\n------------------------";
            for(i=0;i<2;i++)
            {                
                id=acc[i].get_id();
                cout<<"\n\t"<<id;
            }    
            break;
        }
//----------------------------SET ACCOUNT TYPE-----------------------------
        case 5 :{
            int id,ntype,cid,flag;
            cout<<"\n\tEnter ID  : ";
            cin>>cid; 
            flag=0;
            for(i=0;i<2;i++)
            {   id=acc[i].get_id();
                if(id==cid)
                {
                    cout<<"\n\tEnter New Account Type: ";
                    try
                    {
                     cin>>ntype; 

                     switch(ntype)
            {
                case SAVING : acc[i].set_type(SAVING);
                break;

                case CURRENT : acc[i].set_type(CURRENT);;
                break;

                case DEMAT : acc[i].set_type(DEMAT);;
                break;
            }

                     if (ntype>2 && ntype<0)
                     {
                         throw "\n\t0 for Saving, 1 for Current, 2 for DMATE"; 
                     }
                        
                    }
                    catch(const char* ex)
                {
                    cerr << ex <<" \n\t Please Do Correct Details";
                }                  
                    
                     flag=1;

                }
            }
              if(flag==1)
                {
                    cout<<"\n\tAccount Type Set Sucessfully!";
                }
                else
                {
                    cout<<"\n\tID NOT FOUND....";
                }
        break;
        }
//------------------GET ACCOUNT TYPE----------------------

        case 6 :{
            int id,cid,flag;
            cout<<"\n\tEnter ID  : ";
            cin>>cid; 
            flag=0;
            for(i=0;i<2;i++)
            {   id=acc[i].get_id();
                if(id==cid)
                {  flag=1;
                    cout<<"\n\tAccount Type is : ";
                switch(acc[i].get_type())
            {
                case SAVING : cout<<"\n\tAccount Type : "<<account_type::SAVING;
                break;

                case CURRENT : cout<<"\n\tAccount Type : "<<account_type::CURRENT;
                break;

                case DEMAT : cout<<"\n\tAccount Type : "<<account_type::DEMAT;
                break;
            }

                }
            }
              if(flag==0)
                {
                    cout<<"\n\tAccount NOT FOUND....";
                }
              
        break;
        }
       
//-------------------------GET BALANCE-------------------------------------
        case 7 :
        {
            int id,cid,flag;
            double abal;
            cout<<"\n\tEnter ID  : ";
            cin>>cid; 
            flag=0;
            for(i=0;i<2;i++)
            {   id=acc[i].get_id();
                if(id==cid)
                {   flag=1;
                        abal=acc[i].get_balance();
                    cout<<"\n\tAccount Balance is : "<<abal;
                }
            }
              if(flag==0)
                {
                    cout<<"\n\tAccount NOT FOUND....";
                }
              
        break;
        }

//------------------DEPOSIT MONEY-----------------------------
        case 8 :
        {
           int id,cid,flag;
           double money;
            cout<<"\n\tEnter ID  : ";
            cin>>cid; 
            flag=0;
            for(i=0;i<2;i++)
            {   id=acc[i].get_id();
                if(id==cid)
                {   flag=1;
                    money=acc[i].get_balance();
                    cout<<"\n\tYour Account Balance is : "<<money;
                    cout<<"\n\tEnter Amount For Deposit : ";
                    try
                    {
                        cin>>money;
                        if (money<101)
                        {
                            throw "\n\tDeposit Money Shouble be greater than 100.";
                        }
                        else
                        {
                          acc[i].deposit(money);
                        }
                        
                    }
                    catch(const char* ex)
                    {
                        cerr << ex<< '\n';
                    }
                                        
                  
                    
                }
            }
              if(flag==0)
                {
                    cout<<"\n\tAccount NOT FOUND....";
                }
              
        break;
        
        }

//-----------------------WITHDRAW AMOUNT-------------------------------------
         case 9 :
        {
           int id,cid,flag;
           double money,money1;
            cout<<"\n\tEnter ID  : ";
            cin>>cid; 
            flag=0;
            for(i=0;i<2;i++)
            {   id=acc[i].get_id();
                if(id==cid)
                {   flag=1;
                    money=acc[i].get_balance();
                    cout<<"\n\tYour Account Balance is : "<<money;
                    cout<<"\n\tEnter Amount For WithDraw : ";
                    cin>>money1;
                    if (money>money1)
                    {
                        acc[i].withdraw(money1);
                    }
                    else
                    {
                        insufficient_funds ifs(cid,money,money1);
                        ifs.display();
                    
                    }
                    
                    
                }
            }
              if(flag==0)
                {
                    cout<<"\n\tAccount NOT FOUND....";
                }
              
        break;

    }
//---------------------------------------------------------------------------------
        
        case 0 :
            cout<<"Exiting.......";
            break;

        default:
            cout<<"Wrong Input.....";
            break;
        }
    } while (choice!=0);

}