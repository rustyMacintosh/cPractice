#include <conio.h> 
#include <iostream> 

using std::cout;
using std::cin;
using std::endl;

struct Time {
	unsigned int hours;
	unsigned int minutes;
	unsigned int seconds;
};

void input(int hours, int minutes, int seconds, Time &t) {
	if (minutes >= 60 || seconds >= 60) {
		t.hours, t.minutes, t.seconds = 0;
		return;
	}
	t.hours = hours;
	t.minutes = minutes;
	t.seconds = seconds;
}

void show(Time &t) {
	cout << t.hours << ":" << t.minutes << ":" << t.seconds;
}

Time timeAdd(Time &t1, Time &t2) {
	Time t;
	t.seconds = t1.seconds + t2.seconds;
	if (t.seconds > 60) {
		t.seconds = t.seconds % 60;
		t.minutes = t1.minutes + t2.minutes + 1;
	}else t.minutes = t1.minutes + t2.minutes;
	if (t.minutes > 60) {
		t.minutes = t.minutes % 60;
		t.hours = t1.hours + t2.hours + 1;
	}
	else t.hours = t1.hours + t2.hours;
	return t;
}

int main()
{
	Time t1;
	input(3, 40, 26, t1);
	Time t2;
	input(2, 37, 53, t2);
	Time t = timeAdd(t1, t2);

	show(t1);
	cout << " + ";
	show(t2);
	cout << " = ";
	show(t);

	_getch();
	return 0;
}