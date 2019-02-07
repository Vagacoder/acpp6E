//============================================================================
// Name        : Ch03-E14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
/*
 * 14. Write a function definition for a function isDigit that takes one argument of
type char and returns a bool value. The function returns true if the argument
is a decimal digit; otherwise, it returns false.
 */

#include <iostream>
using namespace std;

bool isDigit(char digit){
	return (digit <= '9' && digit >= '0');
}
int main() {

	cout << isDigit('1') << endl;
	cout << isDigit('a') << endl;

	return 0;
}
