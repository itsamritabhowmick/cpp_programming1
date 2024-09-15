#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout<<"\nEnter n";
    cin>>n;
    int t=n;
    while(t>0){
        int d= t%10;
        rev=(rev*10)+d;
        t=t/10;
    }
    int add=rev+n;
    cout<<"\nThe sum is "<<add;
    return 0;
}
