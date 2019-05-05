/*////////////////////////////////////////
Автор - Марков Денис					//
прямоугольник							//
*/////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <cstring>
#include <conio.h>

using namespace std;

struct Point
{
	int x;
	int y;
};

struct Rectangle
{
	Point A;
	Point B;
};

void PrintMenu()
{
	cout << "1. Open file to read\n";
	cout << "2. Create file for input\n";
	cout << "3. Read data from file\n";
	cout << "4. Write to file\n";
	cout << "5. Manual input\n";
	cout << "6. Dimensions\n";
	cout << "y - Exit\n";
}

void Input(istream &is, Rectangle &rect)
{
	int x1, x2, y1, y2;
	is >> x1 >> y1;
	is >> x2 >> y2;

	Point A = { x1,y1 };
	Point B = { x2,y2 };

	rect.A = A;
	rect.B = B;
}

void Read(ofstream &os, const Rectangle &rect)
{
	os << rect.A.x << ' ' << rect.A.y << endl;
	os << rect.B.x << ' ' << rect.B.y << endl;
}

void PrintInfo(const Rectangle &rect)
{
	system("cls");
	cout << "Rectangle:\n";
	cout << "x1 = " << rect.A.x << " y1 = " << rect.A.y << endl;
	cout << "x2 = " << rect.B.x << " y2 = " << rect.B.y << endl;

	int dist1, dist2;
	dist1 = abs(rect.A.x - rect.B.x);
	dist2 = abs(rect.A.y - rect.B.y);

	cout << "Length of 1st side: " << dist1 << endl;
	cout << "Length of 2nd side: " << dist2 << endl;

	cout << "Perimeter: " << 2 * (dist1 + dist2) << endl;
	cout << "Square: " << (dist1*dist2) << endl;

	_getch();
}

int main()
{

	cout << "***Rectangle***\n\n";

	char choise;
	char filename[30];

	ifstream fin;
	ofstream fout;
	Rectangle rect;

	bool fileInput = false;
	bool fileRead = false;

	do
	{
		PrintMenu();
		cin >> choise;

		switch (choise)
		{
		case '1': cout << "\nEnter name of file: ";
			cin >> filename;
			fin.open(filename);
			if (!fin.is_open())
			{
				cout << "This file doesn't exist!";
				_getch();
				fileInput = false;
				break;
			}
			else fileInput = true; break;

		case '2':
			cout << "\nEnter name of file: ";
			cin >> filename;
			fout.open(filename, ios::app);	break;


		case '3': if (!fileInput)
		{
			break;
		}
				  Input(fin, rect);
				  fileRead = true;
				  break;

		case '4':	if (fileRead && fout.is_open())
		{
			Read(fout, rect);
		}
					break;

		case '5': cout << "\nEnter two opposite vertexes of the Rectangle(x1,y1,x2,y2):\n";
			Input(cin, rect); fileRead = true; break;

		case '6': if (fileRead) PrintInfo(rect); break;

		}
		system("cls");

	} while (choise != 'y');

	_getch();
	return 0;
}