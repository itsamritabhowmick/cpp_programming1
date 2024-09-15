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
    int min=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"\nThe minimum element is "<<min;
    return 0;
}