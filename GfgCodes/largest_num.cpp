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
        string res;
        //int arr[n];
        set<int> arr;
        map<int, string> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            arr.insert(x);
        }
        auto j = arr.begin();
        for (int i = 0; i < n; i++)
        {
            v.insert({(int)(to_string((*j)[0])), to_string(*j)});
            j++;
        }
        //cout<<v.size();
        for (auto i = arr.begin(); i != arr.end(); ++i)
            cout << *i << " ";
        while (v.size() != 0)
        {
            int max = -99;
            auto pos = v.begin();
            for (auto i = v.begin(); i != v.end(); i++)
            {
                if ((int)((*i)[0]) > max)
                {
                    max = (int)((*i)[0]);
                    pos = i;
                }
                /*else if((int)((*i)[0])==max){
                    pos=v.end();
                    break;
                }*/
            }
            cout << endl;
            res = res + *pos;
            v.erase(pos);
            for (auto i = v.begin(); i != v.end(); i++)
                cout << *i << " ";
        }
        cout << res << endl;
        cout << "endl"
    }
}
