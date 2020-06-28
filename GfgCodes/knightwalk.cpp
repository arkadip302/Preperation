#include <bits/stdc++.h>
using namespace std;
void kinghtwalk(int xs, int ys, int xe, int ye, int N, int M);
vector<int> v;
int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        int N, M;
        bool arr[N][M];
        cin >> N >> M;
        int xs, ys, xe, ye;
        cin >> xs >> ys >> xe >> ye;
        kinghtwalk(xs - 1, ys - 1, xe - 1, ye - 1, N, M);
        cout << v.size() << endl;
    }
    return 0;
}

void find(int xs, int ys, int xe, int ye, int &count, int N, int M)
{
    cout << xs << ys << endl;
    if (xs < 0 || ys < 0 || xs >= N || ys >= M)
    {
        return;
    }
    count++;
    cout << "Noe" << endl;
    if (xs == xe && ys == ye)
    {
        cout << "now  here" << endl;
        v.push_back(count);
    }
    else
    {
        find(xs + 2, ys - 1, xe, ye, count, N, M);
        cout << "now  here 1" << endl;
        find(xs + 2, ys + 1, xe, ye, count, N, M);
        cout << "now  here 2" << endl;
        find(xs - 2, ys - 1, xe, ye, count, N, M);
        cout << "now  here 3" << endl;
        find(xs + 2, ys - 1, xe, ye, count, N, M);
        cout << "now  here 4" << endl;
    }
}
void kinghtwalk(int xs, int ys, int xe, int ye, int N, int M)
{
    cout << "here 1" << endl;
    int count = 0;
    find(xs, ys, xe, ye, count, N, M);
}