#include <iostream>
#include <cstring>
#include <cctype>
#include <conio.h>
#include <ctime> // ��� � ������� time ��� ��������� random

using std::cout;
using std::cin;
using std::endl;

int main() {

	////char str[] = "FuckOFF";
	////cout << strlen(str) << endl; //������� ������


	//char str1[80], str2[80];

	//cout << "Enter string:\n";
	////cin >> str1; // cin ����� �������� ����� �� ������!!!
	//cin.getline(str1, 80);

	//cout << "Enter string 2:\n";
	////cin >> str1; // cin ����� �������� ����� �� ������!!!
	//cin.getline(str2, 80);
	//system("cls");
	//cout << str1 << endl;
	//cout << str2 << endl << endl;

	////strcpy(str2, str1); // ��������� ������; 2 ����� �������� 1
	////cout << str2 << endl << endl;

	////if (!strcmp(str2, str1)) { 
	////	// strcmp - ������� 0 ���� ������ ���, 
	////	//<0 ����� ������ �����, 
	////  //>0 ����� �����
	////	cout << "Strings are equal!";
	////}

	//strcat(str2, str1); //������������ ������, 2 ��'���� � 1  

	/////////////////////////////////////////////ʲ��ʲ��� �˲� � ��в�ֲ
	//int numberWords = 0;
	//bool inWord = false;

	//char str[80];

	//cout << "Enter string:\n";
	//cin.getline(str, 80);

	//for (int i = 0; str[i] != 0; i++) {
	//	if (isalpha(str[i]) && !inWord) {
	//		inWord = true;
	//		numberWords++;
	//	}
	//	if (!isalpha(str[i])) {
	//		inWord = false;
	//	}
	//}
	//cout << numberWords << endl;
	
	////////////////////////////////////////////������ �������� ����/������ � ������ �������� 'A' 'D'
	/*char str[100] = "";
	char c = '|', c1;
	int index = 0;
	do
	{
		c1 = _getch();
		system("cls");
		if (c1 == 'D' || c1 == 'd') {
			for (int i = 0; i <= index; i++) {
				if (i != index) {
					str[i] = '_';
				}
				else str[i] = c;
			}
			str[index + 1] = '\0';
			index++;
		}
		if (c1 == 'A' || c1 == 'a') {
			for (int i = 0; i < index; i++) {
				if (i != index-1) {
					str[i] = '_';
				}
				else str[i] = c;
			}
			str[index] = '\0';
			index--;
		}
		cout << str;
	} while (c1 != 'q');*/

	////////////////////////////////////**********************************HOMEWORK
	////////////////////////////////////������� ������ � ���������� �������
	//char str[80];
	//cin.getline(str, 80);
	//char temp = ' ';
	//int j = strlen(str)-1;
	//cout << "String: " << str << endl;
	//for (int i = 0; i < j; i++) {
	//	temp = str[i];
	//	str[i] = str[j];
	//	str[j] = temp;
	//	j--;
	//}
	//cout << "Reverse: " << str << endl;


	/////////////////////////////////////���������� ������� ��� � ���� � ������ 'b'
	/*int numberWordsB = 0;
	bool inWord = false;
	bool WordB = false;
	char str[80];

	cout << "Enter string:\n";
	cin.getline(str, 80);

	for (int i = 0; str[i] != 0; i++) {
		if (isalpha(str[i]) && !inWord) {
			inWord = true;
			WordB = false;
		}
		if (!isalpha(str[i])) {
			inWord = false;
		}

		if (str[i] == 'b' || str[i] == 'B' && inWord) {
			if(!WordB){
				numberWordsB++;
				WordB = true;
			}
		}
	}
	cout << numberWordsB << endl;*/


	//////////////////////////////////////////////////////////�������� �������� ������� 3�3
	//srand(time(NULL));
	//int a[3][3];
	//int b[3][3];
	//int c[3][3];
	//cout << "A:\n";
	//for (int r = 0; r < 3; r++) {
	//	for (int k = 0; k < 3; k++) {
	//		a[r][k] = rand() % 10; //�� 0 �� 9
	//		cout << a[r][k] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "B:\n";
	//for (int r = 0; r < 3; r++) {
	//	for (int k = 0; k < 3; k++) {
	//		b[r][k] = rand() % 10;
	//		cout << b[r][k] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;
	//cout << "Product A*B=C:\n";
	//for (int r = 0; r < 3; r++) {
	//	for (int k = 0; k < 3; k++) {
	//		c[r][k] = 0;
	//		for (int t = 0; t < 3; t++) {
	//			c[r][k] += a[r][t] * b[t][k];
	//		}
	//		cout << c[r][k] << " ";
	//	}
	//	cout << endl;
	//}


	///////////////////////////////////////////////////������ �������� � ������ ����� �� ����� � ����
	char str[300] = "";
	char c = '|', c1;
	int indexS = 0;
	int indexR = 0;
	int r = 0;
	do
	{
		c1 = _getch();
		system("cls");
		if (c1 == 'S' || c1 == 's') {
			indexR++;
		}
		if (c1 == 'W' || c1 == 'w') {
			indexR--;
		}
		if (c1 == 'D' || c1 == 'd') {
			for (int s = 0; s <= indexS; s++) {
				if (s != indexS) {
					str[s] = ' ';
				}
				else str[s] = c;
			}
			str[indexS + 1] = '\0';
			indexS++;
			
		}
		if (c1 == 'A' || c1 == 'a') {
			for (int s = 0; s < indexS; s++) {
				if (s != indexS - 1) {
					str[s] = ' ';
				}
				else str[s] = c;
			}
			str[indexS] = '\0';
			indexS--;
		}
		for (int i = 0; i < indexR; i++) {
			cout << endl;
		}
		cout << str;
	} while (c1 != 'q');

	_getch();
	return 0;
}