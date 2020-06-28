#include <bits/stdc++.h>
using namespace std;
int findIslands(vector<int> A[], int N, int M);

int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++)
        {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++)
            {
                cin >> A[i][j];
            }
        }
        int ex, ey;
        cin >> ex >> ey;
        cout << findIslands(A, N, M, ex, ey) << endl;
    }
    return 0;
}
void find(int a, int b, vector<int> A[], int N, int M, int &count, int ex, int ey)
{
    if (a < 0 || a >= N || b < 0 || b >= M || A[a][b] == 0)
    {
        return;
    }
    A[a][b] = 0;
    if (a == ex && b == ey)
    {
    }
    count++;
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            find(a + i, b + j, A, N, M, count);
        }
    }
}
int findIslands(vector<int> A[], int N, int M, int ex, int ey)
{
    int mincount = 9999, count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == 1)
            {
                find(i, j, A, N, M, count, ex, ey);
                cout << count << " ";
                if (mincount > count)
                {
                    mincount = count;
                }
                count = 0;
            }
        }
    }
    return mincount;
}