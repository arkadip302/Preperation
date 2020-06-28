#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int N, E, s;
        cin >> N >> E >> s;

        vector<int> adj[N];
        bool vis[N];
        int value[N];
        memset(vis, false, sizeof(vis));
        memset(value, -1, sizeof(value));

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        queue<int> q;
        q.push(s);
        value[s] = 0;
        vis[s] = true;
        while (q.empty() == false)
        {
            int p = q.front();
            q.pop();
            for (int i : adj[p])
            {
                if (vis[i] == true && value[p] + 1 < value[i])
                {
                    value[i] = value[p] + 1;
                }
                else if (vis[i] == false)
                {
                    q.push(i);
                    vis[i] = true;
                    value[i] = value[p] + 1;
                }
            }
        }
        for (int i = 0; i < N; i++)
        {
            cout << value[i] << " ";
        }
        cout << endl;
    }
}