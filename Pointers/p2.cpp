#include<iostream>
using namespace std;
void add(int a,int b,int &sum)
{
    sum=a+b;
}
int main(){
    int a,b;
    int sum=0;
    cout<<"\nEnter two numbers:";
    cin>>a>>b;
    add(a,b,sum);
    cout<<"\nThe sum of "<<a<<" and "<<b<<" is "<<sum;
    return 0;
}