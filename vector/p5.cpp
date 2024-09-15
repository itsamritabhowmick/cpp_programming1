#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>arr;
    int sum=0;
    cout<<"\nEnter n:";
    cin>>n;
    cout<<endl<<"Enter elements in the array:";
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<"\nThe array is:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2!=0){
            sum=sum+arr[i];
        }
    }
    cout<<"\nThe sum of all odd elements:"<<sum;
    return 0;
}