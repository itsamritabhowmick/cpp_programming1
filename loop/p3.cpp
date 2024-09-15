#include<iostream>
using namespace std;
int main(){
    int n;
    int counter=0;
    cout<<"\nEnter n:";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            counter++;
        }
    }
    if(counter==2){
        cout<<"\nThe number is prime";
    }
    else{
        cout<<"\nThe number is not prime";
    }
    return 0;
}