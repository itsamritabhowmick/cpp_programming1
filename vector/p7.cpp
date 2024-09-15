#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int>&arr){
    int n=arr.size();
    for(int i=0; i<n-1; i++){
        int fl=0;
        for(int j=0; j<arr.size()-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                fl=1;
            }
        }
        if(fl==0){
            break;
        }
    }
}
int main(){
    int n;
    cout<<"\nEnter n:";
    cin>>n;
    vector<int>arr;
    cout<<"\nenter elements:";
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"\nThe array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    bubble_sort(arr);
    cout<<"\nThe sorted array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}