#include<iostream>
using namespace std;
int add(int n){
    if(n==1){
        return 1;
    }
    int sum;
    sum=n+add(n-1);
    return sum;
}
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    int res=add(n);
    cout<<res;
    return 0;

}