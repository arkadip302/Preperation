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
        int freq_visit[v];
        memset(freq_visit, 0, sizeof(freq_visit));
        for (int i = 0; i < v; i++)
        {
            visited[i] = false;
        }
        while (e--)
        {
            int x, y;
            cin >> x >> y;       //adjacency input
            adj[x].push_back(y); //2 D array type
        }
    }
}