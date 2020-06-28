#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e, s; //vertex and source are given
        cin >> v >> e >> s;
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
        queue<int> q;
        q.push(s);
        visited[s] = true;
        while (q.empty() == false)
        {
            int u = q.front();
            cout << u << " ";
            q.pop();
            for (auto i = adj[u].begin(); i != adj[u].end(); ++i)
            {
                if (visited[*i] == false)
                {
                    visited[*i] = true;
                    q.push(*i);
                }
            }
        }
    }
}