
#include <iostream>
#include"date.h"
#include"employee.h"

using namespace std;

date::date() {
	
	this->day = 1;
	this->month = 1;
	this->year = 1990;
}

date::date(int day, int month, int year) {
	
	this->day = day;
	this->month = month;
	this->year = year;
}

void date::accept() {
	cout << "Date : ";
	cin >> this->day >> this->month >> this->year;
}
void date::display() {
	cout << this->day << "-" << this->month << "-" << this->year << endl;
}
void date::set_day(int day) {
	this->day = day;
}
void date::set_month(int month) {
	this->month = month;
}
void date::set_year(int year) {
	this->year = year;
}
int date::get_day() {
	return this->day;
}
int date::get_month() {
	return this->month;
}
int date::get_year() {
	return this->year;
}


