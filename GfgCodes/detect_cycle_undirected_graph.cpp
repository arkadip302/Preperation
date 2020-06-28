#include <bits/stdc++.h>
using namespace std;
bool dfs(int s, vector<int> adj[], bool vis[], int parent)
{
    vis[s] = true;
    for (int i : adj[s])
    {
        if (vis[i] == false)
        {
            if (dfs(i, adj, vis, s) == true)
            {
                return true;
            }
        }
        else if (i != parent)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, s; //vertex and source are given
        cin >> v >> e;
        vector<int> adj[v];
        bool visited[v];
        for (int i = 0; i < v; i++)
        {
            visited[i] = false;
        }
        while (e--)
        {
            int x, y;
            cin >> x >> y;       //adjacency input
            adj[x].push_back(y); //2 D array type
            adj[y].push_back(x); //2D array type
        }
        for (int i = 0; i < v; i++)
        {
            if (visited[i] == false)
            {
                if (dfs(i, adj, visited, -1) == true)
                {
                    return true;
                }
            }
        }
        return false;
    }
}