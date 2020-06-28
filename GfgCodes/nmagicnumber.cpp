#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<string> q;
        q.push("4");
        q.push("5");
        for (int i = 1; i <= n; i++)
        {
            string s1 = q.front();
            q.pop();
            cout << s1 << endl;
            q.push(s1 + '4');
            string s2 = q.front();
            if (i % 2 == 0)
            {
                q.push(s1 + '5');
                q.push(s2 + '4');
            }
            q.pop();
            cout << s2 << endl;
            q.push(s2 + '5');
        }
        cout << endl;
    }
    return 0;
}