#include<bits/stdc++.h>
using namespace std;
void find_prime(bool array[],int n){
    array[0]=array[1]=false;
    for(int i=2;i<n;i++){
        array[i]=true;
    }
    for(int p=2;p*p<=n;p++){
        for(int i=p*p;i<=n;i=i+p){
            array[i]=false;
        }
    }
}
void check_isprime(int n){
    bool array[n+1];
    int flag=0;
    find_prime(array,n+1);
    for(int i=0;i<n;i++){
        if(array[i]&&array[n-i]){
            cout<<i<<" "<<n-i<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<-1<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        check_isprime(n);
    }
}