#include "date.h"


Date::Date() {
	year = 2000;
	month = 1;
	day = 1;
}
Date::Date(int y, int m, int d) {
	this->year = y;
	this->month = m;
	this->day = d;
}

Date::~Date() {

}

//get
int Date::getYear() const {
	return year;
}
int Date::getMonth() const {
	return month;
}
int Date::getDay() const {
	return day;
}
//set
void Date::setYear(int y) {
	year = y;
}
void Date::setMonth(int m) {
	month = m;
}
void Date::setDay(int d) {
	day = d;
}

string Date::printNumeric() const{
	return to_string(getMonth()) + "/" + to_string(getDay()) + "/" + to_string(getYear());
}
string Date::printFormal() const{
	string months[] = { "Jan.", "Feb.", "March", "April", "May", "June", "July",
		"Aug.", "Sept.", "Oct.", "Nov.", "Dec." };
	return months[getMonth() - 1] + " " + to_string(getDay()) + ", " + to_string(getYear());
}
string Date::printEuro() const{
	string months[] = { "Jan.", "Feb.", "March", "April", "May", "June", "July",
		"Aug.", "Sept.", "Oct.", "Nov.", "Dec." };
	return to_string(getDay()) + " " + months[getMonth() - 1] + " " + to_string(getYear());
}


int main() {

	Date myDate(2005, 5, 21);
	

	cout << "Numeric: " << myDate.printNumeric() << endl;
	cout << "Formal: " << myDate.printFormal() << endl;
	cout << "Euro: " << myDate.printEuro() << endl;

	return 0;
	



}