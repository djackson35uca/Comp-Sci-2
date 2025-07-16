#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
using namespace std;

class Date {

private: 
	int day;
	int month;
	int year;

public:
	Date();
	Date(int y, int m, int d);
	~Date();

	//get
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	//set
	void setYear(int y);
	void setMonth(int m);
	void setDay(int d);

	string printNumeric() const;
	string printFormal() const;
	string printEuro() const;


};





#endif
