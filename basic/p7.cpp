#include<iostream>
using namespace std;
int main(){
    int t;
    int a;
    int b;
    cout<<"\nenter a:";
    cin>>a;
    cout<<"\nenter b:";
    cin>>b;
    cout<<"\nBefore swapping The value of a is:"<<a<<"\nThe value of b is:"<<b;
    t=a;
    a=b;
    b=t;
    cout<<"\nAfter swapping The value of a is:"<<a<<"\nThe value of b is:"<<b;
    return 0;
}