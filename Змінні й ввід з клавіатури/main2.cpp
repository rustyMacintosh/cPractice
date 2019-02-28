#include <conio.h> 
#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

int main()
{
	//setlocale(LC_ALL, "ukr");
/*	const int size = 1024;
	int gbytes;
	int mbytes;
	int kbytes;
	unsigned long long bytes;
	cout << "Enter a size in gigabytes: ";
	cin >> gbytes;
	mbytes = size * gbytes;
	kbytes = size * mbytes;
	bytes = (unsigned long long)size * (unsigned long)kbytes;

	cout << "Gigabytes: \t" << gbytes << endl;
	cout << "Megabytes: \t" << mbytes << endl;
	cout << "Kilobytes: \t" << kbytes << endl;
	cout << "Bytes: \t" << bytes << endl;
*/

	// Домашка з цельсія в фаренгейти

	float c, f = 0;
	cout << "Please enter the temperature in Celsius degrees: \n";
	cin >> c;
	f = c * 1.8 + 32;
	cout << "The temperature in Fahrenheit degrees is: \n" << f;


	_getch();
	return 0;
}