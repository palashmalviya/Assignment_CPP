#ifndef que2_H_
#define que2_H_

class address
{
private:
    char building[30];
    char street[30];
    char city[20];
    int pin;
public:
    address();
    address(char*,char*,char*,int);
    void accept();
    void display();
    char* get_building();
    char* get_street();
    char* get_city();
    int get_pin();
    void set_building(char* );
    void set_street(char* );
    void set_ciyt(char* ); 
    void set_pin(int);
};

#endif