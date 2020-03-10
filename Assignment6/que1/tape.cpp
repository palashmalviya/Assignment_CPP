#include<iostream>
#include<cstring>
#include"tape.h"
#include "product.h"
using namespace std;


	tape::tape()
	{
		this->duration = 0;
	}
	tape::tape( char *title, float price, int duration)	:product(title, price)
	{
		this->duration = duration;
	}

	void tape::accept()
	{
		product::accept();
		cout << "\tEnter Duration : ";
		cin >> this->duration;
	}

	void tape::display()
	{
		product::display();
		cout << "\t" << this->duration;
	}

	float tape::calc_discount() {
		return this->get_price() * 0.05;
	}

