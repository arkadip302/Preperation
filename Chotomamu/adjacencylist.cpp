#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int v, e;
        cin >> v >> e;      //vertices and edges
        vector<int> adj[v]; //creating a 2D array using vector
        int temp = e;
        while (temp--)
        {
            int x, y;
            cin >> x >> y;       //adjacency input
            adj[x].push_back(y); //2 D array type
            adj[y].push_back(x); //2D array type
        }
        for (int i = 0; i < v; i++)
        {
            cout << i;
            for (auto j = adj[i].begin(); j != adj[i].end(); ++j)
            {
                cout << "-> " << *j;
            }
            cout << endl;
        }
    }
}