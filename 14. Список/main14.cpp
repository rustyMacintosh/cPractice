#include <conio.h> 
#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

struct A {
	int key;
};

struct List {
	A a;
	List* next;
};

void Print(List *b) {
	List *print = b;
	while (print) {
		cout << print->a.key << " -> ";
		print = print->next;
	}
	cout << "NULL\n";
}

void Init(List **begin) {
	*begin = new List;

	A a[5] = { 43,56,78,100,511
 };

	(*begin)->a.key = 20;
	(*begin)->next = NULL;

	List* end = *begin;
	for (int i = 0; i < 5; i++)
	{
		end->next = new List;
		end = end->next;
		end->a = a[i];
		end->next = NULL;
	}

}

void Add_begin(List **begin, const A &a) {
	List *t = new List;
	t->a = a;
	t->next = *begin;
	*begin = t;
}

void Insert() {}

int main()
{
	List* begin = NULL;
	A a = {-12};
	Init(&begin);
	Print(begin);
	Add_begin(&begin, a);
	Print(begin);

	_getch();
	return 0;
}