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
    //insertion sort
    for(int i=0; i<n-1; i++){
        int j=i+1;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    cout<<"\nThe sorted array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    delete[]arr;
    return 0;
}
