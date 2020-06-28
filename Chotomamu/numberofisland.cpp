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
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}
void find(int a, int b, vector<int> A[], int N, int M)
{
    if (a < 0 || a >= M || b < 0 || b >= N || A[a][b] == 0)
    {
        return;
    }
    A[a][b] = 0;
    for (int i = -1; i <= 1; i++)
    {
        for (int j = -1; j <= 1; j++)
        {
            find(a + i, b + i, A, N, M);
        }
    }
}
int findIslands(vector<int> A[], int N, int M)
{
    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == 1)
            {
                find(i, j, A, N, M);
                count += 1;
            }
        }
    }
    return count;
}