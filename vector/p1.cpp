#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>arr;
    cout<<endl<<"Enter n:";
    cin>>n;
    cout<<endl<<"Enter elements in the array:";
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<endl<<"the array is:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}