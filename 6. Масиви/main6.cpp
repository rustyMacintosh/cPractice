#include <conio.h> 
#include <iostream> 
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//int A[10];

	//cout << "Filling in the array with numbers!\n";

	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "Input the " << i << " number of the array:";
	//	while (!(cin >> A[i])) {
	//		cin.clear();//����� ���� �����
	//		while (cin.get() != '\n');
	//		cout << "Input the " << i << " number of the array:";
	//	}
	//}

	//system("cls");// ����� �������

	//cout << "Basic array:" << endl;
	//for (int i = 0; i < 10; i++) {
	//	cout << "A[" << i << "] = " << A[i] << endl;
	//}

	///////////////// A�������� !!!!!!!!!!!!!!!!
	//// ����� ���������� � ���������� ��������

	//int max = A[0], min = A[0];

	//for (int i = 1; i < 10; i++) {
	//	if (max <= A[i]) {
	//		max = A[i];
	//	}
	//	if (min >= A[i]) {
	//		min = A[i];
	//	}
	//}

	//cout << "Maximum value" << max << endl;
	//cout << "Minimum value" << min << endl;


	////////////////////////////////////////////////////// homework
	//////////////////////////////////////////////////////������ ���� ��� �������� ������

	//const int N = 10;
	//int A[N];
	//for (int i = 0; i < N; i++){
	//	cout << "Input the " << i << " number of the array:";
	//	while (!(cin >> A[i])) {
	//		cin.clear();//����� ���� �����
	//		while (cin.get() != '\n');
	//		cout << "Input the " << i << " number of the array:";
	//	}
	//}
	//int sum = 0;
	//for (int i = 0; i < N; i++) {
	//	sum += A[i];
	//}
	//cout << sum;


	///////////////////////////������ �������� ������� � ����� � ������� ���� ������, ���� ����, �� �������� -1

	//const int N = 10;
	//int A[N];
	//int a;
	//int non = -1;
	//for (int i = 0; i < N; i++) {
	//	cout << "Input the " << i << " number of the array:";
	//	while (!(cin >> A[i])) {
	//		cin.clear();//����� ���� �����
	//		while (cin.get() != '\n');
	//		cout << "Input the " << i << " number of the array:";
	//	}
	//}
	//cout << "Enter the number for search:" << endl;
	//while (!(cin >> a)) {
	//	cin.clear();
	//	while (cin.get() != '\n');
	//	cout << "Incorrect number, try again!" << endl;
	//	cout << "Enter the number for search:" << endl;
	//}
	//for (int i = 0; i < N; i++) {
	//	if (A[i] == a) {
	//		cout << "Index of number is:"<< i << endl;
	//		non=i;
	//	}
	//}
	//if (non < 0)
	//	cout << -1;

	////////////////////////////////////////////////���������� ����������

	//const int N = 5;
	//int A[N];
	//int a=0;
	//for (int i = 0; i < N; i++){
	//	cout << "Input the " << i << " number of the array:";
	//	while (!(cin >> A[i])) {
	//		cin.clear();
	//		while (cin.get() != '\n');
	//		cout << "Input the " << i << " number of the array:";
	//	}
	//}

	//bool miniaty = true; // minyaty = ������, � ���� �� ��� ���� while � �������� ������.       
	//int j = 0;            // j=0
	//int tmp;
	//while (miniaty) {       // ���� miniaty = ������
	//	miniaty = false;   // ��� miniaty = ��������
	//	j++;               // j=1, 2, 3 ... �������       
	//	// ��� ����������� ������ �� ������� ������� �� ������ arr[], j ������� ������ �� 1 �� n, � ���� j=n ���� �����������, 
	//	// miniaty = ��������, � �� ������� while (minyaty) - �������� ��� �����������!
	//	for (int i = 0; i < N - j; i++) {
	//		if (A[i] > A[i + 1]) {
	//			tmp = A[i];         // �������� �
	//			A[i] = A[i + 1];  // � � ������� �+1
	//			A[i + 1] = tmp;     // � �+1 ������� �
	//			miniaty = true;       // miniaty = ������
	//			// ���� ��� ��� �� ������ arr[i] > arr[i + 1] �� miniaty = ������ � �������� ���� ������ �� ���� ������ � ��� ���� ��� �� ���� �����������
	//		}
	//	}
	//}
	//for (int i = 0; i < N; i++) {
	//	cout << A[i] << " ";
	//}

	////////////////////////////////////////////////////////////������ ���� ������

	const int N = 10;
	int A[N];
	for (int i = 0; i < N; i++) {
		cout << "Input the " << i << " number of the array:";
		while (!(cin >> A[i])) {
			cin.clear();
			while (cin.get() != '\n');
			cout << "Input the " << i << " number of the array:";
		}
	}

	int Moda[N] = { 0 };
	int n = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++) {
			if (A[j] == A[i]) {
				Moda[i]++;
			}
		}
	}
	int max = Moda[0];

	for (int i = 0; i < N; i++) {
		cout << Moda[i] << endl;
		if (Moda[i] > max) {
			max = Moda[i];
			n = i;
		}
	}
	cout << "Moda: " << A[n];

	///////////////////////////////////////////////////////////������ ������ ����������� ������
	//const int N = 5;
	//int A[N];
	//int sum = 0;
	//for (int i = 0; i < N; i++) {
	//	cout << "Input the " << i << " number of the array:";
	//	while (!(cin >> A[i])) {
	//		cin.clear();
	//		while (cin.get() != '\n');
	//		cout << "Input the " << i << " number of the array:";
	//	}
	//}
	//for (int i = 0; i < N; i++) {
	//	sum += A[i];
	//}
	//cout << (double)sum / N;

	_getch();
	return 0;
}