#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
	// Калькулятор
	while (bool q = true) {
		double a, b;
		char operation, quest;
		cout << "This calculator have such operations +,-,*,/\n";
		cout << "Enter the first number then operation and then the second number:\n";
		cin >> a >> operation >> b;
		cout << "Answer: ";
		switch (operation) {
		case '+': cout << a + b << endl; break;
		case '-': cout << a - b << endl; break;
		case '*': cout << a * b << endl; break;
		case '/': cout << a / b << endl; break;
		default: cout << "Incorrect input!\n"; break;
		}
		while (q) {
			cout << "Would you like to continue? (Y/N)\n";
			cin >> quest;
			if (quest == 'N' || quest == 'n') {
				q = false;
				return -1;
			}
			else if (quest == 'Y' || quest == 'y') {
				break;
			}
			else cout << "Incorrect input. Please try again!\n";
		}
	}

	_getch();
	return 0;
}