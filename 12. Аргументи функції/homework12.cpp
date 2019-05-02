#include <conio.h>
#include <time.h>
#include <iostream>
#include <random>

using std::cout;
using std::cin;
using std::endl;

//функція сортування бульбашкою
//void bubblesort(int* arr, int length) {
//	bool change = true;
//	int temp;
//	int j = 0;
//	while (change) {
//		change = false;
//		j++;
//		for (int i = 0; i < length-j; i++) {
//			if (arr[i] > arr[i + 1]) {
//				temp = arr[i];
//				arr[i] = arr[i+1];
//				arr[i+1] = temp;
//				change = true;
//			}
//		}
//	}
//}

//функція конкатенації рядків
bool concatination(char* str,const char* str1) {
	int i = 0, j =0;
	while (true) {
		if (str[i] != '\0') {
			i++;
			continue;
		}

		if (str1[j] != '\0') {
			str[i] = str1[j];
			i++; j++;
		}
		else {
			str[i] = '\0';
			return true;
		}
	}
}

int main(){

	//int arr[5] = { 5,1,4,2,8 };
	//bubblesort(arr, 5);
	//for (int i = 0; i < 5; i++) {
	//	cout << arr[i] << " ";
	//}

	//char str1[30] = "Hello ";
	//char str2[10] = "world!";
	//concatination(str1, str2);
	//cout << str1;

	_getch();
	return 0;
}