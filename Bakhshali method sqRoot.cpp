

//#include "stdafx.h"
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num,d;
	float guess = 2, a, b,sq_R = 0;
	cout << "Enter the number to square root: ";
	cin >> num;

	if (num < 0) {
		cout << endl << "Error";
	}
	else if (num == 0) {
		cout << endl << "Square root of 0 = 0";
	}
	else {
		while (abs(guess - sq_R) > 0.0000001) {
			sq_R = guess;
			a = (num - pow(guess, 2)) / (2 * guess);
			b = guess + a;
			guess = b - (pow(a, 2) / (2 * b));
			cout << guess << endl;
		}
		cout << endl << "The square root of " << num << " = " << sq_R;
	}
	//cin >> d;
}

