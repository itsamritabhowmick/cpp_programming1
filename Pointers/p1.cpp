#include<iostream>
using namespace std;
void swap(int &a, int &b){
    a=a+b;
    b=a-b;
    a=a-b;
}
int main(){
    int a,b;
    cout<<"\nbefore swapping a and b is:";
    cin>>a>>b;
    swap(a,b);
    cout<<"\nafter swapping a is "<<a<<" and b is "<<b;
    return 0;
}