#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int c = -1, d = 1, a, b, i, ans;
	cout << "Enter the start number of Fibonachi:";
	cin >> a;
	cout << "Enter the end number of Fibonachi:";
	cin >> b;
	if (a < 0 || b < a) {
		cout << "You've entered the wrong number (it has to be positive, real and the second bigger than the first ), would you like to try again? 1 - yes, 2 - no";
		int q;
		cin >> q;
	}

	for (i = 0; i <= b; i++)
	{
		ans = c + d;
		c = d;
		d = ans;
		if (c >= a && ans % 2 == 0) {
			cout << ans << " ";
		}
	}
	_getch();
	return 0;
}