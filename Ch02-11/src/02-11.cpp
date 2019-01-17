#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main( )
{
	string firstName, lastName;
	int score;
  	fstream inputStream;

 	inputStream.open("player.txt");

 	inputStream >> score;
 	inputStream >> firstName >> lastName;

 	cout << "Name: " << firstName << " "
 		<< lastName << endl;
 	cout << "Score: " << score << endl;

 	inputStream.close();

     return 0;
}
