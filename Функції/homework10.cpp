#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

double absolute(double a) {
	double res;
	if (a < 0) {
		res = -a;
	}
	else res = a;
	return res;
}
void errors() {
	double a, b;
	cout << "Enter dimensions for counting approximation and relative errors (first - true value, and then measured):\n";
	cin >> a >> b;
	cout << "Approximation error is: " << absolute(a - b) << endl;
	cout << "Relative error is: " << (absolute(a - b)/a)*100 << "%\n"; 
}

int main() {

	//cout << absolute(5) << endl;
	errors();

	_getch();
	return 0;
}
