#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<endl<<"Enter n:";
    cin>>n;
    vector<int>arr;
    cout<<endl<<"Enter elements in the array:";
    for(int i=0; i<n; i++){
        int elem;
        cin>>elem;
        arr.push_back(elem);
    }
    cout<<endl<<"The array is: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    int max=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<endl<<"The maximum element is :"<<max;
    return 0;
}