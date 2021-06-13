#include <iostream>
using namespace std;

int main()
{
	int n{};

	cout << "Input n: ";
	cin >> n;
	if (n <= 0)
		cout <<"Error"<< endl;
	else
	{
		int count = 0;
		while (n > 0)
		{
			if ((n % 10) % 2 == 0)
				count++;
			n /= 10;
		}
		cout << "Even numbers= " << count <<endl;
	}

	return 0;
}
