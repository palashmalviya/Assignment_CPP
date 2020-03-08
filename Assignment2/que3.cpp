//Write a user defined function sqr() that calculates square of number and it throws exception if number entered by user is negative.

#include<iostream>
using namespace std;

int sqr( double number)
{
  double square;
  square=number*number;
  return square;
}
int main()
{
    double numb,res;
        try
        {
           cout<<"\n\t Enter Number : ";
           cin>>numb;

           if(numb<0)
             throw 1;
             else
             {
                 res=sqr(numb);
                 cout<<"\n\n\tSquare of "<<numb<<" is "<<res<<"\n\n";
             }
             
        }
        catch(int i)
        {
            cerr <<"\n\t Negative Number\n\n";
        }
            
        
        return 0;
}