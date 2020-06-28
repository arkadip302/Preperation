#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    while (t--)
    {
        string s1;
        int count=0;
        getline(cin, s);
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            s1 = s1 + i->first;
        }
        string temp=s1;
        int j=0,min=99,counter=0;
        for(int i=0;i<s.size();i++){
            if(j<s1.size() && s1.find(s[i])!=string::npos){
                j++;
            }
            cout<<s1;
            counter++;
            if(s1.size()==0){
                count++;
                if(counter<min){
                    min=counter;
                }
                counter=0;
                i=i-1;
            }
        }
        cout<<count<<" "<<min<<endl;
    }
}