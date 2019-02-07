//============================================================================
// Name        : Ch03-P15.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
/*
 * 5. The Social Security Administration maintains an actuarial life table that contains
 the probability that a person in the United States will die (http://www.ssa.gov/
 OACT/STATS/table4c6.html). The death probabilities for 2009 are stored in the
 file LifeDeathProbability.txt, which is included on the website for the book.
 There are three values for each row: the age, the death probability for a male, and
 the death probability for a female. For example, the first five lines are
 0 0.006990 0.005728
 1 0.000447 0.000373
 2 0.000301 0.000241
 3 0.000233 0.000186
 4 0.000177 0.000150
 The interpretation for the fourth line is that a 3-year-old female has a 0.000186
 chance of dying during year 3 to 4.

 Write a program that inputs an age and sex from the keyboard in the main function.
 The main function should call a function named simulate (that you must
 write), sending in the age and sex as parameters. The function should simulate to
 what age a person will live by starting with the death probability for the given age
 and sex. You can do this by reading the data from the file row by row. Skip rows
 that are less than the input age. Once the input age is reached, generate a random
 number between 0 and 1, and if this number is less than or equal to the corresponding
 death probability, then predict that the person will live to the current age
 and return that age. If the random number is greater than the death probability,
 then increase the age by one and repeat the calculation for the next row in the file.
 If the simulation reaches age 120, then stop and predict that the user will live to
 120. The main function should output the simulated age at which the person will
 die. This program is merely a simulation and will give different results each time it
 is run, assuming you change the seed for the random number generator.
 */
//============================================================================
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
using namespace std;

const int MAX_AGE = 120;
struct deathRateAtAge {
	int age;
	float maleDeathRate;
	float femaleDeathRate;
};

int simulate(int age, char gender);

int main() {
	int age;
	char gender;
	cout << "Please enter age: ";
	cin >> age;
	cout << "Please enter gender (m or f): ";
	cin >> gender;
	int deathAge = simulate(age, gender);
	cout << "This person dies at " << deathAge << endl;
	return 0;
}

int simulate(int age, char gender) {

	fstream inputFile;
	inputFile.open("LifeDeathProbability.txt");
	int ageRead = 0;
	float maleDeathRate = 0.0f;
	float femaleDeathRate = 0.0f;

	while (inputFile >> ageRead) {
		inputFile >> maleDeathRate;
		inputFile >> femaleDeathRate;
		if (ageRead < age) {
			continue;
		} else {
			float deathProbability = (double)rand()/RAND_MAX;
			cout << "death pro is " << deathProbability << endl;
			if (gender == 'm' && deathProbability < maleDeathRate){
				return ageRead;
			} else if (gender == 'f' && deathProbability < femaleDeathRate){
				return ageRead;
			}
		}

	}

	return 120;
}

