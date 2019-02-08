//============================================================================
// Name        : Ch03-P13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
/*
 * 13. You have four identical prizes to give away and a pool of 25 finalists.
 The finalists are assigned numbers from 1 to 25. Write a program to randomly select the
 numbers of 4 finalists to receive a prize. Make sure not to pick the same number
 twice. For example, picking finalists 3, 15, 22, and 14 would be valid but picking
 3, 3, 31, and 17 would be invalid, because finalist number 3 is listed twice and 31
 is not a valid finalist number.
 */

//============================================================================
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {

	int count = 0;
	int first = 0;
	int second = 0;
	int third = 0;
	int forth = 0;
	srand(2);

	while (count < 4) {

		int pick = rand() % 25 + 1;
		cout << "rand choose " << pick << endl;
		if (pick != first && pick != second && pick != third && pick != forth) {

			if (first == 0) {
				first = pick;
				cout << "First prize to " << pick << endl;
			} else if (second == 0) {
				second = pick;
				cout << "Second prize to " << pick << endl;
			}else if (third == 0) {
				third = pick;
				cout << "Second prize to " << pick << endl;
			}else if (forth == 0) {
				forth = pick;
				cout << "Second prize to " << pick << endl;
			}
			count++;
		}

	}

	return 0;
}
