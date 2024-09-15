#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    int f=n*factorial(n-1);
    return f;
}
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    int res=factorial(n);
    cout<<res;
    return 0;
}