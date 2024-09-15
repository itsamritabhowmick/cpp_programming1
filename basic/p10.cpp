#include<iostream>
using namespace std;
int main(){
    double length,width;
    cout<<"\nEnter length &width:";
    cin>>length>>width;
    double c= 2*(length+width);
    cout<<"\nthe perimeter of rectangle is:"<<c;
    return 0;
}