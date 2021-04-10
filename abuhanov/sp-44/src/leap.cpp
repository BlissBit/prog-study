#include <iostream>

using namespace std;

int main()
{
    int year{};
    cout << "Enter year\n";
    cin >> year;
    
    if (year % 4 == 0&& year % 100 || year % 100==0 && year % 400 == 0)
    {
        cout << "It's a leap Year!\n";
    }
    else
    {
        cout << "It isn't leap Year!\n";
    }
    return 0;
}
