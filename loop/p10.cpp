#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter n";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }
    return 0;
}