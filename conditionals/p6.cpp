#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter n";
    cin>>n;
    if ((n%5==0 || n%3==0) && n%15!=0)
    {
        cout<<"\nThe number is divisible by 5 or 3 but not divisible by 15";
    }
    else{
        cout<<"\nThe number is divisible by 15";
    }
    return 0;
}