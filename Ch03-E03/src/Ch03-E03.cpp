//============================================================================
// Name        : Ch03-E03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * 3. Write a complete C++ program to compute and output the square roots of the
whole numbers 1 to 10.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	for(float i = 1; i <= 10; i++){
		cout << "Square root of "<< i << " is " << sqrt(i) << endl;
	}

	cout  << endl;

	int i;
	for (i = 0; i < 10; i++)
	cout << rand( ) << endl;

	cout  << endl;

	srand(99);
	for (i = 0; i < 10; i++)
	cout << (rand( ) % 11) << endl;

	cout  << endl;
	srand(99);
	for (i = 0; i < 10; i++)
	cout << (rand( ) % 11) << endl;

	return 0;
}
