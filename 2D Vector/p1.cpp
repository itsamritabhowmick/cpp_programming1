#include<iostream>
#include<vector>
using namespace std;
int main(){
    int r,c;
    cout<<"\nEnter row and column:";
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    cout<<endl<<"Enter elements in the array:";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nThe array is:\n";
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum=sum+arr[i][j];
        }
    }
    cout<<endl<<"The sum of all elements is : "<<sum;
    return 0;
}