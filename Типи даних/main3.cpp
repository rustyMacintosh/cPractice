#include <conio.h> 
#include <iostream> 
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	/* 
	ֲ��������Ͳ *unsigned ����� ���� � �������� �������� �������
	
	int a; // 4 bytes �������������� � ���� ������� �� ����� ��������. ����� �� ���� �������� ����� � ����� �������� ��������: 
	// �������������� - int a = 0x10 = 16 ������� int a = 010 = 8;
	short b; // 2 bytes ��������������
	long c; // 4 bytes ��������������
	long long d; // 8 bytes
	char e; // 1 byte ������� ������� ������� �� ascii
	*/
	
	/*

	Ĳ��Ͳ *unsigned ����� ���� � �������� �������� �������

	double d; //8 bytes �� ��������� ����� 12.0 �� ����� ���� 12.0000000000000000000000000000567457346245
	d = 12.0;
	d = 123e-1; //123*10^(-1) = 12.3

	float f; //4 bytes ������� �� ����� �� � double
	f = 10.0 / 3; // ���� � ���� �������� ����� �������� �� ����� ����� ��� ���� ����� ����� ������ ������, ������ �������� ������ ����
	cout.precision(12); // ������� ������� ���� ���� ��� ��'���� cout
	cout << f;
	*/

/*	cout << "\t\t***BMI**\n\n";
	double bmi, weight, height;

	cout << "Enter your height in metres and weight in kilograms:\n";
	cin >> height >> weight;

	bmi = weight / (height * height) ;
	cout << "Your BMI is: " << bmi;
*/

	// ������� ������� ������ ���������� � ������ ������� � ����� ������
	int sec, hour, min;

	cout << "Enter seconds:\n";
	cin >> sec;
	hour = sec / 3600;
	min = (sec % 3600) / 60;
	sec = sec % 60;
	cout << "Hour(s): " << hour << ", minute(s): " << min << ", second(s): " << sec;
	_getch();
	return 0;
}