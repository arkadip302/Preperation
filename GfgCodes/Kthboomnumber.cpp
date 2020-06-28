#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        if (n == 1)
        {
            cout << 2 << endl;
        }
        else if (n == 2)
        {
            cout << 3 << endl;
        }
        else
        {
            queue<int> q;
            q.push(2);
            q.push(3);
            n = n - 2;
            while (n--)
            {
                int temp = q.front();
                q.pop();
            }
        }
    }
}