/*
 * titledemployee.cpp
 *
 *  Created on: 2019/04/13
 *      Author: Skuller
 */

#include "titledEmployee.h"
#include <string>

using namespace std;

namespace SavitchEmployees {
TitledEmployee::TitledEmployee() :
		SalariedEmployee(), title(""){
}

TitledEmployee::TitledEmployee(const string& theName, const string& theSsn,
		const string & title, const double salary) :
		SalariedEmployee(theName, theSsn, salary), title(title) {
}

void TitledEmployee::setName(const string& newName){
	setName(newName);
}

string TitledEmployee::getTitle(){
	return getTitle();
}

void TitledEmployee::setTitle(string title){
	this->title = title;
}

}

