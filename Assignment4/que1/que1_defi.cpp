#include<iostream>
#include"que1.h"
using namespace std;


    account::account(){

      
    }

    account::account(int id, account_type type){

      this->id=id;
      this->type=type;
      this->balance=0.0;
      
        }

    

    void account::accept(){
  
        int t;
            cout<<"\n\tEnter ID : ";
            cin>>this->id;
            
            cout<<"\n\tEnter Type (0 : Saving, 1 : Current, 2 : DMATE) : ";
            cin>>t;

            if (t==0)
            {
                type=account_type(t);
            }

            else if(t==1)
            {
                type=account_type(t);
            }
            else if(t==2)
            {
                type=account_type(t);
            }
            else
            {
                throw "\n\t0 for Saving, 1 for Current, 2 for DMATE";
            }
            
          
        

    }
    //----------------------------------------------------------------------------------------------------------

    void account::display(){

        cout<<"\n\tID : "<<this->id;
            
        switch(type)
            {
                //case SAVING : cout<<"\n\tAccount Type : "<<account_type::SAVING;
                case SAVING : cout<<"\n\tAccount Type : SAVING";
                break;

                //case CURRENT : cout<<"\n\tAccount Type : "<<account_type::CURRENT;
                case CURRENT : cout<<"\n\tAccount Type : CURRENT";
                break;

                //case DEMAT : cout<<"\n\tAccount Type : "<<account_type::DEMAT;
                case DEMAT : cout<<"\n\tAccount Type : DEMAT";
                break;
            }
        if(this->balance<1)
        cout<<"\n\tNo Deposite of Money";

        else       
        cout<<"\n\tBalance : "<<this->balance;

    }
//-------------------------------------------------------------------------------------------------------------
    void account::set_id(int id){
        this->id=id;
    }

    account_type account::set_type(account_type type){
            this->type=type;
    }

    int account::get_id(){
        return this->id;
    }

    account_type account::get_type(){
            return this->type;
    }

    double account::get_balance(){
        if (this->balance<1)
        {
            cout<<"\n\tNo Deposit";
        }
        else
        {
            
        return this->balance;
        }
        
    }
//-----------------------------------------------------------------------------------------------------------
    void account::deposit(double amount){
        
        this->balance=this->balance+amount;

    }
//---------------------------------------------------------------------------------------------------------------------
    void account::withdraw(double amount){
        this->balance=this->balance-amount;
    } 
//-----------------------------------------------------------------------------------------------------------------------------

insufficient_funds::insufficient_funds(int accid,double curr_balance,double withdraw_amount){

    this->accid=accid;
    this->curr_balance=curr_balance;
    this->withdraw_amount=withdraw_amount;

}
    void insufficient_funds::display()
    {
        cout<<"\n\tInsufficent Fund\n";
        cout<<"-------------------------------";
        cout<<"\n\tAccount Id : "<<this->accid;
        cout<<"\n\tCurrent Balance : "<<this->curr_balance;
        cout<<"\n\tWithdraw Amount : "<<this->withdraw_amount;
        cout<<"\n\t Transaction Unsucessful";

    }
