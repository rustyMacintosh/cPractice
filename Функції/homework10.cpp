#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

//Модуль числа
double absolute(double a) {
	return a > 0.0 ? a : -a;
}

//Абсолютна й відносна похибки
void errors() {
	double a, b;
	cout << "Enter dimensions for counting approximation and relative errors (first - true value, and then measured):\n";
	cin >> a >> b;
	cout << "Approximation error is: " << absolute(a - b) << endl;
	cout << "Relative error is: " << (absolute(a - b)/a)*100 << "%\n"; 
}

//Розміщення (комбінаторика) з спрощеним обчисленням факторіалів
unsigned long long permutation(int n, int m) {
	unsigned long long res=1;
	if (n < 0 || m < 0 || n < m) {
		cout << "Wrong input!\n";
		res = 0;
	}
	else {
		for (int i = n - m+1; i <= n; i++) {
			res *= i;
		}
	}
	return res;
}

int main() {

	//cout << absolute(5) << endl;
	//errors();
	cout << permutation(4,2);

	_getch();
	return 0;
}
