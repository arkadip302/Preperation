#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        string s = to_string(n);
        if ((int)s.length() / 2 != 9)
        {
            string str = s;
            cout << str.length() / 2 << endl;
            for (int i = (int)(str.length() / 2); i < str.length(); i++)
            {
            }
        }
    }
}