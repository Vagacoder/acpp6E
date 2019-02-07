//============================================================================
// Name        : Ch02-P09.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * 9. (This is an extension of an exercise from Chapter 1.) The Babylonian algorithm to
compute the square root of a positive number n is as follows:
1. Make a guess at the answer (you can pick n/2 as your initial guess).
2. Compute r = n / guess.
3. Set guess= (guess + r) / 2.
4. Go back to step 2 for as many iterations as necessary. The more steps 2 and 3
are repeated, the closer guess will become to the square root of n.
Write a program that inputs a double for n, iterates through the Babylonian algorithm until
the guess is within 1% of the previous guess, and outputs the answer
as a double to two decimal places. Your answer should be accurate even for large
values of n.
 */
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	cout << "Please enter an number: ";
	double inputNumber = 0;
	cin >> inputNumber;
	if(inputNumber < 0){
		cout <<"No negative number for square root." << endl;
		return 0;
	}

	double guess = inputNumber /2;
	double prevGuess = 0;
	double n = inputNumber;

	do{
		double r = n / guess;
		prevGuess = guess;
		guess = (guess + r) /2;
	}
	while(guess > prevGuess*1.00001 || guess < prevGuess*0.99999);

	cout << "Square root of " << inputNumber << " is " << guess << endl;
	return 0;
}
