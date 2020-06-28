#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp, print;
        float q = (float)(n / 26);
        if (q - (int)q > 0)
        {
            print = (int)q + 1;
        }
        if (n % 26 > 0)
        {
            temp = n % 26;
        }
    }
}