//#include <iostream>
//#include <time.h>
//#include <random>
//#include <conio.h>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
////void swap(int& a, int& b) {
////	int temp = a;
////	a = b;
////	b = temp;
////}
//
////int sum(const int p[], int length) {
////	int sum = 0;
////	for (int i = 0; i < length; i++) {
////		sum += p[i];
////	}
////	return sum;
////}
//
////void getString(char *str) {
////	int i = 0;
////	char c;
////	cin.get(c);
////	while (c != '\n') {
////		str[i] = c;
////		i++;
////		cin.get(c);
////	}
////	str[i] = '\0';
////}
//
//double calc(double a, double b, double (*oper)(double, double)) {
//	return (*oper)(a, b);
//}
//double sum(double a, double b) {
//	return a + b;
//}
//double sub(double a, double b) {
//	return a - b;
//}
//double mult(double a, double b) {
//	return a * b;
//}
//
//int main() {
//	//int a = 12, b = 13;
//	//cout << "a = " << a << "b = " << b << endl;
//	//swap(a, b);
//	//cout << "a = " << a << "b = " << b << endl;
//	//int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//cout << sum(a, 10) << endl;
//
//	//char str[20];
//	//getString(str);
//	//cout << str;
//
//	cout << calc(12.3, 14.67, sum) << endl;
//	cout << calc(12.3, 14.67, sub) << endl;
//	cout << calc(12.3, 14.67, mult) << endl;
//	_getch();
//	return 0;
//}
