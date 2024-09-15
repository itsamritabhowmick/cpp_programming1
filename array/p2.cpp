#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    cout<<"\nenter elements in the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nThe array is:";
    for(int i=0; i<n; i++){
        cout<<"\t"<<arr[i];
    }
    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+arr[i];
    }
    cout<<"\nThe sum is "<<sum;
    return 0;
}