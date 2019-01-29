//============================================================================
// Name        : Ch02-P10.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/*
 *  Create a text file that contains the text “I hate C++ and hate programming!” Write
a program that reads in the text from the file and outputs each word to the console
but replaces any occurrence of “hate” with “love.” Your program should work with
any line of text that contains the word “hate,” not just the example given in this
problem
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	fstream inFile;
	inFile.open("text.txt");
	string read;

	while (inFile >> read){
		if (read == "hate"){
			read = "love";
		}
		cout << read << endl;

	}
	inFile.close();
	return EXIT_SUCCESS;
}
