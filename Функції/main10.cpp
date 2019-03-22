//#include <iostream>
//#include <conio.h>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
////void print() {
////	cout << "Hello\n";
////}
//
////int sum(int, int); // прототип функції sum. Вона автоматом підтягнеться, хоча йде після main
//
//int n, m;
//bool input() {
//	cout << "Enter two numbers for counting combination of N by M:\n";
//	if (!(cin >> n >> m))
//		return false;
//	else if (n < 0 || m < 0 || n < m)
//		return false;
//	else return true;
//}
//double factorial(int l) {
//	double result = 1;
//	for (int i = 1; i <= l; i++) {
//		result *= i;
//	}
//	return result;
//}
//double combination() {
//	double result;
//	double numerator = factorial(n);
//	double denumerator = factorial(n - m) * factorial(m);
//	return result = numerator / denumerator;
//}
//void print(double s) {
//	cout << "Combination of " << n << " by " << m << " is: " << s;
//}
//
//int main() {
//
//	/*print();*/
//	/*cout << sum(12, 3);*/
//	while (!input())
//		system("cls");
//	double s = combination();
//	print(s);
//
//
//	_getch();
//	return 0;
//}
//
////int sum(int a, int b) {
////	int result = a + b;
////	return result;
////}