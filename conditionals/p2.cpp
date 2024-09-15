#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\nEnter a,b:";
    cin>>a>>b;
    // if(a<b){
    //     cout<<a<<" is minimum";
    // }
    // else{
    //     cout<<b<<" is mninimum";
    // }
    int m=min(a,b);
    cout<<"\nThe minimum value is:"<< m << endl;
    return 0;
}