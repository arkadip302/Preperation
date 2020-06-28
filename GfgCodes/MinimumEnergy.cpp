#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0,final=1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
            {
                if (count<((-1)*arr[i])){
                    final=final+(((-1)*arr[i])-count);
                    //cout<<final<<endl;
                    count=0;
                }
            }
            else
            {
                count += arr[i];
                
            }
        }
        cout<<final<<endl;
    }
}