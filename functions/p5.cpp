#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"\nEnter a,b before swapping:";
    cin>>a>>b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"\nafter swapping a is "<<a<<" and b is "<<b;
    return 0;
}