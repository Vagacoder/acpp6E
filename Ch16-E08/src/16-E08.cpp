/*
 * 16-E08.cpp
 *
 *  Created on: Mar 12, 2019
 *      Author: qhu
 */
#include <iostream>
#include <cstdlib>

using namespace std;

typedef int* ArrayPointer;

template<class T>
void swapValues(T& variable1, T& variable2)
{
      T temp;

      temp = variable1;
      variable1 = variable2;
	variable2 = temp;
}

int main() {
	ArrayPointer a, b, c;
	a = new int[3];
	b = new int[3];
	int i;
	for (i = 0; i < 3; i++) {
		a[i] = i;
		b[i] = i * 100;
	}
	c = a;
	cout << "a contains: ";
	for (i = 0; i < 3; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << "b contains: ";
	for (i = 0; i < 3; i++)
		cout << b[i] << " ";
	cout << endl;
	cout << "c contains: ";
	for (i = 0; i < 3; i++)
		cout << c[i] << " ";
	cout << endl;
	swapValues(a, b);
	b[0] = 42;
	cout << "After swapping a and b,\n" << "and changing b:\n";
	cout << "a contains: ";
	for (i = 0; i < 3; i++)
		cout << a[i] << " ";
	cout << endl;
	cout << "b contains: ";
	for (i = 0; i < 3; i++)
		cout << b[i] << " ";
	cout << endl;
	cout << "c contains: ";
	for (i = 0; i < 3; i++)
		cout << c[i] << " ";
	cout << endl;
}
