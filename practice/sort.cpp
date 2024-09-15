#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"\nEnter n:\t";
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"\nThe array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    sort(arr.begin(),arr.end());
    cout<<"\nThe sorted array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}