#include<iostream>
using namespace std;
int main(){
    int row;
    int col;
    cout<<"\nenter row and column";
    cin>>row>>col;

    for(int i=1; i<=row; i++){
        for(int j=1; j<=col; j++){
            if(i==1 || i==row || j==1|| j==col){
                cout<<"*\t";
            }
            else{
                cout<<" \t";
            }
        }

        cout<<"\n";
    }
    return 0;
}