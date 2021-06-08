#include <iostream>
using namespace std;
int main()
{
    int num;
    {
        cout << "Enter number: ";
        cin >> num;
        for (int i = 1; i <= 20; i++)
        {
            cout << num;
            cout << " * ";
            cout << i;
            cout << " = ";
            cout << num * i << endl;
        }
    }
    return 0;
}
