#include <iostream>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	//int A = 0;
	//double C = 0;
	//cout << "A = " << A << " (0x" << &A << ")" << endl;
	//cout << "C = " << C << " (0x" << &C << ")" << endl;


	//double d = 23.5;
	//double* p = &d; // ��������, ����� 4 �����
	//cout << "d = " << d << " (0x" << &d << ")" << endl;
	//cout << "p = 0x" << p << " (0x" << &p << ")" << endl;
	//cout << "*p = " << *p << endl; // ����������� ���������, ����� ���������� �������� ����� �� ��� �� ����'������


	double d[10];
	for (int i = 0; i < 10; i++)
	{
		d[i] = (double) i;
	}
	double* p = d; 

	_getch();
	return 0;
}