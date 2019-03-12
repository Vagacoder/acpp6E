// DayOfYear

#include <iostream>
#include <cstdlib>
#include "Day.h"
using namespace std;

//Uses iostream and cstdlib:
void DayOfYear::set(int newMonth, int newDay) {
	if ((newMonth >= 1) && (newMonth <= 12))
		month = newMonth;
	else {
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
	if ((newDay >= 1) && (newDay <= 31))
		day = newDay;
	else {
		cout << "Illegal day value! Program aborted.\n";
		exit(1);
	}
}

//Uses iostream and cstdlib:
void DayOfYear::set(int newMonth) {
	if ((newMonth >= 1) && (newMonth <= 12))
		month = newMonth;
	else {
		cout << "Illegal month value! Program aborted.\n";
		exit(1);
	}
	day = 1;
}

int DayOfYear::getMonthNumber() {
	return month;
}

int DayOfYear::getDay() {
	return day;
}

//Uses iostream and cstdlib:
void DayOfYear::input() {
	cout << "Enter the month as a number: ";
	cin >> month;
	cout << "Enter the day of the month: ";
	cin >> day;
	if ((month < 1) || (month > 12) || (day < 1) || (day > 31)) {
		cout << "Illegal date! Program aborted.\n";
		exit(1);
	}
}

void DayOfYear::output() {
	switch (month) {
	case 1:
		cout << "January ";
		break;
	case 2:
		cout << "February ";
		break;
	case 3:
		cout << "March ";
		break;
	case 4:
		cout << "April ";
		break;
	case 5:
		cout << "May ";
		break;
	case 6:
		cout << "June ";
		break;
	case 7:
		cout << "July ";
		break;
	case 8:
		cout << "August ";
		break;
	case 9:
		cout << "September ";
		break;
	case 10:
		cout << "October ";
		break;
	case 11:
		cout << "November ";
		break;
	case 12:
		cout << "December ";
		break;
	default:
		cout << "Error in DayOfYear::output. Contact software vendor.";
	}

	cout << day;
}

bool DayOfYear::operator <(const DayOfYear b) const {
	if ((month > b.month) || ((month == b.month) && (day > b.day))) {
		return false;
	} else {
		return true;
	}
}

// constructors
DayOfYear::DayOfYear() :
		month(1), day(1) {
}

DayOfYear::DayOfYear(int newMonth, int newDay) :
		month(newMonth), day(newDay) {
}
