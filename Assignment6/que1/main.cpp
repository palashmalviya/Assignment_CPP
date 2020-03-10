
#include <iostream>
#include "tape.h"
#include "product.h"
#include "book.h"
using namespace std;

int main()
{		int choice,n;
		float tbill=0.0;
		cout<<"\n\tEnter Total product : ";
		cin>>n;
		try{
			if(n<3)
				throw n;

			else
			{

				product *ptr[n];

						for(int i=0;i<n;i++)
						{
						cout<<"\n\n\t---------------------------Product "<<i+1<<"----------------------------";
						cout<<"\n\t1. Purchase Book";
						cout<<"\n\t2. Purchase Tape";

						cout<<"\n\n\tEnter Choice : ";
						cin >> choice;
						switch(choice)
						{
						case 1:
							ptr[i] = new book;
							ptr[i]->accept();

							break;
						case 2:
							ptr[i] = new tape;
							ptr[i]->accept();
							break;
						}
						}

						cout<<"\n\n\t\tPurchase Details ";
					    cout<<"\n----------------------------------------------------------------------------------------------------------------------------------------";
					    cout<<"\nTitle\t\tPrice\tPage\Duration\tPrice\tDiscount\tPrice With Discount";
						for(int i=0;i<n;i++)
						{		float price, discount, bill;
								ptr[i]->display();
								price = ptr[i]->get_price();
								discount = ptr[i]->calc_discount();
								bill = price - discount;
								cout << "\t\t" << price;
								cout << "\t" << discount ;
								cout << "\t\t" << bill ;
								tbill=bill+tbill;
						}
						cout<<"\n\t\t\t\t\t________________________";
						cout<<"\n\t\t\t\t\tGrand Total : "<<tbill;


						for(int i=0;i<n;i++)
						delete ptr[i];

			}
		 }
		catch (int e)
						{
							cout<<"\n\t`'''''' Srry Minimun 3 product can be Purchased, you have purchased "<<e<<" products`'''''''''";
						}




	return 0;
}
