//This is the header file hourlyemployee.h.
//This is the interface for the class HourlyEmployee.
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include <string>
#include "employee.h"

using std::string;

namespace SavitchEmployees {

class HourlyEmployee: public Employee {
public:
	HourlyEmployee();
	HourlyEmployee(const string& theName, const string& theSsn,
			double theWageRate, double theHours);
	void setRate(double newWageRate);
	double getRate() const;
	void setHours(double hoursWorked);
	double getHours() const;
	void printCheck();
private:
	double wageRate;
	double hours;
};

} //SavitchEmployees

#endif //HOURLYMPLOYEE_H

