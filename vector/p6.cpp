#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    int sum=0;
    vector<int>arr;
    cout<<"\nenter n:";
    cin>>n;
    cout<<"\nEnter elements in the array";
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<endl<<"The array is:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    for(int i=0; i<arr.size(); i++){
        if(i%2!=0){
            sum=sum+arr[i];
        }
    }
    cout<<endl<<"The sum of all odd index is: "<<sum;
    return 0;
}