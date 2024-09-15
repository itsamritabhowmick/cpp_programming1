#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        int min=arr[i];
        int pos=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                pos=j;
            }
        }
        swap(arr[i],arr[pos]);
    }
}
int main(){
    int n;
    cout<<endl<<"Enter n:";
    cin>>n;
    int *arr=new int[n];
    cout<<endl<<"enter elements in the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl<<"The array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    selection_sort(arr,n);
    cout<<endl<<"The sorted array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    delete[]arr;
    return 0;
}