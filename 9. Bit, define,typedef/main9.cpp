#include <iostream>
#include <conio.h>
#include <ctime> 

using std::cout;
using std::cin;
using std::endl;

#define N 10+3// деректива препроцесора яка юзалася в С замість const.
//По суті просто замінює ініціалізована на літерал. тут він не присвоїть N=13,
// тупо всюди в коді вставить замість N вираз 10+3

typedef unsigned long long ull; //замінюєм назву типу, в принципі можна й через #define

enum color {Red=1, Green, Blue};
int main() {
	////define
	//int a = 2 * N;
	//cout << a << endl; //виведе 23, а не 26

	////goto
	//int b;
	//cin >> b;
	//if (a > 10) {
	//	goto point;
	//}
	//cout << "Hello";
	//point: ;

	////random
	/*int c;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		c = rand()%10;
		cout << c << endl;
	}*/

	/*cout << "1.Red\n";
	cout << "2.Green\n";
	cout << "3.Blue\n";
	
	while (bool q=true) {
		unsigned int a;
		cin >> a;
		color c = color(a);
		switch (c) {
		case Red: system("color 4"); cout << "Hello"; break;
		case Green: system("color 2"); cout << "Hello"; break;
		case Blue: system("color 3"); cout << "Hello"; break;
		}
	}*/

	/////////////////////Бітові операції
	unsigned int a, b;
	a = 1;
	b = 3;
	cout << "a = " << a << ", b = " << b << endl;

	//cout << "~a = " << ~a << endl;
	//cout << "a & b = " << (a&b) << endl;
	//cout << "a | b = " << (a|b) << endl;
	
	cout << (a << 1) << endl;
	cout << (b >> 2) << endl;
	

	


	_getch();
	return 0;
}