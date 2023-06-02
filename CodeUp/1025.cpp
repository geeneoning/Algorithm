#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	char c, d, e, f, g;
	int a;

	cin >> c;
	a = c - '0';
	cout << "[" << a * 10000 << "]" << endl;
	cin >> d;
	a = d - '0';
	cout << "[" << a * 1000 << "]" << endl;
	cin >> e;
	a = e - '0';
	cout << "[" << a * 100 << "]" << endl;
	cin >> f;
	a = f - '0';
	cout << "[" << a * 10 << "]" << endl;
	cin >> g;
	a = g - '0';
	cout << "[" << a * 1 << "]" << endl;

	return 0;
}
