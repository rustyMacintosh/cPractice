#include <conio.h> 
#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

struct Stack {
	int key;
	Stack *next;
};

void print(Stack *b) {
	Stack *print = b;
	while (print)
	{
		cout << print->key << "->";
		print = print->next;
	}
	cout << "NULL\n";
}

void push(Stack **next, int d) {
	Stack *pv = new Stack;
	pv->key = d;
	pv->next = *next;
	*next = pv;
}

int pop(Stack **next) {
	int temp = (*next)->key;
	Stack *pv = *next;

	(*next) = (*next)->next;
	delete pv;
	return temp;
}

int main()
{
	Stack *begin = NULL;
	for (int i = 0; i < 4; i++)
	{
		push(&begin, i + 1);
	}
	print(begin);
	cout << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << pop(&begin) << " ";
	}

	_getch();
	return 0;
}