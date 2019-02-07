/*
 * 03_E25.cpp
 *
 *  Created on: Feb 6, 2019
 *      Author: skuller
 */

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	int x = 1;
	cout << x << " No1"<< endl;
	{
		cout << x << " No2"<< endl;
		int x = 2;
		cout << x << " No3"<< endl;
		{
			cout << x << " No4" << endl;
			int x = 3;
			cout << x << " No5" << endl;
		}
		cout << x << " No6" << endl;
	}
	cout << x << " No7" << endl << endl;

	cout << (double)rand()/ RAND_MAX;


	return 0;
}

