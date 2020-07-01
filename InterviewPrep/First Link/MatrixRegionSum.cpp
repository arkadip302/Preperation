#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int top_left[2], bottom_right[2];
    for (int j = 0; j < 2; j++)
    {
        cin >> top_left[j];
    }
    for (int j = 0; j < 2; j++)
    {
        cin >> bottom_right[j];
    }
    int sum = 0;
    for (int i = 0; i < top_left[0] - bottom_right[0] + 1; i++)
    {
        for (int j = 0; j < top_left[1] - bottom_right[1] + 1; j++)
        {
            cout << "Here" << endl;
            sum += mat[i][j];
        }
    }
    cout << sum << endl;
}