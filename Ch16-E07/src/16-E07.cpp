//Chapter 16 exercise 07
#include <iostream>
#include <cstdlib>
#include "Day.h"
#include "sort.cpp"

using namespace std;

template<class T>
void sort(T a[], int numberUsed);


template<class T>
void swapValues(T& variable1, T& variable2);

template<class T>
int indexOfSmallest(const T a[], int startIndex, int numberUsed);


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

	// Ch16 ex7 ort DayOfYear class object
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
