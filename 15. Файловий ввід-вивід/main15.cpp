//#include <conio.h> 
//#include <fstream>
//#include <iostream> 
//
//using namespace std;
//
//struct Stack {
//	int key;
//	Stack *next;
//};
//
//void print(Stack *b) {
//	Stack *print = b;
//	while (print)
//	{
//		cout << print->key << "->";
//		print = print->next;
//	}
//	cout << "NULL\n";
//}
//
//void push(Stack **next, int d) {
//	Stack *pv = new Stack;
//	pv->key = d;
//	pv->next = *next;
//	*next = pv;
//}
//
//int pop(Stack **next) {
//	int temp = (*next)->key;
//	Stack *pv = *next;
//
//	(*next) = (*next)->next;
//	delete pv;
//	return temp;
//}
//
//void print(ostream &os) { // �������� ��'���� ������� ����� ����� ��������� ������ ������ ��� ��'��� ��� ����� ���������!!!
//	os << "Hello world!";
//}
//
//int main()
//{
//	/*ofstream fout;
//
//	fout.open("Text.txt",ios::app); // ios::app �������� ������������ � ����, � �� �������������� ����!
//
//	fout << "Hello world!" << endl;*/
//
//	/*ifstream fin;
//	fin.open("Text.txt");
//	if (!fin.is_open())
//	{
//		cout << "This file doesn`t exist!";
//		return -1;
//	}
//
//	int n=0;
//	int temp;
//	Stack *begin;
//
//	while (!fin.eof()) {
//		fin >> temp;
//		push(&begin, temp);
//		n++;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << pop(&begin) << endl;
//	}*/
//
//	ofstream fout("Text.txt"); // ��������� �������� ����� ������ ����� �����������
//	print(cout);
//	print(fout);
//
//	_getch();
//	return 0;
//}