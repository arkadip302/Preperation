#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,num,count=0;
    cin>>t;
    while(t--){
        cin>>num;
        while(num!=0){
            if(num%2!=0){
                count++;
            }
            num=num/2;
        }
        cout<<count<<endl;
        count=0;
    }
}