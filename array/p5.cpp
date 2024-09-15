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
    int max=arr[0];
    for (int i=0; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"\nThe maximum element is "<<max;
    int smax=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=max){
            if(arr[i]>smax){
                smax=arr[i];
            }
        }
    }
    cout<<"\nThe second largest element is "<<smax;
    return 0;
}