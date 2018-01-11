#include "stdafx.h"
#include <iostream>
int x;
int y;
int sum;
int console;
#include <time.h>
using namespace std;

int factorial(int x) {
	if (x == 1) {
		return 1;
	}
	else {
		return x * factorial(x - 1);
	}
}
int main() {
	cout << "Calculator rev1.0\n";
	cout << "Write command.\nFor help write '5'\nDon't TRY TO WRITE WORDS!!!\nONLY NUMBERS!!!\nLike:help and other...\n\n\nroot@calculator-unstable:~# ";
	cin >> console;
	if (console == 1) {
		cout << "Write number\n";
		cin >> x;
		cout << "Write twice number\n";
		cin >> y;
		sum = x + y;
		cout << "Sum:" << sum << " \n";
		main();
	}
	if (console == 2) {
		cout << "Write number\n";
		cin >> x;
		cout << "Write twice number\n";
		cin >> y;
		sum = x * y;
		cout << "Multiplication:" << sum << " \n";
		main();
	}
	if (console == 3) {
		cout << "Write number\n";
		cin >> x;
		cout << "Write twice number\n";
		cin >> y;
		sum = x - y;
		cout << "Subtraction:" << sum << " \n";
		main();
	}
	if (console == 4) {
		cout << "Write number\n";
		cin >> x;
		cout << "Write twice number\n";
		cin >> y;
		sum = x / y;
		cout << "Division:" << sum << " \n";
		main();
	}
	if (console == 5) {
		cout << "Commands\n 1 - Sum\n 2 - Multiplication Y\n 3 - Subtraction\n 4 - Division\n 5 - Help\n 6 - Close\n 7 - Factorial\n Ctrl+C - Emergency stop\n";
		main();
	}
	if (console == 6) {
		exit(0);
	}
	if (console == 7) {
		cout << "Write number\n !";
		cin >> x;
		
		if (factorial(x) == 0) { cout << "Too many numbers...\n"; }
		else{cout << "Factorial:" << factorial(x) << " \n"; }
		main();
	}
	else {
		cout << "Error Command\n";
		return 0;
	}
}
