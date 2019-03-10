/*
 * 08-04.cpp
 *
 *  Created on: 2019Äê3ÔÂ9ÈÕ
 *      Author: Skuller
 */

#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

double& sampleFunction(double& variable);
double& sampleFunction1(double variable);

int main() {
	double a = 99;
	cout << "a is 99, and call sampleFunction result is " << sampleFunction(a)
			<< endl;

	sampleFunction(a) = 50;
	cout << "a is " << a << endl;

	a = 99;
	cout << "a is 99, and call sampleFunction result is " << sampleFunction(a)
			<< endl;
	double& d = sampleFunction(a);
	a = 45;
	cout << "d is " << d << endl;

	double b = 100;
	double c = sampleFunction1(b);
	cout << "b is 100, and call sampleFunction1 result is "
			<< sampleFunction1(b) << endl;
	cout << "c is " << c << endl;
	b = 200;
	cout << "c is " << c << endl;
	return 0;
}

// Note this function return a reference of argument
double& sampleFunction(double& variable) {
	return variable;
}

double& sampleFunction1(double variable) {
	double& result = variable;
	return result;
}
