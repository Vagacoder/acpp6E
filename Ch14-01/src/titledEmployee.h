/*
 * titledEmployee.h
 *
 *  Created on: 2019Äê4ÔÂ13ÈÕ
 *      Author: Skuller
 */

#ifndef SRC_TITLEDEMPLOYEE_H_
#define SRC_TITLEDEMPLOYEE_H_

#include "salariedemployee.h"
#include <string>

namespace SavitchEmployees {
class TitledEmployee : public SalariedEmployee {
public:
	TitledEmployee();
	TitledEmployee(const string& theName, const string& theSsn,
			const string & title, const double salary);
	string getTitle();
	void setTitle(string title);
	void setName(const string& newName);
private:
	string title;
};
}

#endif /* SRC_TITLEDEMPLOYEE_H_ */
