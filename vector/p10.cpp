#include<iostream>
#include<vector>
using namespace std;
void secondLargest(vector<int> &arr)
{
    int n=arr.size();
    int max=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int smax=arr[0];
    for(int i=1; i<arr.size(); i++){
        if(arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"\nThe second largest element is: "<<smax;
    return;
}
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
    cout<<"\nThe array is:";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<"\t";
    }
    secondLargest(arr);
    return 0;
}