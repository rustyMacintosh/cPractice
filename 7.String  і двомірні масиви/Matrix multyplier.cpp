#include <iostream>
#include <conio.h>
#include <ctime> 

using std::cout;
using std::cin;
using std::endl;

int main() {

	srand(time(NULL));
	int R, C;
	cout << "Enter rows and columns of first matrix:";
	cin >> R >> C;

	int R1, C1;
	cout << "Enter rows and columns of second matrix:";
	cin >> R1 >> C1;

	if (C != R1) {
		cout << "This matrixes can't be multiplied! Sorry(";
		_getch();
		return 0;
	}
	else {
		cout << "A:\n";
		int** p = new int*[R];
		for (int i = 0; i < R; i++) {
			p[i] = new int[C];
		}
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C; c++) {
				p[r][c] = rand() % 10; //від 0 до 9
				cout << p[r][c] << " ";
			}
			cout << endl;
		}
		cout << endl;
		cout << "B:\n";
		int** p1 = new int*[R1];
		for (int i = 0; i < R1; i++) {
			p1[i] = new int[C1];
		}
		for (int r = 0; r < R1; r++) {
			for (int c = 0; c < C1; c++) {
				p1[r][c] = rand() % 10; //від 0 до 9
				cout << p1[r][c] << " ";
			}
			cout << endl;
		}
		cout << endl;
		cout << "Product A * B = C:\n";
		int** p2 = new int*[R];
		for (int i = 0; i < R; i++) {
			p2[i] = new int[C1];
		}
		for (int r = 0; r < R; r++) {
			for (int c = 0; c < C1; c++) {
				p2[r][c] = 0;
				for (int t = 0; t < C; t++) {
					p2[r][c] += p[r][t] * p1[t][c];
				}
				cout << p2[r][c] << " ";
			}
			cout << endl;
		}

		for (int i = 0; i < R; i++) {
			delete[] p[i];
			delete[] p2[i];
		}
		delete[] p;
		delete[] p2;
		for (int i = 0; i < R1; i++) {
			delete[] p1[i];
		}
	}

	_getch();
	return 0;
}