#ifndef headerq1_H_
#define headerq1_H_





enum account_type { SAVING, CURRENT, DEMAT }at;



class account
{
private:
    int id;
    account_type type;
    double balance;
    
public:
    account();
    account(int id, account_type type);
    
    void accept();
    void display();
    void set_id(int id);
    account_type set_type(account_type);
    int get_id();
    account_type get_type();
    double get_balance();
    void deposit(double amount);
    void withdraw(double amount);   

};


class insufficient_funds
{
private:
    int accid;
    double curr_balance;
    double withdraw_amount;
public:
    insufficient_funds(int,double,double);
    void display();

};

// class address
// {
// private:
//     char building[30];
//     char street[30];
//     char city[20];
//     int pin;
// public:
//     address();
//     address(char*,char*,char*,int);
//     void accept();
//     void display();
//     char* get_building();
//     char* get_street();
//     char* get_city();
//     int get_pin();
//     void set_building(char* );
//     void set_street(char* );
//     void set_ciyt(char* ); 
//     void set_pin(int);


//     ~address();
// };



#endif
