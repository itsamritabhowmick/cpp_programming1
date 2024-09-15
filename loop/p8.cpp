#include<iostream>
using namespace std;
int main(){
    int n;
    int rev=0;
    cout<<"\nEnter n:";
    cin>>n;
    int t=n;
    while(t>0){
        int d=t%10;
        rev=(rev*10)+d;
        t=t/10;
    }
    if(rev==n){
        cout<<"\n"<<n<<" is a pallindrome number";
    }
    else{
        cout<<"\n"<<n<<" is not a pallindrome number";
    }
}