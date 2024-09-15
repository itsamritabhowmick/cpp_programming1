#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    if(n>0){
        cout<<"\nThe value is:"<<n;
    }
    else{
      cout<<"\nThe value is:"<<-n;
    }
    return 0;
}