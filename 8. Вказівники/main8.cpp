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
	//double* p = &d; // вказівник, займає 4 байти
	//cout << "d = " << d << " (0x" << &d << ")" << endl;
	//cout << "p = 0x" << p << " (0x" << &p << ")" << endl;
	//cout << "*p = " << *p << endl; // розмінування вказівника, тобто витягнення значення змінної до якої він прив'язаний


	//double d[10];
	//for (int i = 0; i < 10; i++)
	//{
	//	d[i] = (double) i+1;
	//}
	//double* p = d; 

	//cout << d << endl;
	//cout << *p << endl;
	
	//&d[4] = p+4; d[4] = *(p+4);

	//int N;
	//cout << "Enter size of array:";
	//cin >> N;

	//int* p = new int[N];
	//
	//for (int i = 0; i < N; i++) {
	//	*(p + i) = i + 1;
	//	cout << "p[" << i << "] = " << p[i] << endl;
	//}

	//delete [] p;

	/////////////////////////////////////////////////////Знаходження простих чисел!!!!!!
	//cout << "\t\t***Simple numbers***\n\n";

	//int N;
	//cout << "Enter number for finding simple numbers:";
	//cin >> N;

	//bool* SimpleNumber = new bool[N + 1];//0...15

	//for (int i = 2; i < N + 1; i++)
	//	SimpleNumber[i] = true;

	//for (int i = 2; i <= N; i++)
	//{
	//	if (SimpleNumber[i])
	//	{
	//		for (int j = i * i; j <= N; j += i)
	//			SimpleNumber[j] = false;
	//	}
	//}
	//for (int i = 2; i < N + 1; i++)
	//	if (SimpleNumber[i])
	//		cout << i << endl;

	//delete [] SimpleNumber;

	_getch();
	return 0;
}