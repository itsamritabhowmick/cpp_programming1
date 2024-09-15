//wap to print sum of two numbers
#include<iostream>
using namespace std;
int sum(int a, int b){
    int s=a+b;
    return s;
}
int main(){
    int a,b;
    cout<<"\nEnter a:";
    cin>>a;
    cout<<"\nEnter b:";
    cin>>b;
    int res=sum(a,b);
    cout<<"The sum of "<<a<<" and "<<b<<" is "<<res;
    return 0;
}