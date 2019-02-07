/*
 * 03-04.cpp
 *
 *  Created on: Feb 6, 2019
 *      Author: skuller
 */

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {

	int month, day;
	cout << "Welcome to your friendly weather program.\n"
			<< "Enter today's date as two integers for the month "
			<< "and the day:\n";
	cin >> month;
	cin >> day;
	srand(month * day);
	int prediction;
	char ans;
	cout << "Weather for today:\n";
	do {
		prediction = rand() % 3;
		switch (prediction) {
		case 0:
			cout << "The day will be sunny!!\n";
			break;
		case 1:
			cout << "The day will be cloudy.\n";
			break;
		case 2:
			cout << "The day will be stormy!\n";
			break;
		default:
			cout << "Weather program is not " << "functioning properly.\n";
		}
		cout << "Want the weather for the next day?(y/n): ";
		cin >> ans;
	} while (ans == 'y' || ans == 'Y');
	cout << "That's it from your 24-hour weather program.\n";
	return 0;
}
