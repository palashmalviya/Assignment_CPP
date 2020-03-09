

#ifndef DATE_H_
#define DATE_H_

class date {
private:
	int day;
	int month;
	int year;
public:
	date();
	date(int day, int month, int year);
	void accept();
	void display();
	void set_day(int day);
	void set_month(int month);
	void set_year(int year);
	int get_day();
	int get_month();
	int get_year();
	
};

#endif 