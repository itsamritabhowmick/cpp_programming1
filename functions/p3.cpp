//wap to print permutation and combination
#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int permutation(int n,int r){
    int npr;
    npr=(factorial(n)/factorial(n-r));
    return npr;
}
int combination(int n,int r){
    int ncr;
    ncr=(factorial(n)/(factorial(r)*factorial(n-r)));
    return ncr;
}
using namespace std;
int main(){
    int n;
    int r;
    cout<<"\nEnter n:";
    cin>>n;
    cout<<"\nEnter r:";
    cin>>r;
    int res=permutation(n,r);
    int res1=combination(n,r);
    cout<<"\nThe permutation of "<<n<<" and "<<r<<" is: "<<res;
    cout<<"\nThe combination of "<<n<<" and "<<r<<" is: "<<res1;
    return 0;
}