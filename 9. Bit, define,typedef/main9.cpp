#include <iostream>
#include <conio.h>
#include <ctime> 

using std::cout;
using std::cin;
using std::endl;

#define N 10+3// ��������� ������������ ��� ������� � � ������ const.
//�� ��� ������ ������ ������������ �� ������. ��� �� �� �������� N=13,
// ���� ����� � ��� �������� ������ N ����� 10+3

typedef unsigned long long ull; //������� ����� ����, � ������� ����� � ����� #define

enum color {Red=1, Green, Blue};
int main() {
	////define
	//int a = 2 * N;
	//cout << a << endl; //������ 23, � �� 26

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

	/////////////////////����� ��������
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