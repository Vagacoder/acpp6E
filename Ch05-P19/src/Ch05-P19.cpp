/*
 * Ch05-P19.cpp
 *
 *  Created on: Feb 21, 2019
 * 19. Write a program that manages a list of up to ten players and their high scores in the
computer’s memory (not on disk as in Programming Project 18). Use two arrays
to manage the list. One array should store the player’s name, and the other array
should store the player’s high score. Use the index of the arrays to correlate the
names with the scores.  Your program should support the following features:
a. Add a new player and score (up to ten players).
b. Print all player names and their scores to the screen.
c. Allow the user to enter a player name and output that player’s score or a message if the player name has not been entered.
d. Allow the user to enter a player name and remove the player from the list.
Create a menu system that allows the user to select which option to invoke.
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

// declaration of functions
void addNewPlayer(string names[], int &size, int highScore[], string name, int score);

void printAllPlayers(string names[], int &size, int highScore[]);

void printPlayer(string names[], int &size, int highScore[],string name);

void removePlayer(string names[], int &size, int highScore[],string name);


int main(){

	string names[10];
	int highScores[10];
	int size = 0;

	addNewPlayer(names, size, highScores, "Alex", 78);
	addNewPlayer(names, size, highScores, "Bob", 92);
	addNewPlayer(names, size, highScores, "Clara", 85);
	printAllPlayers(names, size, highScores);
	printPlayer(names, size, highScores, "Doug");
	printPlayer(names, size, highScores, "Alex");
	removePlayer(names, size, highScores, "Bob");
	printAllPlayers(names, size, highScores);


	return 0;
}

// Add a new player and score.
void addNewPlayer(string names[], int &size, int highScore[], string name, int score){
	if (size > 10){
		cout << "Out of size, maximum 10 players." << endl;
		return;
	}
	if (size == 10){
		cout << "List is full, maximum 10 players." << endl;
		return;
	}

	for (int i = 0; i < size; i++){
		if (names[i] == name){
			cout << "Player is already in the list." << endl;
			return;
		}
	}

	names[size] = name;
	highScore[size] = score;
	size++;
}

// print all players and their scores
void printAllPlayers(string names[], int &size, int highScore[]){
	for (int i = 0; i < size; i++){
		cout << names[i] << "'s score is " << highScore[i] << endl;
	}
}

// find and print one player
void printPlayer(string names[], int &size, int highScore[],string name){
	for (int i = 0; i < size; i++){
			if (names[i] == name){
				cout << "Player "<< names[i] << "\'s score is " << highScore[i] << endl;
				return;
			}
		}
	cout << "Not found!\n";
}

// remove one player from the list
void removePlayer(string names[], int &size, int highScore[],string name){
	int index = 0;
	bool found = false;
	for (int i = 0; i < size; i++){
				if (names[i] == name){
					index = i;
					found = true;
					break;
				}
			}
	if (found){
		for (int i = index; i < size-1; i++){
			names[i] = names[i+1];
			highScore[i] = highScore[i+1];
			size--;
		}
	} else {
		cout << "Not found!\n";
	}
}
