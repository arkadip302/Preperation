#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--)
    {
        getline(cin, s);
        string s1 = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (s1.find(s[i]) == string::npos)
            {
                s1 = s1 + s[i];
            }
        }
        cout << s1 << endl;
    }
}