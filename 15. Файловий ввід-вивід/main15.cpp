#include <conio.h> 
#include <fstream>
#include <iostream> 

using namespace std;

int main()
{
	/*ofstream fout;

	fout.open("Text.txt",ios::app);

	fout << "Hello world!" << endl;*/

	ifstream fin;
	fin.open("Text.txt");
	if (!fin.is_open())
	{
		cout <<"This file exist"
	}

	_getch();
	return 0;
}