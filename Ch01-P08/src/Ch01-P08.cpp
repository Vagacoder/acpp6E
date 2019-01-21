//============================================================================
// Name        : Ch01-P08.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Babylonian algorithm for square root
//  1. Make a guess at the answer (you can pick n/2 as your initial guess).
//  2. Compute r = n / guess.
//  3. Set guess = (guess + r) / 2.
//  4. Go back to step 2 for as many iterations as necessary. The more steps 2 and 3
//     are repeated, the closer guess will become to the square root of n.
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "Please input an positive integer: ";
	int number = 0;
	cin >> number;
	if (number > 0){
		double guess = number / 2.0 ;
		for (int i = 0; i < 100; i++){
			double remainder = number / guess;
			guess = (guess + remainder)/2;
		}
		cout << "This square root of " << number << " is " << guess << endl;
	}else {
		cout << "Wrong input!";
	}
	return 0;
}
