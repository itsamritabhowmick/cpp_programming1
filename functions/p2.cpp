//wap to print cube root of a number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    double cuberoot;
    cout<<"\nEnter a number:";
    cin>>n;
    cuberoot=cbrt(n);
    cout<<"\nThe cuberoot of "<<n<<" is "<<cuberoot;
    return 0;
}