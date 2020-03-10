#ifndef BOOK_H_
#define BOOK_H_
#include"product.h"


class book: public product {
private:
	int pages;
public:
	book() ;
	book(const char *title, float price, int pages);

	void accept() ;
	void display() ;
	float calc_discount();
};

 

 
#endif
