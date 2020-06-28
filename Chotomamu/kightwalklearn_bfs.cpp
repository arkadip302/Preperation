#include <bits/stdc++.h>
using namespace std;
int mn = INT_MAX;
int visi[26][26];
int safe(int x, int y, int n, int m)
{
    if (x > 0 && y > 0 && x <= n && y <= m)
        return 1;
    return 0;
}
void solve(int x1, int y1, int x2, int y2, int moves, int n, int m)
{
    visi[x1][y1] = min(visi[x1][y1], moves);
    if (x1 == x2 && y1 == y2)
    {
        return;
    }
    //cout<<"x1 is "<<x1<<" y1 is "<<y1<<endl;
    int x[8] = {2, -2, 2, -2, 1, -1, 1, -1};
    int y[8] = {1, 1, -1, -1, 2, -2, -2, 2};
    // cout<<"dsjf"<<endl;
    for (int i = 0; i < 8; i++)
    {
        if (safe(x1 + x[i], y1 + y[i], n, m) && (visi[x1][y1] + 1) < (visi[x1 + x[i]][y1 + y[i]]))
        {
            solve(x1 + x[i], y1 + y[i], x2, y2, visi[x1][y1] + 1, n, m);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, x1, y1, x2, y2;
        cin >> n >> m;
        mn = INT_MAX;
        for (int i = 1; i <= 25; i++)
        {
            for (int j = 1; j <= 25; j++)
                visi[i][j] = INT_MAX;
        }
        cin >> x1 >> y1 >> x2 >> y2;
        solve(x1, y1, x2, y2, 0, n, m);
        if (visi[x2][y2] == INT_MAX)
            visi[x2][y2] = -1;
        cout << visi[x2][y2] << endl;
    }
    //code
    return 0;
}