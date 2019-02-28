#include <conio.h> 
#include <iostream> 
#include <climits>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	/* 
	ЦІЛОЧИСЛЕННІ *unsigned відрізає відємні і відповідно розширює діапазон
	
	int a; // 4 bytes машинозалежний і може мінятися на різних системах. також він може зберігати число в інших системах числення: 
	// шістнадцяткова - int a = 0x10 = 16 вісімкова int a = 010 = 8;
	short b; // 2 bytes зарезервований
	long c; // 4 bytes зарезервований
	long long d; // 8 bytes
	char e; // 1 byte збергігає символи кодовані по ascii
	*/
	
	/*

	ДІЙСНІ *unsigned відрізає відємні і відповідно розширює діапазон

	double d; //8 bytes має погрішність тобто 12.0 по факту буде 12.0000000000000000000000000000567457346245
	d = 12.0;
	d = 123e-1; //123*10^(-1) = 12.3

	float f; //4 bytes точність ще менша ніж в double
	f = 10.0 / 3; // хоча б один опернанд треба записати як дійсне число так весь вираз стане дійсним числом, інакше отримаємо ділення ціле
	cout.precision(12); // кількість розрядів після коми для об'єкту cout
	cout << f;
	*/

/*	cout << "\t\t***BMI**\n\n";
	double bmi, weight, height;

	cout << "Enter your height in metres and weight in kilograms:\n";
	cin >> height >> weight;

	bmi = weight / (height * height) ;
	cout << "Your BMI is: " << bmi;
*/

	// Домашка кількість секунд переводимо в години хвилини і решту секунд
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