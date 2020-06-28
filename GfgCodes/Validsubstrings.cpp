
//IMPORTANT QUESTIONS

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string f;
        cin >> f;
        int n;
        n = f.length();
        int max1 = 0;
        stack<int> s;
        s.push(-1);
        for (int i = 0; i < n; i++)
        {
            if ((f[i] == ')') && (!s.empty()))
            {
                if ((f[s.top()] == '('))
                {
                    s.pop();
                    if ((!s.empty()) && (max1 < i - s.top()))
                        max1 = i - s.top();
                }
                else if ((!s.empty()))
                {
                    s.pop();
                    s.push(i);
                    continue;
                }
            }
            else
                s.push(i);
        }
        cout << max1 << endl;
    }
}
