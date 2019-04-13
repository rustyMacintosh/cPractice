//#include <conio.h> 
//#include <iostream> 
//
//using std::cout;
//using std::cin;
//using std::endl;
//
////struct employee
////{
////	char *name;
////	double salary;
////	int counttruancy;
////};
////
////void input(employee *e1) {
////	cout << "enter a name of the employee: ";
////	e1->name = new char[20];
////	cin.get();
////	cin.getline(e1->name, 20);
////
////	cout << "enter a salary of the employee: ";
////	cin >> e1->salary;
////
////	cout << "enter amount of truancy in this month for the employee: ";
////	cin >> e1->counttruancy;
////	cout << endl;
////}
////
////void delete(employee *e1) {
////	if (e1->counttruancy > 5) {
////		cout << "fired: " << e1->name << endl;
////	}
////}
////
////void free(employee e1[], int n) {
////	for (int i = 0; i < n; i++)
////	{
////		delete [] e1[i].name;
////	}
////}
//
//struct xy {
//	double x;
//	double y;
//};
//
//struct polar {
//	double distance;
//	double angle;
//};
//
//void showpolar(const polar &p) {
//	const double degree = 57.29577;
//	cout << "distance: " << p.distance << endl;
//	cout << "angle in degrees: " << p.angle*degree << "°" << endl;
//}
//
//polar xytopolar(const xy &xy) {
//	polar p;
//	p.distance = sqrt(pow(xy.x, 2) + pow(xy.y, 2));
//	p.angle = atan2(xy.y,xy.x);
//	return p;
//}
//
//int main()
//{
//	/*employee emp1;
//	emp1.name == "den";
//	emp1.salary = 1000;
//	emp1.counttruancy = 2;*/
//
//	//employee emp[4];
//	//for  (int i = 0; i < 4; i++)
//	//{
//	//	cout << i + 1 << " employee: \n\n";
//	//	input(&emp[i]);
//	//}
//
//	//for (int i = 0; i < 4; i++)
//	//{
//	//	delete(&emp[i]);
//	//}
//	//
//	//free(emp, 4);
//
//	xy a;
//	polar b;
//
//	a.x = 10;
//	a.y = 10;
//
//	b = xytopolar(a);
//	showpolar(b);
//
//	_getch();
//	return 0;
//}