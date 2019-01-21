//============================================================================
// Name        : Ch02_P13.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : chapter 2 project 13
//  Create a text file that contains 10 integers with one integer per line. You can enter
//  any 10 integers that you like in the file. Then write a program that inputs a number
//  from the keyboard and determines if any pair of the 10 integers in the text file adds
//  up to exactly the number typed in from the keyboard. If so, the program should
//  output the pair of integers. If no pair of integers adds up to the number, then the
//  program should output “No pair found.”
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

int main() {

	int inputNumber;
	cout << "Please enter an integer: ";
	cin >> inputNumber;

	fstream infile;
	infile.open("numbers.txt");

	int numbers[10];
	int number =0 , count =0;
	while (infile >> number){
		numbers[count] = number;
		count++;
	}

	infile.close();

	bool found = false;
	for (int i = 0; i < count-1; i++){
		for (int j = i+1; j < count -1; j++){
			if (numbers[i]+numbers[j] == inputNumber){
				cout << numbers[i] << " + " << numbers[j]<<" = " << inputNumber << endl;
				found = true;
			}
		}
	}

	if (!found){
		cout << "No pair found!";
	}
	return 0;
}
