// Chapter 1, example 1
//

#include <iostream>
using namespace std;

int main() {
	int numberOfLanguages;

	cout << "Hello reader.\n" << "Welcome to C++.\n";

	cout << "How many programming languages have you used? ";
	cin >> numberOfLanguages;

	if (numberOfLanguages < 1) {
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "Read the preface. You may prefer\n"
				<< "a more elementary book by the same author.\n" << (double)numberOfLanguages <<"\n";
	} else {
		cout << "Enjoy the book.\n" << numberOfLanguages << "\n";
	}
	return 0;
}
