#ifndef TAPE_H_
#define TAPE_H_
#include "product.h"


class tape: public product {
private:
	int duration;
public:
	tape();
	tape( char *title, float price, int duration);
	void accept();
	void display() ;
	float calc_discount();
};

 
#endif
