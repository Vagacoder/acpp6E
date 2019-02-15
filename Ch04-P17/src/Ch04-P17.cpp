//============================================================================
// Name        : Ch04-P17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
/*
 * Given the scores.txt file described in Programming Project 4.16, write two
 additional functions. The first function should be named getPlayerScore and
 take a string parameter as input that is a player’s name, and it should return the
 player’s high score stored in the file. If the player’s name is not in the file, then
 the function should return 0. The second function should output whether a
 player’s high score is above average, exactly equal to the average, or below average, where the average is computed from all of the scores in the file. You should
 design the function appropriately (i.e., determine the function name, parameters,
 and return values).
 */
//============================================================================
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int getPlayerScore(string name);
int playerScoreCompareToAverage(string name);

int main() {

	cout << "High score Ronaldo is " << getPlayerScore("Ronaldo") << endl;
	cout << "High score Cristiano is " << getPlayerScore("Cristiano") << endl;
	cout << "Average score Ronaldo is "
			<< playerScoreCompareToAverage("Ronaldo") << endl;
	cout << "Average score Cristiano is "
			<< playerScoreCompareToAverage("Cristiano") << endl;
	return 0;
}

/*
 * This function return the player’s high score stored in the file.
 * If the player’s name is not in the file, then the function returns 0.
 */
int getPlayerScore(string name) {

	fstream inputFile;
	inputFile.open("score.txt");

	int score = 0;
	int highScore = 0;
	string playerName;

	while (inputFile >> playerName) {
		inputFile >> score;
		if (playerName != name) {
			continue;
		} else {
			if (score > highScore) {
				highScore = score;
			}
		}
	}

	inputFile.close();
	return highScore;
}

/*
 * This function output whether a  player’s high score is above average (1),
 * exactly equal to the average(0), or below average (-1). If no any record in
 * file or file format wrong return -2; If player name is not in record return -3;
 */

int playerScoreCompareToAverage(string name) {
	fstream inputFile;
	inputFile.open("score.txt");

	bool found = false;
	int score = 0;
	int highScore = 0;
	string playerName;

	int totalScore = 0;
	int numberOfPlayer = 0;

	while (inputFile >> playerName) {
		inputFile >> score;
		totalScore += score;
		numberOfPlayer++;
		if (playerName != name) {
			continue;
		} else {
			found = true;
			if (score > highScore) {
				highScore = score;
			}
		}
	}
	inputFile.close();

	// if player name is not in record return -3;
	if (!found) {
		return -3;
	}

	// Calculate average
	//If no any record in file or file format wrong return -2;
	float average = 0;
	if (numberOfPlayer != 0) {
		average = totalScore / numberOfPlayer;
	} else {
		return -2;
	}

	if (highScore > average) {
		return 1;
	} else if (highScore == average) {
		return 0;
	} else {
		return -1;
	}
}
