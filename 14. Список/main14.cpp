//#include <conio.h> 
//#include <iostream> 
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//struct A {
//	int key;
//};
//
//struct List {
//	A a;
//	List* next;
//};
//
//void Print(List *b) {
//	List *print = b;
//	while (print) {
//		cout << print->a.key << " -> ";
//		print = print->next;
//	}
//	cout << "NULL\n";
//}
//
//void Init(List **begin) {
//	*begin = new List;
//
//	A a[5] = { 43,56,78,100,511 };
//
//	(*begin)->a.key = 20;
//	(*begin)->next = NULL;
//
//	List* end = *begin;
//	for (int i = 0; i < 5; i++)
//	{
//		end->next = new List;
//		end = end->next;
//		end->a = a[i];
//		end->next = NULL;
//	}
//
//}
//
//void Add_begin(List **begin, const A &a) {
//	List *t = new List;
//	t->a = a;
//	t->next = *begin;
//	*begin = t;
//}
//
//void Insert(List **begin, const A &a) {
//	List *ins = new List;
//	ins->a = a;
//
//	if (!*begin) {
//		ins->next = NULL;
//		*begin = ins;
//		return;
//	}
//	List *t = *begin;
//	if (t->a.key >= ins->a.key) {
//		ins->next = t;
//		*begin = ins;
//		return;
//	}
//	List *t1 = t->next;
//	while (t1) {
//		if (t->a.key < ins->a.key && ins->a.key < t1->a.key) {
//			t->next = ins;
//			ins->next = t1;
//			return;
//		}
//		t = t1;
//		t1 = t1->next;
//	}
//	t->next = ins;
//	ins->next = NULL;
//}
//
//void Delete(List **begin, const A &a) {
//	if (*begin == NULL) {
//		return;
//	}
//	List *t = *begin;
//	if (t->a.key == a.key) {
//		*begin = t->next;
//		delete t;
//		return;
//	}
//	List *t1 = t->next;
//
//	while (t1) {
//		if (t1->a.key == a.key) {
//			t->next = t1->next;
//			delete t1;
//			return;
//		}
//		t = t1;
//		t1 = t1->next;
//	}
//
//}
//
//void Add_end(List **begin, const A &a) {
//	List *ins = new List;
//	ins->a = a;
//	List *t = *begin;
//	ins->next = NULL;
//	while (1) {
//		if (!t->next) {
//			t->next = ins;
//			break;
//		}
//		t = t->next;
//	}
//}
//
//void Free(List **begin) {
//	if (*begin == 0) return;
//	List *p = *begin;
//	List *t;
//
//	while (p) {
//		t = p;
//		p = p->next;
//		delete t;
//	}
//	*begin = NULL;
//}
//
//int main()
//{
//	List* begin = NULL;
//	A a = { 80 }, b = { 56 }, c = {981};
//	Init(&begin);
//	Print(begin);
//	//Add_begin(&begin, a);
//	Insert(&begin, a);
//	Print(begin);
//	Delete(&begin, b);
//	Print(begin);
//	//Free(&begin);
//	//Print(begin);
//	Add_end(&begin, c);
//	Print(begin);
//
//	_getch();
//	return 0;
//}