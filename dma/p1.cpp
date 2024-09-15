#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    int *arr=new int[n];
    cout<<"\nEnter elements in the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nThe array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    //bubble sort
    for(int i=0; i<n-1; i++){
        int fl=0;
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                fl=1;
            }
        }
        if(fl==0){
            break;
        }
    }
    cout<<"\nThe sorted array is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    delete[]arr;
    return 0;
}