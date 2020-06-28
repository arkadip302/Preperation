#include <iostream>
using namespace std;
bool flag;

void help(int sx, int sy, int x, int y, int n, int **arr)
{
    if (sx < 0 || sy < 0 || sx >= n || sy >= n || arr[sx][sy] == 0)
        return;

    if (sx == x && sy == y)
    {
        flag = true;
        return;
    }
    arr[sx][sy] = 0;
    help(sx + 1, sy, x, y, n, arr);
    help(sx - 1, sy, x, y, n, arr);
    help(sx, sy + 1, x, y, n, arr);
    help(sx, sy - 1, x, y, n, arr);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int **arr = new int *[n];
        for (int i = 0; i < n; i++)
            arr[i] = new int[n];
        int sx, sy, ex, ey;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 1)
                {
                    sx = i;
                    sy = j;
                }
                if (arr[i][j] == 2)
                {
                    ex = i;
                    ey = j;
                }
            }
        }
        flag = false;
        help(sx, sy, ex, ey, n, arr);
        if (flag == true)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}