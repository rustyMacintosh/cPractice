//#include <conio.h> 
//#include <iostream> 
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//struct Auto {
//	char *vendor;
//	char *model;
//	int year;
//	int price;
//};
//
//void menu() {
//	cout << "1. Create collection.\n";
//	cout << "2. Show collection.\n";
//	cout << "3. Exit.\n";
//}
//
//void addAutos(Auto a[], int length) {
//	for (int i = 0; i < length; i++)
//	{
//		cout << i + 1 << ":\n";
//		cout << "Enter vendor of automobile: ";
//		a[i].vendor = new char[40];
//		cin.get();
//		cin.getline(a[i].vendor, 40);
//
//		cout << "Enter model of automobile: ";
//		a[i].model = new char[40];
//		cin.get();
//		cin.getline(a[i].model, 40);
//
//		cout << "Enter the year of production of automobile: ";
//		while (!(cin >> a[i].year) || a[i].year<1970 || a[i].year > 2019) {
//			cout << "Wrong input!";
//			cout << "Enter the year of production of automobile: ";
//		}
//		cout << "Enter the price of automobile: ";
//		while (!(cin >> a[i].price) || a[i].year < 0 || a[i].year > 200000) {
//			cout << "Wrong input!";
//			cout << "Enter the price of automobile: ";
//		}
//		cout << endl;
//	}
//}
//
//void free(Auto a[], int length) {
//	for (int i = 0; i < length; i++)
//	{
//		delete[] a[i].vendor;
//		delete[] a[i].model;
//	}
//}
//
//void show(const Auto a[], int length) {
//	for (int i = 0; i < length; i++)
//	{
//		cout << i + 1 <<" auto:"<< endl;
//		cout << "Vendor: " << a[i].vendor << endl;
//		cout << "Model: " << a[i].model << endl;
//		cout << "Year: " << a[i].year << endl;
//		cout << "Price: " << a[i].price << "$" <<endl;
//	}
//}
//
//int main()
//{
//	cout << "\t\t***Automobiles***\n\n";
//
//	int N;
//	cout << "Enter amount of automobiles: ";
//	cin >> N;
//
//	Auto *car = new Auto[N];
//
//	char c = 0 ;
//	while (c != '3') {
//		menu();
//		cin >> c;
//
//		switch (c) {
//		case '1': system("cls"); addAutos(car, N); break;
//		case '2': system("cls"); show(car, N); break;
//		case '3': break; system("cls");
//		default: cout << "Wrong input!\n\n";
//		}
//	}
//	free(car, N);
//	delete[] car;
//
//	_getch();
//	return 0;
//}