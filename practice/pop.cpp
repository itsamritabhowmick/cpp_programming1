#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"\nenter n:";
    cin>>n;
    vector<int>arr;
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"\nThe array is:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    int x=arr.pop_back();
    cout<<"\nThe popped array is:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    cout<<x;
    return 0;
}