#include<iostream>
#include<cstring>
#include <iomanip>
#include"product.h"
using namespace std;

product::product()
{
		strcpy(this->title, "");
		this->price = 0.0;
	}

product::product(const char *title, float price)
{
		strcpy(this->title, title);
		this->price = price;
}

	float product::get_price()
	{
		return this->price;
	}
	void product::accept()
	{
		cout<<"\n\n\tEnter Details ";
		cout<<"\n\t-----------------------------\n";
		cout << "\tEnter Title : ";
		cin >> this->title;
		cout << "\tEnter Price : ";
		cin >> this->price;
	}
	void product::display()
	{

		cout << "\n"<< this->title;
		cout <<"\t"<< this->price;
	}



