#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<endl<<"Enter n:";
    cin>>n;
    vector<int>arr;
    cout<<"\nEnter elements in the array:";
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<endl<<"The Array is:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    int sum=0;
    for(int i=0; i<arr.size(); i++){
        sum=sum+arr[i];
    }
    cout<<endl<<"The sum of all elements in the array is "<<sum;
    return 0;
}