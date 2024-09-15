#include<iostream>
using namespace std;
int main(){
    int n; 
    int sum;
    cout<<"\nEnter n:";
    cin>>n;
    sum=(n*(n+1)/2);
    cout<<"\nThe sum of first "<<n<<" number is "<<sum;
    return 0;
}