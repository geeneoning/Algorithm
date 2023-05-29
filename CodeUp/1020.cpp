#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b;
	char dash;

	cin >> a >> dash >> b;

	cout << setfill('0') << setw(6) << a << setfill('0') << setw(7) << b;
}
