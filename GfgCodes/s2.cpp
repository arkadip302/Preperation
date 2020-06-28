#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a Number" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Number Is Even" << endl;
    }
    else
    {
        cout << "Number Is Odd" << endl;
    }
    return 0;
}