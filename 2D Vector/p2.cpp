#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maximum_elem(vector<vector<int>> &arr)
{
    int max=INT_MIN;
    int row=arr.size();
    int col=arr[0].size();
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){//for(j=0; j<arr[i].size(); j++):int col ta define na korle j er loop ta eivabe cholto
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int main(){
    int row,col;
    cout<<"\nEnter row and column:";
    cin>>row>>col;
    vector<vector<int>> arr(row,vector<int>(col));
    cout<<"\nEnter elements in the array";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nThe array is:\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    int res=maximum_elem(arr);
    cout<<"\nThe maximum element is:"<<res;
    return 0;
}