#include <conio.h> 
#include <iostream> 
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	// Зерна і шахматна дошка
/*	const int n = 64;
	unsigned long long res = 0, uno = 1;
	for (int i = 1; i <= n; i++) {
		cout << "On " << i << " cell " << uno << " seads!" << endl;
		uno *= 2;
		res += uno;
	}
	cout << res;
*/

//homework Найбільший спільний дільник
/*
	int a, b, res;
	char quest;
	while (bool q = true) {
		cout << "Please enter two natural numbers for finding GCD:\n";
		cin >> a >> b;
		if (a > 0 && b > 0) {
			for (int i = 1; i <= a && i <= b; i++) {
				if (a % i == 0 && b % i == 0) {
					res = i;
				}
			}
			//вище моя реалізація, а є ще всратий алгоритм евкліда:

			//while(b != 0){
			//a %= b;
			//swap(a,b); //міняє a і b значеннями
			//}
			//res = a;

			cout << "GCD for " << a << " and " << b << " is: "<< res << endl;
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
		else cout << "Incorrect input! Please try again\n";
	}
*/
//Найменше спільне кратне його ще можна знаходити через НСД, 
//але я хотів окремо
	int a = 85, b = 65, res;
	for (int i = 1; i < INT_MAX; i++) {
		if (i%a == 0 && i%b == 0) {
			res = i;
			break;
		}
	}
	cout << res;

	_getch();
	return 0;
}