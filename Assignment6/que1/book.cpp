#include<iostream>
#include<cstring>
#include"book.h"
#include "product.h"
using namespace std;


book::book()
{
		this->pages = 0;
}

book::book(const char *title, float price, int pages) :product(title, price)
{
		this->pages = pages;
}
	// getter/setter
	void book::accept()
	{
		product::accept();
		cout << "\tEnter Pages : ";
		cin >> this->pages;
	}
	void book::display()
	{
		product::display();
		cout << "\t" << this->pages ;
	}
	float book::calc_discount() {
		return this->get_price() * 0.10;
	}
