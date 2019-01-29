//============================================================================
// Name        : Ch02-P12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
	cout.precision(2);

	fstream inFile;
	inFile.open("data.txt");
	string number;

	int freq1 = 0;
	int freq2 = 0;
	int freq3 = 0;
	int freq4 = 0;
	int freq5 = 0;
	int freq6 = 0;
	int freq7 = 0;
	int freq8 = 0;
	int freq9 = 0;

	while (inFile >> number) {

		char firstDigit = number[0];
		cout << "number is " << number << endl;
		cout << "firstdigit is " << firstDigit << endl;
		switch (firstDigit) {
		case '1':
			freq1++;
			break;
		case '2':
			freq2++;
			break;
		case '3':
			freq3++;
			break;
		case '4':
			freq4++;
			break;
		case '5':
			freq5++;
			break;
		case '6':
			freq6++;
			break;
		case '7':
			freq7++;
			break;
		case '8':
			freq8++;
			break;
		case '9':
			freq9++;
			break;
		}
	}

	double total = freq1 + freq2 + freq3 + freq4 + freq5 + freq6 + freq7 + freq8
			+ freq9;
	if (total > 0) {
		cout << "Percentage of 1 is " << freq1 / total << endl;
		cout << "Percentage of 2 is " << freq2 / total << endl;
		cout << "Percentage of 3 is " << freq3 / total << endl;
		cout << "Percentage of 4 is " << freq4 / total << endl;
		cout << "Percentage of 5 is " << freq5 / total << endl;
		cout << "Percentage of 6 is " << freq6 / total << endl;
		cout << "Percentage of 7 is " << freq7 / total << endl;
		cout << "Percentage of 8 is " << freq8 / total << endl;
		cout << "Percentage of 9 is " << freq9 / total << endl;
	} else {
		cout << "Wrong data!";
	}

	inFile.close();
	return 0;
}
