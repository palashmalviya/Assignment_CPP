#ifndef PRODUCT_H_
#define PRODUCT_H_

class product {
private:
	char title[20];
	float price;
public:
	product();
	product(const char *title, float price);
	// getters/setters
	float get_price();
	virtual void accept();
	virtual void display() ;
	virtual float calc_discount()=0;
};
#endif
