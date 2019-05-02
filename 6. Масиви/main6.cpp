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
	//		cin.clear();//очищає потік вводу
	//		while (cin.get() != '\n');
	//		cout << "Input the " << i << " number of the array:";
	//	}
	//}

	//system("cls");// очищає консоль

	//cout << "Basic array:" << endl;
	//for (int i = 0; i < 10; i++) {
	//	cout << "A[" << i << "] = " << A[i] << endl;
	//}

	///////////////// AЛГОРИТМИ !!!!!!!!!!!!!!!!
	//// пошук найбільшого і найменшого елементу

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
	//////////////////////////////////////////////////////Знайти суму всіх елементів масиву

	//const int N = 10;
	//int A[N];
	//for (int i = 0; i < N; i++){
	//	cout << "Input the " << i << " number of the array:";
	//	while (!(cin >> A[i])) {
	//		cin.clear();//очищає потік вводу
	//		while (cin.get() != '\n');
	//		cout << "Input the " << i << " number of the array:";
	//	}
	//}
	//int sum = 0;
	//for (int i = 0; i < N; i++) {
	//	sum += A[i];
	//}
	//cout << sum;


	///////////////////////////Знайти потрібний елемент в масиві й вивести його індекс, якщо нема, то виводимо -1

	//const int N = 10;
	//int A[N];
	//int a;
	//int non = -1;
	//for (int i = 0; i < N; i++) {
	//	cout << "Input the " << i << " number of the array:";
	//	while (!(cin >> A[i])) {
	//		cin.clear();//очищає потік вводу
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

	////////////////////////////////////////////////Сортування бульбашкою

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

	//bool miniaty = true; // minyaty = правда, і поки це так цикл while і програма працює.       
	//int j = 0;            // j=0
	//int tmp;
	//while (miniaty) {       // якщо miniaty = правда
	//	miniaty = false;   // тоді miniaty = неправда
	//	j++;               // j=1, 2, 3 ... проходів       
	//	// тут починаються перший та наступні проходи по масиву arr[], j постійно зростає від 1 до n, і коли j=n цикл зупиняється, 
	//	// miniaty = неправда, а це зупиняє while (minyaty) - програма все відсортувала!
	//	for (int i = 0; i < N - j; i++) {
	//		if (A[i] > A[i + 1]) {
	//			tmp = A[i];         // зберігаємо і
	//			A[i] = A[i + 1];  // в і кладемо і+1
	//			A[i + 1] = tmp;     // в і+1 кладемо і
	//			miniaty = true;       // miniaty = правда
	//			// якщо хоч раз за прохід arr[i] > arr[i + 1] то miniaty = правда і алгоритм буде робити ще один прохід і так доки все не буде відсортовано
	//		}
	//	}
	//}
	//for (int i = 0; i < N; i++) {
	//	cout << A[i] << " ";
	//}

	////////////////////////////////////////////////////////////Знайти моду масиву

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

	///////////////////////////////////////////////////////////Знайти середнє арифметичне масиву
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