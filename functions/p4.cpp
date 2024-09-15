#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1; 
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n, int r)
{
    int ncr;
    ncr=(factorial(n)/(factorial(r)*factorial(n-r)));
    return ncr;
}
int main(){
    int n;
    cout<<"\nEnter n;";
    cin>>n;
    for(int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            int res=combination(i,j);
            cout<<res<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}