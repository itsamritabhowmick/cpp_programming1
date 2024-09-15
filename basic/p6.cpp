#include<iostream>
using namespace std;
int main(){
    int p;//principle
    double r;//rate of interest
    int t;//time period
    double total;
    cout<<"\nEnter principle:";
    cin>>p;
    cout<<"\nEnter rate of interest:";
    cin>>r;
    cout<<"\nEnter time period";
    cin>>t;
    total=((p*r*t)*1.0)/100;
    cout<<"\nThe total is:"<<total;
    return 0;
    
}