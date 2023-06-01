#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	char d[30];
	cin >> d;
	for (int i = 0; d[i] != '\0'; i++)
	{
		cout << "'" << d[i] << "'" << endl;
	}
}
