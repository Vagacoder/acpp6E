//============================================================================
// Name        : Ch01-P11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Please enter the number of seconds: ";
	int seconds = 0;
	cin >> seconds;
	int hours = seconds / 3600;
	seconds %= 3600;
	int minutes = seconds / 60;
	seconds %= 60;
	cout << "It is " << hours << " hours " << minutes << " minutes " << seconds << " seconds.\n";
	return 0;
}
