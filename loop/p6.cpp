#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"\nEnter n:";
    cin>>n;
    int t=n;
    while(t>0){
        int d=t%10;
        sum=sum+d;
        t=t/10;
    }
    cout<<"\nThe sum is:"<<sum;
    return 0;
}