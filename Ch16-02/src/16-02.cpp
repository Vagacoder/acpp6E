//Demonstrates a template function that implements 
//a generic version of the selection sort algorithm.
#include <iostream>
#include <cstdlib>
#include "Day.h"
#include "sort.cpp"

using namespace std;

template<class T>
void sort(T a[], int numberUsed);
//Precondition: numberUsed <= declared size of the array a.
//The array elements a[0] through a[numberUsed - 1] have values.
//The assignment and < operator work for values of type T.
//Postcondition: The values of a[0] through a[numberUsed - 1] have
//been rearranged so that a[0] <= a[1] <=... <= a[numberUsed - 1].

template<class T>
void swapValues(T& variable1, T& variable2);
//Interchanges the values of variable1 and variable2.
//The assignment operator must work correctly for thwe type T.

template<class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed);
//Precondition: 0 <= startIndex < numberUsed. Array elements have values.
//The assignment and < operator work for values of type T.
//Returns the index i such that a[i] is the smallest of the values
//a[startIndex], a[startIndex + 1],..., a[numberUsed - 1].

int main() {

	int i;
	int a[10] = { 9, 8, 7, 6, 5, 1, 2, 3, 0, 4 };
	cout << "Unsorted integers:\n";
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;
	sort(a, 10);
	cout << "In sorted order the integers are:\n";
	for (i = 0; i < 10; i++)
		cout << a[i] << " ";
	cout << endl;

	double b[5] = { 5.5, 4.4, 1.1, 3.3, 2.2 };
	cout << "Unsorted doubles:\n";
	for (i = 0; i < 5; i++)
		cout << b[i] << " ";
	cout << endl;
	sort(b, 5);
	cout << "In sorted order the doubles are:\n";
	for (i = 0; i < 5; i++)
		cout << b[i] << " ";
	cout << endl;

	char c[7] = { 'G', 'E', 'N', 'E', 'R', 'I', 'C' };
	cout << "Unsorted characters:\n";
	for (i = 0; i < 7; i++)
		cout << c[i] << " ";
	cout << endl;
	sort(c, 7);
	cout << "In sorted order the characters are:\n";
	for (i = 0; i < 7; i++)
		cout << c[i] << " ";
	cout << endl;

	DayOfYear d[4];
	d[0] = DayOfYear(10, 24);
	d[1] = DayOfYear(10, 21);
	d[2] = DayOfYear(12, 29);
	d[3] = DayOfYear(2, 11);
	cout << "Unsorted day:\n";
	for (i = 0; i < 4; i++)
		cout << d[i].getMonthNumber() << " " << d[i].getDay() << endl;
	cout << endl;
	sort(d, 4);
	cout << "In sorted order the days are:\n";
	for (i = 0; i < 4; i++)
		cout << d[i].getMonthNumber() << " " << d[i].getDay() << endl;
	cout << endl;
	return 0;
}
