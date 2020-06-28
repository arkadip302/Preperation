#include <bits/stdc++.h>
using namespace std;
void possible_paths(int sv, int ev, vector<int> adj[], bool vis[]);
int count = 0;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ::count = 0;
        int v, e;
        cin >> v >> e;
        vector<int> adj[v + 1];
        bool vis[v + 1];
        memset(vis, false, sizeof(vis));
        while (e--)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        int sv, ev;
        cin >> sv >> ev;
        possible_paths(sv, ev, adj, vis);
        cout << ::count << endl;
    }
}
void possible_paths(int sv, int ev, vector<int> adj[], bool vis[])
{
    vis[sv] = true;
    if (sv == ev)
    {
        ::count++;
    }
    else
    {
        for (int i : adj[sv])
        {
            if (vis[i] == false)
            {
                possible_paths(i, ev, adj, vis);
            }
        }
    }
    vis[sv] = false;
}
