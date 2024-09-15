#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    int *arr=new int[n];
    cout<<"\nenter elements in the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\nThe array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    //selection sort
    for(int i=0; i<n-1; i++){
        int min=arr[i];
        int pos=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                pos=j;
            }
        }
        // int t=arr[i];
        // arr[i]=arr[pos];
        // arr[pos]=t;
        swap(arr[i],arr[pos]);
    }
    cout<<"\nThe sorted array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    delete[]arr;
    return 0;
}