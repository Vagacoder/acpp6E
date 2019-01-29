/*
 * Ch02-P11.cpp
 *
 *  Created on: Jan 27, 2019
 *      Author: skuller
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

	fstream inFile;
	inFile.open("data.txt");
	char read[100];
	int count = 0;

	string fName;
	string lName;
	int feet = 0, inch = 0;

	while (inFile >> read) {
		if(count == 0){
			count++;
			fName = read;
		} else if (count == 1){
			count++;
			lName =read;
		}

		else if (count == 2) {
			count++;
			feet = atoi(read);
		}else if (count == 3){
			inch = atoi(read);
			int weight = 110 + ((feet - 5) * 12 + inch) * 5;
			cout << "The ideal body weight of " << fName << " " << lName << " is: " << weight << endl;
			count = 0;
		}
	}

	inFile.close();
	return EXIT_SUCCESS;
}


