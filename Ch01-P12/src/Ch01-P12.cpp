//============================================================================
// Name        : Ch01-P12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Please enter how many feet your height is (enter inches in next inpupt): ";
	int feet = 0, inch = 0;
	cin >> feet;
	cout << "Please enter how many inch your height is: ";
	cin >> inch;

	feet -= 5;
	int weight = 110;
	weight += (feet*12 + inch)* 5;

	cout <<"Your weight should be " << weight << " lbs." << endl;

	return 0;
}
