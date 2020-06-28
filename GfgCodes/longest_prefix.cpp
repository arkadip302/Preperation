#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string arr[n],flush;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int min=INT_MAX;
        int index=0;
        for(int i=0;i<n;i++){
            if(arr[i].size()<min){
                min=arr[i].size();
                index=i;
            }
        }
        int i=0,flag=0;
        string s;
        while(i<min){
            for(int j=0;j<n;j++){
                if(arr[index].at(i)!=arr[j].at(i)){
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                 s=s+arr[index].at(i);
            i++;
            if(flag==1)
                break;
        }
        if(s.size()>0)
        cout<<s<<endl;
        else
        {
            cout<<-1<<endl;
        }
        
    }
    
}