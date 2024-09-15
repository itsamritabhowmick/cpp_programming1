#include<iostream>
using namespace std;
int power(int a, int b){
    if(b==0){
        return 1;
    }
    if((b&1)==0){
        return power(a,b/2)*power(a,b/2);
    }
    else{
        return a*power(a,b/2)*power(a,b/2);
    }
}
int main(){
    int a,b;
    cout<<"\nenter a,b";
    cin>>a>>b;
    int res=power(a,b);
    cout<<res;
    return 0;
}