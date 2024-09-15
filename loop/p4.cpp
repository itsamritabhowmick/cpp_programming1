#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"\nEnter number:";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count>2){
        cout<<"\nIt is composite number:";
    }
    else{
        cout<<"\nIt is not a composite number:";
    }
    return 0;
}