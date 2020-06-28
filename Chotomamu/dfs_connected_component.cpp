#include <bits/stdc++.h>
using namespace std;
void dfs(int s, vector<int> adj[], bool vis[])
{
    //cout << s << " ";
    vis[s] = true;
    for (int i : adj[s])
    {
        if (vis[i] == false)
        {
            dfs(i, adj, vis);
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {

        int N, E;
        cin >> N >> E;

        vector<int> g[N];
        bool vis[N];
        memset(vis, false, sizeof(vis));

        for (int i = 0; i < E; i++)
        {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        int connencted_component = 0;
        for (int i = 0; i < N; i++)
        {
            if (vis[i] == false)
            {
                dfs(i, g, vis);
                connencted_component++;
            }
        }
        cout << connencted_component << endl;
    }
}