#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int y, m, d;
	char dot;

	cin >> y >> dot >> m >> dot >> d;
	cout << setfill('0') << setw(2) << d  << '-';
	cout << setfill('0') << setw(2) << m  << '-';
	cout << setfill('0') << setw(4) << y ;
}
