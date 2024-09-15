#include<iostream>
#include<vector>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int i, int j){
    int ncr=(factorial(i)/(factorial(j)*factorial(i-j)));
    return ncr;
}
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            arr[i][j]=combination(i,j);
        }
    }
    cout<<"\nThe matrix is:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}