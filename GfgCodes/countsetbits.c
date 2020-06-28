#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,count=0;
    printf("Enter the numer to find set bits\n");
    scanf("%d",&n);
    while(n>0){
        n=n&n-1 ;
        count++;
    }
    printf("%d\n",count);
}