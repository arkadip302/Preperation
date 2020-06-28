#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    getline(cin,s);
    stack<char>st;
    st.push(s[0]);
    for(int i=1;i<s.size();i++){
        if(st.top()!=s[i]){
            st.push(s[i]);
        }
        else{
            if(st.top()!=s[i+1])
                st.pop();
            else{
                st.pop();
                i++;
            }
                
        }
    }
    while(st.empty()==false){
        s1=st.top()+s1;
        st.pop();
    }    
    cout<<s1;
}