#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<endl<<"Enter n:";
    cin>>n;
    int X;
    cout<<endl<<"Enter the X: ";
    cin>>X;
    vector<int>arr;
    cout<<"\nThe elements in the array:";
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"\nThe array is:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    int count=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]>X){
            count++;
        }  
    }
    cout<<"\nThe no of elements is "<<count;
    return 0;
}