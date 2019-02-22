//============================================================================
// Name        : Ch06-P12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :
/*
 * 12. Your Community Supported Agriculture (CSA) farm delivers a box of fresh fruits
and vegetables to your house once a week. For this Programming Project, define
the class BoxOfProduce that contains exactly three bundles of fruits or vegetables.
You can represent the fruits or vegetables as an array of type string. Add accessor
and mutator functions to get or set the fruits or vegetables stored in the array. Also
write an output function that displays the complete contents of the box on the
console.
Next, write a main function that creates a BoxOfProduce with three items
randomly selected from this list:
Broccoli
Tomato
Kiwi
Kale
Tomatillo
This list should be stored in a text file that is read in by your program. For now
you can assume that the list contains exactly five types of fruits or vegetables.
 */
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class BoxOfProduce{
public:
	void addProduce1(string produceName);
	void addProduce2(string produceName);
	void addProduce3(string produceName);
	string getProduce1();
	string getProduce2();
	string getProduce3();
	void displayBoxContent();

private:
	string produce[3];
};


int main() {

	BoxOfProduce box1;
	box1.addProduce2("Apple");
	box1.addProduce1("Celery");
	box1.addProduce3("Banana");
	box1.displayBoxContent();
	cout << "Item 2 in box is " << box1.getProduce2() << endl;


	return 0;
}

void BoxOfProduce::addProduce1(string produceName){

	produce[0] = produceName;
}

void BoxOfProduce::addProduce2(string produceName){

	produce[1] = produceName;
}

void BoxOfProduce::addProduce3(string produceName){

	produce[2] = produceName;
}


string BoxOfProduce::getProduce1(){
	return produce[0];
}

string BoxOfProduce::getProduce2(){
	return produce[1];
}

string BoxOfProduce::getProduce3(){
	return produce[2];
}

void BoxOfProduce::displayBoxContent(){
	for(string name:produce){
		cout << name << endl;
	}
}
