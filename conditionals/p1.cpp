#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\nEnter a,b:";
    cin>>a>>b;
    // if(a>b){
    //     cout<<a<<" is maximum";
    // }
    // else{
    //     cout<<b<<" is maximum";
    // }
     int m=max(a,b);
    cout<<"\nThe maximum value is:"<< m << endl;
    return 0;
}