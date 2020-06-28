#include <bits/stdc++.h>
using namespace std;
int counts = 0;
void even_nodes(int s, vector<int> v[], bool vis[], int count)
{
    vis[s] = true;
    count++;
    cout << "now here " << count << endl;
    if (count % 3 == 0)
    {
        ::counts++;
    }
    cout << v[s].size() << endl;
    for (int i = 0; i < v[s].size(); i++)
    {
        //cout << "now here (1/2" << endl;
        if (vis[i] == false)
        {
            even_nodes(i, v, vis, count);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp = 0;
        vector<int> v[n - 1];
        memset(v, 0, sizeof(v));
        while (temp < n - 1)
        {
            int x, y;
            cin >> x >> y;
            v[x - 1].push_back(y - 1);
            temp++;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << v[i][j];
            }
        }
        bool vis[n];
        memset(vis, false, sizeof(vis));
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cout << "here" << endl;
            if (vis[i] == false)
                even_nodes(i, v, vis, count);
        }
        cout << "here now ends" << endl;
        cout << ::counts << endl;
    }
}