/*
 * Chapter 2, Exercise 39 and 40
 *
 *  Created on: Jan 17, 2019
 *      Author: qhu
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	fstream infile;
	infile.open("players.txt");

	int playerNumbers = 0;
	bool reading = (bool) (infile >> playerNumbers);
	cout << playerNumbers << endl;
	string highName = "";
	int highScore = 0;
	if (reading && playerNumbers > 0) {
		for (int i = 0; i < playerNumbers; i++) {
			string fName;
			int score;
			infile >> fName >> score;
			if ((i == 0) ||(score > highScore) ){
				highName = fName;
				highScore = score;
			}
			cout << fName << "\'s score is " << score << endl;
		}

		cout << "Highest score is " << highScore << " from " << highName << endl;
	} else if (reading && playerNumbers <= 0) {
		cout << "File format is not correct!";
	} else {
		cout << "File not found!";
	}
	return 0;
}

