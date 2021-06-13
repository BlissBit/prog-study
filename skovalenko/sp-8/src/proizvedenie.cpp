#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter A:" << endl;
	cin >> a;
	cout  << "Enter B:" << endl;
	cin >> b;
	if (a < 10 || b < 10)
	{
		cout << "Noob! Enter A and B > || = 10" << endl;
	}
	else if ((a * b) > 9999999)
	{
		cout << "OMG OMG OMG" << endl;
		system("pause");
	}
	cout << "Result: " << a * b << endl;
	return 0;
}
