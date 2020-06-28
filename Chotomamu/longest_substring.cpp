#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s,s1;
    getline(cin,s);
    while (t--)
    {   
        int max_size=0;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            size_t found=s1.find(s[i]);
            if(found==string::npos){
                s1=s1+s[i];
            }
            else if(max_size<s1.size()){
                max_size=s1.size();
                s1.clear();
                //s1=s1+s[i];
            }
        }
        if(max_size!=0)
            cout<<max_size<<endl;
        else{
            cout<<s.size()<<endl;
        }
    }
}
        