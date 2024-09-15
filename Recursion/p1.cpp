#include<iostream>
using namespace std;
void print(int x){
    if(x==0){
       return; 
    }
    cout<<x<<"\n";
    print(x-1);
}
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    print(n);
    return 0;
}