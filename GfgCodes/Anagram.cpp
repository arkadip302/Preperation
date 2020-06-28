#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string flush;
    getline(cin, flush);
    while (t--)
    {
        string s;
        int a = 0, b = 0;
        getline(cin, s);
        int pos;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == ' ')
                pos = i;
        }
        for (int i = 0; i < s.size(); i++)
        {
            // cout<<(int)s[i];
            if (i < pos)
            {
                a += (int)s[i];
            }
            else if (i == pos)
            {
            }
            else
            {
                b += (int)s[i];
            }
        }
        //cout<<a<<" "<<b<<endl;
        if (a == b)
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}