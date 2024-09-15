#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    double avg;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"\nEnter second number:";
    cin>>b;
    cout<<"\nEnter third number:";
    cin>>c;
    avg=((a+b+c)*1.0)/3.0;
    cout<<"\nThe average of three numbers is:\t"<<avg;
    return 0;
}