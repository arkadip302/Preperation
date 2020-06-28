#include<bits/stdc++.h>
using namespace std;
int numbers(int num){
    int r=0;
    while(num!=0){
        r=r+num%10;
        num=num/10;
    }
    return r;
}
int main(){
    int n;
    cin>>n;
    while(n/10>0){
        n=numbers(n);
    }
    cout<<n;
    return 0;
}