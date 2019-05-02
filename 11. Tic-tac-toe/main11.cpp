#include <iostream>
#include <time.h>
#include <random>
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;

char name1[30];
char name2[30];
char table[3][3];
bool step;

void instruction(){
	cout << "\t\t*** Tic-tac-toe***\n\n";
	cout << "Rules:\n";
	cout << "There are two player on table 3x3\n";
	cout << "Winner is a player who maked the winning combination\n";
	cout << "Table:\n\n";
	int l = 0;
	for (int r(0); r < 3; r++)
	{
		for (int c(0); c < 3; c++)
		{
			cout << "| " << l + 1 << ' ';
			table[r][c] = '1'+l;
			l++;
		}
		cout << '|';
		cout << endl;
	}

	cout << "\nFor the move, press the digit of the table cell\n";
	cout << "Press any button for start:";
	_getch();
}
bool input(){
	for (int i(0); i < 3; i++){
		for (int j(0); j < 3; j++)
		{
			cout << "| " << table[i][j] << ' ';
		}
		cout << '|';
		cout << endl;
	}
	cout << endl;

	if (step) cout << "It's your turn " << name1 << " : ";
	else cout << "It's your turn " << name2 << " : ";

	int n;
	cin >> n;
	if (n < 1 || n > 9)
		return false;
	int i, j;

	if (n % 3 == 0){
		i = n / 3 - 1;
		j = 2;
	} else{
		j = n % 3 - 1;
		i = n / 3;
	}

	if (table[i][j] == 'O' || table[i][j] == 'X')
		return false;

	if (step){
		table[i][j] = 'X';
		step = false;
	} else{ 
		table[i][j] = 'O'; step = true; 
	}
	return true;
}
bool win(){
	for (int i(0); i < 3; i++)
		if ((table[i][0] == table[i][1]) && (table[i][0] == table[i][2]))
			return true;

		else if ((table[0][i] == table[1][i]) && (table[0][i] == table[2][i]))
				return true;

			else if ((table[0][0] == table[1][1] && table[0][0] == table[2][2]) || (table[0][2] == table[1][1] && table[0][2] == table[2][0]))
				return true;

	return false;
}

int main() {

	instruction();
	system("cls");
	int i = 0;

	cout << "Enter the name of the X player: ";
	cin.getline(name1, 30);
	cout << "Enter the name of the O player: ";
	cin.getline(name2, 30);

	srand(time(NULL));
	if (rand() & 1) {
		step = true;
	}
	else step = false;

	while (!win())
	{
		if (i == 9)
		{
			cout << "It's a draw!!";
			_getch();
			return -1;
		}
		system("cls");
		if (!input())
		{
			cout << "Wrong input please try again!";
			_getch();
		}
		i++;
	}

	system("cls");
	if (step)
		cout << "Winner is - " << name2 << endl;
	else cout << "Winner is " << name1 << endl;

	_getch();
	return 0;
}
