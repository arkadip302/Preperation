#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    
    cout<<"Input three different integers separated by spaces"<<endl;
    cin>>num1>>num2>>num3;

    cout<<"Sum = "<<num1+num2+num3<<endl;

    cout<<"Average = "<<(num1+num2+num3)/3<<endl;

    cout<<"Product = "<<num1*num2*num3<<endl;

    //Smallest

    if(num1<num2 && num1<num3)
        cout<<"Smallest  = "<<num1+num2+num3<<endl;
    if(num2<num3 && num2<num1)
        cout<<"Smallest  = "<<num1+num2+num3<<endl;
    if(num3<num2 && num3<num1)
        cout<<"Smallest  = "<<num1+num2+num3<<endl;

    //Largest

     if(num1>num2 && num1>num3)
        cout<<"Largest   = "<<num1+num2+num3<<endl;
    if(num2>num3 && num2>num1)
        cout<<"Largest   = "<<num1+num2+num3<<endl;
    if(num3>num2 && num3>num1)
        cout<<"Largest   = "<<num1+num2+num3<<endl;
}